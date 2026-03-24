#include <iostream>

void checkString() {
  int inputNumber;
  std::cin >> inputNumber;

  char input[200000];
  std::cin >> input;

  if (inputNumber % 2 != 0 && input[0] == 'b') {
    std::cout << "NO" << std::endl;
    return;
  }

  for (int i = 0; i < inputNumber; i++) {
    if (input[i] != '?' && (i + 1) % 2 != inputNumber % 2 && input[i] == input[i + 1]) {
      std::cout << "NO" << std::endl;
      return;
    }
  }

  std::cout << "YES" << std::endl;
}

int main() {
  int counter = 0;
  int input = 0;

  std::cin >> input;

  while (counter++ < input) {
    checkString();
  }

  return 0;
}
