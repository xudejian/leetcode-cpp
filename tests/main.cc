#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

#include "gtest/gtest.h"

#define RED "\033[0;32;31m"
#define NONE "\033[m"

static jmp_buf jmp_env;

static void catch_alarm(int sig) { longjmp(jmp_env, 1); }

class MyTestListener : public ::testing::EmptyTestEventListener {
  void OnTestStart(const ::testing::TestInfo& test_info) override {
    const auto val = setjmp(jmp_env);
    if (val == 1) {
      GTEST_FATAL_FAILURE_(RED "Time Limit Exceeded" NONE);
    } else {
      signal(SIGALRM, catch_alarm);
      ualarm(500, 0);
    }
  }

  void OnTestEnd(const ::testing::TestInfo& test_info) override {
    ualarm(0, 0);
    ASSERT_LT(test_info.result()->elapsed_time(), 500) << "Time Limit Exceeded";
  }
};

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  if (getenv("noTLE") == NULL) {
    ::testing::UnitTest::GetInstance()->listeners().Append(
        new MyTestListener());
  }
  return RUN_ALL_TESTS();
}
