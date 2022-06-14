#pragma once
#include "GameAPI.h"

struct Stage
{
	std::wstring name;				// The name of the stage.
	time_t end;						// The timestamp of when the stage was completed.
};