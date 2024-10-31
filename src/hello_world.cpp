#include <iostream>

namespace {

int factorial(int n) {
  if (n <= 1)
    return 1;

  return n * factorial(n - 1);
}

} // namespace

int main() {
  int number = 5;
  std::cout << "Factorial of " << number << " is " << factorial(number) << "\n";
  return 0;
}
