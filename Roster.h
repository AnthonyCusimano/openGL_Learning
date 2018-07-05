#ifndef _ROSTER_DOT_H
#define _ROSTER_DOT_H

#include <stdio.h>

#include "CharacterGraphic.h"

struct CharacterNode {

	CharacterNode(CharacterGraphic& _myGuy) {

		this->myCharacter = _myGuy;

	}

	~CharacterNode() {

		

	}

	CharacterGraphic myCharacter;
	CharacterNode *nextNode;

};

class ActiveRoster {
public:

	/**
	
	*/
	ActiveRoster() {

		this->front = this->back = 0;
		this->mySize = 0;

	}

	char getSize() {
		return this->mySize;
	}

	/**
	returns true if mySize = 0
	*/
	bool getIsEmpty(){		
		if (this->mySize == 0) return true;
		return false;		
	}

	/**
	does not check if empty
	*/
	const CharacterNode* getFront() {
		return this->front;
	}

	/**
	does not check if empty
	*/
	const CharacterNode* getBack() {
		return this->back;
	}

	void PushFront(CharacterGraphic& _newFront) {

		CharacterNode* T_NewFront = new CharacterNode(_newFront);

		if (this->mySize == 0)
			this->front = this->back = T_NewFront;
			
		else {

			T_NewFront->nextNode = this->front;

			this->front = T_NewFront;

		}

		//either way incriment the size
		++this->mySize;
		T_NewFront = 0;
		//ness?
		delete T_NewFront;			

	}

	void PushBack(CharacterGraphic& _newBack) {

		CharacterNode* T_NewBack = new CharacterNode(_newBack);

		if (this->mySize == 0)
			this->front = this->back = T_NewBack;

		else {

			this->back->nextNode = T_NewBack;
			this->back = T_NewBack;

		}

		++this->mySize;
		T_NewBack = 0;
		//ness?
		delete T_NewBack;

	}

	/**
	bad destructor
	*/
	~ActiveRoster() {

		std::cout << "Currently calling a terrible version of ActiveRoster's destructor\nIf you ever have a list greater than 2 elements you're fucked\n";

		if (this->front)	delete this->front;
		if (this->back)		delete this->back;

		this->front = this->back = 0;

	}

private:

	//
	char mySize;
	
	//first node in the Roster
	CharacterNode *front, *back;

};
#endif