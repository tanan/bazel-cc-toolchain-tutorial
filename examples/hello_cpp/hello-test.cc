#include <gtest/gtest.h>
#include "examples/hello_cpp/hello-greet.h"

using namespace examples::hello_cpp;

namespace {
TEST(HelloTest, GetGreet) { EXPECT_EQ(get_greet("Bazel"), "Hello Bazel"); }
}  // namespace
