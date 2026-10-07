#include <iostream>

// Lab 6 — Bavly 
// CIS 5 Week 06 · Even and odd

int main() {
  int evenSum = 0;
  for (int i = 0; i <= 100; i = i + 2)
  {
    evenSum = evenSum + i;
  }
  std::cout << "sum of even numbers from 0 to 100: " << evenSum <<"\n";
  int oddSum = 0;
  int j = 1;
  while (j <= 99)
  {
      oddSum = oddSum + j;
      j = j + 2;
  }
  std::cout << "Sum of odd numbers from 1 to 99: " << oddSum << "\n";

  return 0;
}
