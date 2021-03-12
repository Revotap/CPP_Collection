/*
	Author: Leon Grell
*/

#ifndef MEDIA_H_
#define MEDIA_H_

#include <iostream>

class Media {
	static int id_counter;
	const int id;

	const char* titel;
	int year;

public:
	Media(const char* n_titel, int n_year) : id{ id_counter++ }, titel{ n_titel }, year{ n_year }{};
	virtual ~Media() {};

	/*	
		Usual methods, implemented in .cpp
		Returns age based on the year 2020
	*/
	int age() {
		return 2020 - year;
	}

	/*Virtual methods, overwritten by children*/
	virtual void printData(void) = 0;

	/*Getter and Setter as inline methods*/
	int getID() {
		return id;
	};
	const char* getTitel() {
		return titel;
	};
	int getYear() {
		return year;
	};

	
};

int Media::id_counter = 0;

#endif
