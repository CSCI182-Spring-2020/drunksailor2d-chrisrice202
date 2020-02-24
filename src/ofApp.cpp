#include "ofApp.h"
#include "ofMain.h"
#include "../dCell.h"
#include "ofGraphics.h"
#include "ofColor.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//--------------------------------------------------------------
void ofApp::setup(){

	//Setup window
	ofBackground(0, 0, 0);
	ofSetVerticalSync(true);
	ofSetFrameRate(60);

	//seed the time
	srand(time(NULL));

	for (int x = 0; x < 20; x++) {

		for (int y = 0; y < 20; y++) {

			cellMap[x][y].rect.setPosition(mapPosition.x, mapPosition.y);
			mapPosition.x += 40;

		}

		mapPosition.x = 0;
		mapPosition.y += 40;

	}

}


//--------------------------------------------------------------
void ofApp::update(){

    //begin the simulation
    if (ofGetFrameNum() < 1000) { //take 1000 steps

        cellMap[(int)currentPosition.x][(int)currentPosition.y].incrimentVisits();
        cellMap[(int)currentPosition.x][(int)currentPosition.y].incrimentColor();
        nextStep = static_cast<DIRECTION>(rand() % 4);

        switch (nextStep) { //append sailor's current placement

        case NORTH:
            if (currentPosition.y == 19) {
                break;
            }
            currentPosition.y++;
            break;
        case SOUTH:
            if (currentPosition.y == 0) {
                break;
            }
            currentPosition.y--;
            break;
        case EAST:
            if (currentPosition.x == 19) {
                break;
            }
            currentPosition.x++;
            break;
        case WEST:
            if (currentPosition.x == 0) {
                break;
            }
            currentPosition.x--;
            break;
        }

    }

}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int x = 0; x < 20; x++) {

		for (int y = 0; y < 20; y++) {

            ofSetColor(cellMap[x][y].cellColor);
			ofDrawRectangle(cellMap[x][y].rect);

		}

	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
