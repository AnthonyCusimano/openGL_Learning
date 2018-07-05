#include "Grid.h"

Grid::Grid() {

	this->theGrid[0][0].AssignType(SQUARE_TYPE_DESERT);
	this->theGrid[0][0].myPosition.x = this->theGrid[0][0].myPosition.y = 0.0f;

	this->theGrid[0][1].AssignType(SQUARE_TYPE_DESERT);
	this->theGrid[0][1].myPosition.x = 1.0f;
	this->theGrid[0][1].myPosition.y = 0.0f;

	this->theGrid[0][2].AssignType(SQUARE_TYPE_DESERT);
	this->theGrid[0][2].myPosition.x = 2.0f;
	this->theGrid[0][2].myPosition.y = 0.0f;


	this->theGrid[1][0].AssignType(SQUARE_TYPE_PLAIN);
	this->theGrid[1][0].myPosition.x = 0.0f;
	this->theGrid[1][0].myPosition.y = 1.0f;

	this->theGrid[1][1].AssignType(SQUARE_TYPE_FOREST);
	this->theGrid[1][1].myPosition.x = this->theGrid[1][1].myPosition.y = 1.0f;

	this->theGrid[1][2].AssignType(SQUARE_TYPE_FOREST);
	this->theGrid[1][2].myPosition.x = 2.0f;
	this->theGrid[1][2].myPosition.y = 1.0f;


	this->theGrid[2][0].AssignType(SQUARE_TYPE_PLAIN);
	this->theGrid[2][0].myPosition.x = 0.0f;
	this->theGrid[2][0].myPosition.y = 2.0f;


	this->theGrid[2][1].AssignType(SQUARE_TYPE_DESERT);
	this->theGrid[2][1].myPosition.x = 1.0f;
	this->theGrid[2][1].myPosition.y = 2.0f;

	this->theGrid[2][2].AssignType(SQUARE_TYPE_FOREST);
	this->theGrid[2][2].myPosition.x = this->theGrid[2][2].myPosition.y = 2.0f;


}

void Grid::Init() {

	this->theGrid[0][0].AssignType(SQUARE_TYPE_DESERT);
	this->theGrid[0][0].myPosition.x = this->theGrid[0][0].myPosition.y = 0.0f;

	this->theGrid[0][1].AssignType(SQUARE_TYPE_DESERT);
	this->theGrid[0][1].myPosition.x = 1.0f;
	this->theGrid[0][1].myPosition.y = 0.0f;

	this->theGrid[0][2].AssignType(SQUARE_TYPE_DESERT);
	this->theGrid[0][2].myPosition.x = 2.0f;
	this->theGrid[0][2].myPosition.y = 0.0f;


	this->theGrid[1][0].AssignType(SQUARE_TYPE_PLAIN);
	this->theGrid[1][0].myPosition.x = 0.0f;
	this->theGrid[1][0].myPosition.y = 1.0f;

	this->theGrid[1][1].AssignType(SQUARE_TYPE_FOREST);
	this->theGrid[1][1].myPosition.x = this->theGrid[1][1].myPosition.y = 1.0f;

	this->theGrid[1][2].AssignType(SQUARE_TYPE_FOREST);
	this->theGrid[1][2].myPosition.x = 2.0f;
	this->theGrid[1][2].myPosition.y = 1.0f;


	this->theGrid[2][0].AssignType(SQUARE_TYPE_PLAIN);
	this->theGrid[2][0].myPosition.x = 0.0f;
	this->theGrid[2][0].myPosition.y = 2.0f;


	this->theGrid[2][1].AssignType(SQUARE_TYPE_DESERT);
	this->theGrid[2][1].myPosition.x = 1.0f;
	this->theGrid[2][1].myPosition.y = 2.0f;

	this->theGrid[2][2].AssignType(SQUARE_TYPE_FOREST);
	this->theGrid[2][2].myPosition.x = this->theGrid[2][2].myPosition.y = 2.0f;

}

Grid::~Grid() {



}