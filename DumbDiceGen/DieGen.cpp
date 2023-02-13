#include "DieGen.h"

DieGen::DieGen(int maxFace_set) :
    maxFace{ maxFace_set }, minFace{ 1 }, dieResult{ 0 }  
{
}

int DieGen::rollDie()
{
	// beginning random seed
	std::random_device rSeed;
	std::mt19937 randomGen(rSeed());
	std::uniform_int_distribution<int> dist(minFace, maxFace);


	dieResult = dist(randomGen);
	return dieResult;
}
