#pragma once
#include <random>

class DieGen
{
private:
	int minFace{ 1 };
	int maxFace;
	int dieResult;
public:
	DieGen(int maxFace_set);
	int rollDie();
};

