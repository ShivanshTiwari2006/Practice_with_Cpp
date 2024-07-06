#include <iostream>

using namespace std;

int main() {
  int sideLength, sideA, sideB, sideC;
  double area;

  cout << "Enter side length of triangle: ";
  cin >> sideLength;

  cout << "Enter side a: ";
  cin >> sideA;

  cout << "Enter side b: ";
  cin >> sideB;

  cout << "Enter side c: ";
  cin >> sideC;

  // Check for valid triangle (sum of any two sides must be greater than the third)
  // Implement this check before calculating area

  int s = (sideA + sideB + sideC) / 2; // Semi-perimeter

  area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));

  cout << "Area of the triangle is: " << area << endl;

  return 0;
}
