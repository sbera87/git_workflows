#include <iostream>

namespace {

int factorials(int n) {
  if (n <= 1)
    return 1;
  return n * factorials(n - 1);
}

int factorials2(int n) {
  if (n <= 1)
    return 1;
  return n * factorials2(n - 1);
}

} // namespace

int main() {
  int number = 5;
  std::cout << "Factorial of " << number << " is " << factorials(number)
            << "\n";
  return 0;
}

// dummy
