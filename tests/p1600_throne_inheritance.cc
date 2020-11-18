#include "p1600_throne_inheritance.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p1600_throne_inheritance;

TEST(p1600_throne_inheritance, Example1) {
  ThroneInheritance t = ThroneInheritance("king");
  t.birth("king", "andy");
  t.birth("king", "bob");
  t.birth("king", "catherine");
  t.birth("andy", "matthew");
  t.birth("bob", "alex");
  t.birth("bob", "asha");
  vector<string> order = {"king", "andy", "matthew",  "bob",
                          "alex", "asha", "catherine"};
  EXPECT_EQ(order, t.getInheritanceOrder());
  t.death("bob");
  vector<string> order2 = {"king", "andy", "matthew",
                           "alex", "asha", "catherine"};
  EXPECT_EQ(order2, t.getInheritanceOrder());
}

}  // namespace
