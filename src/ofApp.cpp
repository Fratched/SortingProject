#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	 
		generateRandomNumbers();
	//Added Comments
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
	void ofApp::draw(){
	
			// Draw circle with random radius at a specific position
		float x = 100; // Starting x position
		float y = ofGetHeight() / 2; // Center y position
		float spacing = 150; // Space between circles

		ofBackground(255); // White background
		

		//put in a for loop
		for (int i = 0; i < numbers.size(); i++) {
			ofSetColor(0, 0, 190); 
			ofDrawCircle(x, y, numbers[i]); // Draw circle

			ofSetColor(255, 255, 255); // White color for text
			ofDrawBitmapString(ofToString(numbers[i]), x - 10, y + 5); // Display number
			x += spacing; // Move to the next position

		}
	}

	

//--------------------------------------------------------------
void ofApp::keyPressed(int key){



	 // if we press the r key generateRandomNumbers for the circles radius
		if (key == 'r') {
			generateRandomNumbers();
		}
	
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

void ofApp::generateRandomNumbers() {
	numbers.clear();
	for (int i = 0; i < 5; i++) {
		numbers.push_back(ofRandom(10, 100));
	}
}