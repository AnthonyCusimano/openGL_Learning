#ifndef _GRID_SQUARE_H_
#define _GRID_SQUARE_H_

#include "GridPosition.h"

struct SquareColour {

	float R, G, B;

};

enum SQUARE_TYPE_ENUM {

	SQUARE_TYPE_PLAIN,
	SQUARE_TYPE_FOREST,
	SQUARE_TYPE_DESERT

};

class GridSquare {
public:

	static float OUR_SIZE;

	SQUARE_TYPE_ENUM myType;

	SquareColour myColour;

	GridPosition myPosition;

	/**
	
	*/
	GridSquare() {

		//:)

	}

	/**
	
	*/
	void AssignType(SQUARE_TYPE_ENUM const _myNewType) {

		if (_myNewType == SQUARE_TYPE_DESERT) {

			this->myColour.R = 1.0f;
			this->myColour.G = 0.2f;
			this->myColour.B = 0.0f;

		}

		else if (_myNewType == SQUARE_TYPE_FOREST) {

			this->myColour.R = 0.0f;
			this->myColour.G = 0.8f;
			this->myColour.B = 0.1f;

		}

		else if (_myNewType == SQUARE_TYPE_PLAIN) {

			this->myColour.R = 1.0f;
			this->myColour.G = 1.0f;
			this->myColour.B = 1.0f;

		}

		//actually assnigning the type proper
		this->myType = _myNewType;

	}

	/**

	*/
	GridSquare(SQUARE_TYPE_ENUM const _myType) {

		this->myType = _myType;

		if (this->myType == SQUARE_TYPE_DESERT) {

			this->myColour.R = 1.0f;
			this->myColour.G = 0.2f;
			this->myColour.B = 0.0f;

		}

		else if (this->myType == SQUARE_TYPE_FOREST) {

			this->myColour.R = 0.0f;
			this->myColour.G = 0.8f;
			this->myColour.B = 0.1f;

		}

		else if (this->myType == SQUARE_TYPE_PLAIN) {

			this->myColour.R = 1.0f;
			this->myColour.G = 1.0f;
			this->myColour.B = 1.0f;

		}


	}


	/**

	*/
	~GridSquare() {}

private:
};
#endif