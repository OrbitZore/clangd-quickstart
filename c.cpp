#include <iostream>
#include <string>

int main() {
  std::string s = "aba";
  do {
    std::cout << s << '\n';
  } while (std::next(s.begin(), s.end()));
  std::cout << s << '\n';
}