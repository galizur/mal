#include <iostream>
#include <string>

auto READ(std::string input) -> std::string;
auto EVAL(std::string input) -> std::string;
auto PRINT(std::string input) -> std::string;
auto rep(std::string input) -> std::string;

auto main() -> int {
  std::string input;
  for (;;) {
    std::cout << "user> ";
    if (!std::getline(std::cin, input)) {
      break;
    }
    std::cout << rep(input) << '\n';
  }

  return 0;
}

auto READ(std::string input) -> std::string { return input; }

auto EVAL(std::string input) -> std::string { return input; }

auto PRINT(std::string input) -> std::string { return input; }

auto rep(std::string input) -> std::string {
  auto read{READ(input)};
  auto eval{EVAL(read)};
  auto print{PRINT(eval)};

  return print;
}
