#include <iostream>

using namespace std;

int main() {
  int s;
  int a;
  int b;
  int c;

  cout << "Enter side length of triangle:" << endl;
  cin >> s;

  cout << "Enter side a: " << endl;
  cin >> a;

  cout << "Enter side b: " << endl;
  cin >> b;

  cout << "Enter side c: " << endl;
  cin >> c;

  int area = sqrt(s * (s - a) * (s - b) * (s - c));

  cout << "Area of the triangle is: " << area << endl;

  return 0;
}
