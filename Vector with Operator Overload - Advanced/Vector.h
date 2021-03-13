#ifndef VECTOR_H_
#define VECTOR_H_

#include <ostream>

class Vector {
private:
	float x;
	float y;
	float z;

public:
	/*Constructors*/
	Vector() {
		x = 0;
		y = 0;
		z = 0;
	};
	Vector(float n_x, float n_y, float n_z) : x{ n_x }, y{ n_y }, z{ n_z }{};

	/*Getter and Setter*/
	float getX() {
		return x;
	}
	void setX(float n_x) {
		x = n_x;
	}
	float getY() {
		return y;
	}
	void setY(float n_y) {
		y = n_y;
	}
	float getZ() {
		return z;
	}
	void setZ(float n_z) {
		z = n_z;
	}

	/*Operator Overloads*/

	/*Unary Operator -*/
	Vector operator - () {
		Vector tmp{};
		tmp.setX(this->x - 1);
		tmp.setY(this->y - 1);
		tmp.setZ(this->z - 1);

		return tmp;
	}
	/*Unary Operator +*/
	Vector operator + () {
		Vector tmp{};
		tmp.setX(this->x + 1);
		tmp.setY(this->y + 1);
		tmp.setZ(this->z + 1);

		return tmp;
	}

	/*Binary operator +, two vectors*/
	Vector operator + (const Vector& v1) {
		Vector tmp{};
		tmp.setX(this->x + v1.x);
		tmp.setY(this->y + v1.y);
		tmp.setZ(this->z + v1.z);

		return tmp;
	}
	/*Binary operator -, two vectors*/
	Vector operator - (const Vector& v1) {
		Vector tmp{};
		tmp.setX(this->x - v1.x);
		tmp.setY(this->y - v1.y);
		tmp.setZ(this->z - v1.z);

		return tmp;
	}
	
	/*Binary operator +, vector + konstant*/
	Vector operator + (int k) {
		Vector tmp{};
		tmp.setX(this->x + k);
		tmp.setY(this->y + k);
		tmp.setZ(this->z + k);

		return tmp;
	}
	/*Binary operator -, vector + konstant*/
	Vector operator - (int k) {
		Vector tmp{};
		tmp.setX(this->x - k);
		tmp.setY(this->y - k);
		tmp.setZ(this->z - k);

		return tmp;
	}

	/*Overloading ostream for custom output*/
	friend std::ostream& operator <<(std::ostream& stream, const Vector& vector) {
		stream << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
		return stream;
	}
};

#endif