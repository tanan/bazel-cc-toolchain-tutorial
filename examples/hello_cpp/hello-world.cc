#include <ctime>
#include <iostream>
#include <string>
#include "examples/hello_cpp/hello-greet.h"

using examples::hello_cpp::get_greet;

namespace {
void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}
}  // namespace

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  print_localtime();
  return 0;
}
