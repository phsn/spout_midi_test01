#pragma once

#include "ofMain.h"
#include "ofxSpout2.h"
#include "ofxMidi.h"


class ofApp : public ofBaseApp, public ofxMidiListener{

	public:
		void setup();
		void update();
		void draw();

		void exit();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofFbo fbo;
		ofxSpout2 spout;

		ofPoint cPos;
		float circleRadius;

		void newMidiMessage(ofxMidiMessage& eventArgs);
	
		stringstream text;
	
		ofxMidiIn	midiIn;
		ofxMidiMessage midiMessage;
};
