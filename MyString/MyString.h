/*
	Author: Leon Grell
	Description: Own implementation of the String Class
*/

#include <string>

class MyString {
private:
	char* str;

public:
	MyString() {
		str = new char[1];
		str[0] = '\0';
	}
	MyString(const char* val) {
		if (val == nullptr) {
			str = new char[1];
			str[0] = '\0';
		}
		else {
			str = new char[strlen(val) + 1];
			strcpy_s(str, strlen(val) + 1,val);
		};
	}
	char operator [](int index) {
		return str[index];
	}
	size_t length() {
		return strlen(str);
	}
	char at(int pos) {
		return str[pos];
	}
	char* c_str() {
		return str;
	}
};
