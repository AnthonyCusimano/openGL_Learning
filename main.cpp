#include "Graphics.h"

int main(int argc, char **argv) {

	GridSquare::OUR_SIZE = 1;
	CharacterGraphic::CHARACTER_SIZE = 0.8f;

	ourGrid.Init();

	/*ourSquare = new GridSquare(SQUARE_TYPE_DESERT);
	ourOtherSquare = new GridSquare(SQUARE_TYPE_FOREST);*/

	/*ourSquare->myType = SQUARE_TYPE_DESERT;
	ourSquare->myPosition.x = 1;
	ourSquare->myPosition.y = 2;

	ourOtherSquare->myType = SQUARE_TYPE_FOREST;
	ourOtherSquare->myPosition.x = 0;
	ourOtherSquare->myPosition.y = 2;*/

	glutInit(&argc, argv); // Initialize GLUT   
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH); // Set up a DOUBLE buffer 
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100); // Set the position of the window 
	glutCreateWindow("GitHub"); // Set the title for the window   

	init();

	glutDisplayFunc(Display); // Tell GLUT to use the method "display" for rendering   
	glutReshapeFunc(Reshape); // Tell GLUT to use the method "reshape" for reshaping
	glClearColor(0.0, 0.0, 0.0, 0.0);

	glEnable(GL_DEPTH_TEST);

	glutMainLoop(); // Enter GLUT's main loop   

	/*delete ourSquare;
	ourSquare = 0;

	delete ourOtherSquare;
	ourOtherSquare = 0;*/

}
