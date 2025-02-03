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
		//Key for BubbleSorts
		if (key == 'b') {
			bubbleSort();
		}
		//Key for InsertionSort
		if (key == 'i') {
			insertionSort();
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
//--------------------------------------------------------------
void ofApp::generateRandomNumbers() {
	numbers.clear();
	for (int i = 0; i < 5; i++) {
		numbers.push_back(ofRandom(10, 100));
	}
}
//--------------------------------------------------------------
void ofApp::bubbleSort() {
	for (int i = 0; i < numbers.size() - 1; i++) {
		for (int j = 0; j < numbers.size() - i - 1; j++) {
			if (numbers[j] > numbers[j + 1]) {
				std::swap(numbers[j], numbers[j + 1]);
			}
		}
	}
}
//--------------------------------------------------------------
void ofApp::insertionSort() {
	for (int i = 1; i < numbers.size(); i++) {
		int key = numbers[i];
		int j = i - 1;
		while (j >= 0 && numbers[j] > key) {
			numbers[j + 1] = numbers[j];
			j--;
		}
		numbers[j + 1] = key;
	}
}