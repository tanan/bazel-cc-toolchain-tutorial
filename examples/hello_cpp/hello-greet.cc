#include "examples/hello_cpp/hello-greet.h"
#include <string>

namespace examples {
namespace hello_cpp {
std::string get_greet(const std::string& who) { return "Hello " + who; }
}  // namespace hello_cpp
}  // namespace examples
