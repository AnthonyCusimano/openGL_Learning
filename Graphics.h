#ifndef GRAPHICS_DOT_H
#define GRAPHICS_DOT_H

#include <glut.h>

#include <math.h>
#include <iostream>

#include "Grid.h"
#include "Roster.h"

float GridSquare::OUR_SIZE;
float CharacterGraphic::CHARACTER_SIZE;

/****************/

/*GridSquare *ourSquare;
GridSquare *ourOtherSquare;*/
/*float theta = 0.0f;

int R = 3; //distance*/

Grid ourGrid;

CharacterGraphic ourCharacter;

void DrawQuad() {

	glPushMatrix();

	for (int i = 0; i < MAP_ONE_LENGTH; ++i) {
		for (int j = 0; j < MAP_ONE_HEIGHT; ++j) {

			glBegin(GL_POLYGON);
			
			glColor3f(ourGrid.theGrid[i][j].myColour.R, ourGrid.theGrid[i][j].myColour.G, ourGrid.theGrid[i][j].myColour.B);

			//bottom left
			glVertex3f(ourGrid.theGrid[i][j].myPosition.x, ourGrid.theGrid[i][j].myPosition.y, 0.0f);

			//top left
			glVertex3f(ourGrid.theGrid[i][j].myPosition.x + GridSquare::OUR_SIZE, ourGrid.theGrid[i][j].myPosition.y, 0.0f);

			//top right
			glVertex3f(ourGrid.theGrid[i][j].myPosition.x + GridSquare::OUR_SIZE, ourGrid.theGrid[i][j].myPosition.y + GridSquare::OUR_SIZE, 0.0f);

			//bottom right
			glVertex3f(ourGrid.theGrid[i][j].myPosition.x, ourGrid.theGrid[i][j].myPosition.y + GridSquare::OUR_SIZE, 0.0f);

			glEnd();

		}

	}
	
	glPopMatrix();
	glClearColor(0.0, 0.0, 0.0, 0.0);

}

void DrawCharacters() {

	glPushMatrix();
		glBegin(GL_POLYGON);

			glColor3f(ourCharacter.myTexture.R, ourCharacter.myTexture.G, ourCharacter.myTexture.B);

			//bottm left
			glVertex3f(ourCharacter.myPosition.x, ourCharacter.myPosition.y, 0.1f);
			//top left
			glVertex3f(ourCharacter.myPosition.x + CharacterGraphic::CHARACTER_SIZE, ourCharacter.myPosition.y, 0.1f);
			//top right
			glVertex3f(ourCharacter.myPosition.x + CharacterGraphic::CHARACTER_SIZE, ourCharacter.myPosition.y + CharacterGraphic::CHARACTER_SIZE, 0.1f);
			//bottom right
			glVertex3f(ourCharacter.myPosition.x, ourCharacter.myPosition.y + CharacterGraphic::CHARACTER_SIZE, 0.1f);


		glEnd();
	glPopMatrix();
	glClearColor(0.0, 0.0, 0.0, 0.0);

}

/**
show the board
*/
void Display()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//gluLookAt(R * ::sinf(theta),R,-5  * ::cosf(theta), 0,0,0, 0,1,0);

	gluLookAt(0, 0, 7.6,
		0, 0, 0,
		0, 1, 0);

	//glLightfv(GL_LIGHT0, GL_POSITION, light_po);

	::DrawQuad();
	::DrawCharacters();

	glutSwapBuffers();
	glutPostRedisplay();
}

/**

*/
void Reshape(int _width, int _height) {

	//I need to look into what these gl function calls do
	glViewport(0, 0, (GLsizei)_width, (GLsizei)_height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1, 1, -1, 1, 2, 10.0);
	glMatrixMode(GL_MODELVIEW);

}

/**

*/
void init(void){

	glClearColor(0.0, 0.0, 0.0, 0.0);
	glEnable(GL_DEPTH_TEST);

	std::cout << ::glGetString(GL_VERSION) << '\n';

}
#endif