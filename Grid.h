#ifndef GRID_DOT_H
#define GRID_DOT_H

#include <vector>

#include "GridSquare.h"

const int MAP_ONE_LENGTH = 3;
const int MAP_ONE_HEIGHT = 3;

class Grid {
public:

	GridSquare theGrid[MAP_ONE_LENGTH][MAP_ONE_HEIGHT];

	/**
	
	*/
	Grid();

	/**
	
	*/
	void Init();

	/**
	
	*/
	//Grid(char const _xSize, char const _ySize);

	/**
	
	*/
	~Grid();

private:

	

};
#endif