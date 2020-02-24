#pragma once

#include "ofApp.h"
#include "ofMain.h"
#include "../dCell.h"
#include "ofGraphics.h"

enum DIRECTION { NORTH, SOUTH, EAST, WEST }; //possible directions of sailor

class ofApp : public ofBaseApp{

	private:
		//map vars
		glm::vec2 mapPosition = glm::vec2(0, 0);
		dCell cellMap[20][20];

		//sailor vars
		DIRECTION nextStep;
		glm::vec2 currentPosition = glm::vec2(10, 10);



	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
