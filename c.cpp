#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string s = "abc";
  do {
    std::cout << s << '\n';
  } while (std::next(s.begin(), s.end()));
  std::cout << s << '\n';
}