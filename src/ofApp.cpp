#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	fboOS = 1;

	ofSetFrameRate(60);
	//fbo.allocate(ofGetWidth()*fboOS, ofGetHeight()*fboOS);
	fbo.allocate(ofGetWidth()*fboOS, ofGetHeight()*fboOS, GL_RGBA, 4);
}

//--------------------------------------------------------------
void ofApp::update(){
	fbo.begin();

	ofClear(0,0,0,255);
	ofSetCircleResolution(60);
	ofSetColor(255,0,0);
	ofCircle(ofGetMouseX()*fboOS,ofGetMouseY()*fboOS,50*fboOS);

	fbo.end();

	//Spout
	//spout.sendTexture(kitten.getTextureReference(), "kitten");
	//spout.sendTexture(snow.getTextureReference(), "snow");
	spout.sendTexture(fbo.getTextureReference(), "spout_midi_test01");

}

//--------------------------------------------------------------
void ofApp::draw(){
	fbo.draw(0,0,ofGetWidth(),ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::exit() {
	spout.exit();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
