#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

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
		void generateRandomNumbers(); //Added This i had to declare it for it to be used in ofApp.cpp
		void gotMessage(ofMessage msg);
		void bubbleSort(); //Bubble sort 
		void insertionSort(); //insertion Sort
		void mergeSort(int left, int right);//merge Sort
		//insertion Sort
		void merge(int left, int mid, int right);
		void quickSort(int low, int high);

		int partition(int low, int high);

		void shuffle();

		void delay(int milliseconds);

		

		

		std::vector<ofVec2f> positions;
		std::vector<int> numbers;

		bool sorting = false;
		int currentStep = 0;
		
		
		//declaring vector to save the random numbers
};
