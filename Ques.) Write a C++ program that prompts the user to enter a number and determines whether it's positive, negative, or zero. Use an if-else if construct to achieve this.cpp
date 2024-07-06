#include <iostream>

using namespace std;

int main() {
  int number;

  cout << "Enter a number" << endl;
  cin >> number;

  if (number > 0) {
    { // Unnecessary inner block
      cout << "The number is positive" << endl;
    }
  } else if (number < 0) {
    cout << "The number is negative" << endl;
  } else {
    cout << "The number is 0" << endl;
  }

  return 0;
}
