/*
	Author: Leon Grell
*/

#include "Vector.h"

int main() {
	Vector v1(1, 2, 3);
	Vector v2(2, 3, 4);

	/*Uses overloaded operator + to add both vectors together, Uses overloaded operator << to change the way it gets send to the outputstream*/
	std::cout << v1 + v2 << std::endl;
}