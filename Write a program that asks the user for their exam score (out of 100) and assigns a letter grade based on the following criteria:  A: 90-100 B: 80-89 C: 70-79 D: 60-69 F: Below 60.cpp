#include <iostream>

using namespace std;

int main() {
  int score;

  cout << "Please enter your score (0-100): ";
  cin >> score;

  if (score >= 90 && score < 100) {
    cout << "Your grade is: A" << endl;
  } else if (score >= 80 && score < 90) {
    cout << "Your grade is: B" << endl;
  } else if (score >= 70 && score < 80) {
    cout << "Your grade is: C" << endl;
  } else if (score >= 60 && score < 70) {
    cout << "Your grade is: D" << endl;
  } else {
    cout << "Your grade is: F" << endl;
  }

  return 0;
}
