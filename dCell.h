#pragma once
#include "ofMain.h"
#include <iostream>
#include "ofGraphics.h"

class dCell
{

public:
	int timesVisited = 0;
	glm::vec2 cellPosition = glm::vec2(0, 0);
	ofColor cellColor = ofColor(0, 0, 0);
	ofRectangle rect = ofRectangle(cellPosition, 40, 40);
	

	dCell() {};

	void incrimentColor() { cellColor.r += 7; };
	void incrimentVisits() { timesVisited++; };
};

