/*
	Author: Leon Grell
*/

#ifndef AUDIO_H_
#define AUDIO_H_

#include "Media.h"

class Audio : public Media {
	const char* artist;
	int duration;

public:
	Audio(const char* n_titel, int n_year, const char* n_artist, int n_duration) : Media(n_titel, n_year) {
		artist = n_artist;
		duration = n_duration;
	};
	virtual ~Audio() {};

	/*Virtual method gets overwritten*/
	virtual void printData() override {
		std::cout << "ID = " << getID() << " \"" << getTitel() << "\" by " << artist << " from " << getYear() << " Duration: " << duration << " sec." << std::endl;
	};

	/*Getter and setting as inline methods*/
	const char* getArtist() {
		return artist;
	};
	int getDuration() {
		return duration;
	};
};

#endif
