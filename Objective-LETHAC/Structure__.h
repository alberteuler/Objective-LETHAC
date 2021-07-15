#pragma once
#include<unordered_map>
#include"part.h"
class Structure__
{
	std::unordered_map < Part__*, pair<Part__*, Part__*>> SysStr;
	void Sysbuild();
	Structure__() = default;
	~Structure__() = default;
};

