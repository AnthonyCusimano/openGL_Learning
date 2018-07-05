#ifndef _CHARACTER_GRAPHIC_H
#define _CHARACTER_GRAPHIC_H

#include "GridPosition.h"

/**

*/
struct CharacterTexture {

	float R, G, B;

};

/**

*/
class CharacterGraphic {
public:

	//
	GridPosition myPosition;

	//
	static float CHARACTER_SIZE;

	//the thing you see
	CharacterTexture myTexture;

	/**
	
	*/
	CharacterGraphic() {

		this->myPosition.x = 1;
		this->myPosition.y = 1;

		//lets assume every character looks like this
		this->myTexture.R = 0.75f;
		this->myTexture.G = 0.5f;
		this->myTexture.B = 0.0f;

	}

	/**
	
	*/
	~CharacterGraphic() {

		std::cout << "CharacterGraphic destructor called\n";

	}

private:
};

#endif