/*
	Author: Leon Grell
*/

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
using namespace std;

class Vector {
public:
	double x;
	double y;
	double z;

	Vector(double n_x, double n_y, double n_z) : x(n_x), y(n_y), z(n_z) {};

	/*Overloading binary operator +*/
	Vector operator + (const Vector &vector) {
		Vector result(0, 0, 0);
		result.x = this->x + vector.x;
		result.y = this->y + vector.y;
		result.z = this->z + vector.z;
		return result;
	}

	/*Overloading unary operator <<*/
	friend ostream& operator <<(ostream& stream, const Vector &vector) {
		stream << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
		return stream;
	}
};

#endif VECTOR_H_
