/*
	Author: Leon Grell
*/

#ifndef PICTURE_H_
#define PICTURE_H_

#include "Media.h"

class Picture : public Media {
	const char* location;

public:
	Picture(const char* n_titel, int n_year, const char* n_location) : Media(n_titel, n_year) {
		location = n_location;
	};

	/*Virtual method gets overwritten*/
	virtual void printData() override {
		std::cout << "ID = " << getID() << " \"" << getTitel() << "\" created in year " << getYear() << " in " << location << std::endl;
	};

	/*Getter and setting as inline methods*/
	const char* getLocation() {
		return location;
	};
};

#endif
