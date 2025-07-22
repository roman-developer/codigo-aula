#include <iostream>

using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x, y;

	cout << "Enter value for x: ";
	cin >> x;

	float x_squared = x * x;
  float pi_squared = pi * pi;
  
  float sub_positive_equation = pi_squared * ( x_squared + (0.5));
  float sub_negative_equation = pi_squared * (( x_squared - (0.5)) * ( x_squared - (0.5)));
  
  float first_factor = x_squared / sub_positive_equation;
  float second_factor = 1 + ((x_squared) / sub_negative_equation);
  
  y = first_factor * second_factor;
	
	cout << "y = " << y << endl;
	return 0;
}

// Input/Output samples:
// Input: 1 --> Output: y = 0.0949234
// Input: -1.5 --> Output: y = 0.0890702
// Input: 12.345 --> Output: y = 12.345