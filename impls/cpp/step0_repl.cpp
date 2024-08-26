#include <iostream>
#include <string>

#include "readline.hpp"

auto READ(std::string input) -> std::string;
auto EVAL(std::string input) -> std::string;
auto PRINT(std::string input) -> std::string;
auto rep(std::string input) -> std::string;

auto main() -> int {
  const auto path = "history.txt";
  linenoise::LoadHistory(path);

  while (true) {
    std::string input;
    auto quit{linenoise::Readline("user> ", input)};
    if(quit) {
      break;
    }
    std::cout << rep(input) << '\n';
    
    linenoise::AddHistory(input.c_str());
  }
  
  linenoise::SaveHistory(path);
  
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
