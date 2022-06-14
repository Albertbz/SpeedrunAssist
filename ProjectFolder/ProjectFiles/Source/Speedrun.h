#pragma once
#include "GameAPI.h"
#include "Misc.h"
class Speedrun {
	std::wstring category;				// The category of the speedrun.
	time_t beginning;					// When the speedrun began.
	std::vector<Stage> stages;			// A vector of all stages.

	/*
	* Constructor for the Speedrun class.
	* 
	* @param file The path of the file of the specific speedrunning category.
	*/
	Speedrun(std::istream& file);


};