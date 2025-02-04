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
			ofSetColor(170, 255, 0); 
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
		//key for mergeSort
		if (key == 'm') {
			mergeSort(0, numbers.size() - 1);
		}
		if (key == 'q') {
			quickSort(0, numbers.size() - 1);
		}

		if (key == 's') {
			shuffle();
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
//--------------------------------------------------------------

void ofApp::mergeSort(int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergeSort(left, mid);
		mergeSort(mid + 1, right);
		merge(left, mid, right);
	}
}
//--------------------------------------------------------------
void ofApp::merge(int left, int mid, int right) {
	std::vector<int> temp(numbers.size());
	int i = left, j = mid + 1, k = left;

	while (i <= mid && j <= right) {
		if (numbers[i] <= numbers[j]) {
			temp[k++] = numbers[i++];
		}
		else {
			temp[k++] = numbers[j++];
		}
	}

	while (i <= mid) {
		temp[k++] = numbers[i++];
	}

	while (j <= right) {
		temp[k++] = numbers[j++];
	}

	for (i = left; i <= right; i++) {
		numbers[i] = temp[i];
	}
}
//--------------------------------------------------------------
void ofApp::quickSort(int low, int high) {
	if (low < high) {
		int pi = partition(low, high);
		quickSort(low, pi - 1);
		quickSort(pi + 1, high);
	}
}
//--------------------------------------------------------------
int ofApp::partition(int low, int high) {
	int pivot = numbers[high];
	int i = low - 1;

	for (int j = low; j < high; j++) {
		if (numbers[j] < pivot) {
			i++;
			std::swap(numbers[i], numbers[j]);
		}
	}
	std::swap(numbers[i + 1], numbers[high]);
	return i + 1;
}

//--------------------------------------------------------------
//Kinda like shuffling a deck of cards keeping the same values
void ofApp::shuffle() {
	for (int i = numbers.size() - 1; i > 0; i--) {

		
		int j = ofRandom(0, i + 1);

		std::swap(numbers[i], numbers[j]);
	}
}



//final Push