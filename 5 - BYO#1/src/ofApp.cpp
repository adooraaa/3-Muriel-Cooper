#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255);
   // ofSetColor(0);
   
    // --------- amplitude ---------
        for (int i = 16; i < 80; i++){
            float amt = ofMap(i, 0, 80, 0, 400);
            float x = 500 + ofMap(sin(i*0.2), -1, 1, -amt, amt);
            ofDrawCircle(x,(i* mouseY), 0);
            
            ofSetColor(127 + 127 * sin(i*0.01));
    ofNoFill();
            ofSetLineWidth(10);
           
            
            ofDrawCurve(260, 260, 500, 900, x, (i *(0.05)* mouseY)+900, 500, mouseY*100);
         //   ofDrawCurve(0, 0, 400, 800, x, 800, 600, ((i/2)*0.1* mouseY));
            
            ofSetCurveResolution(200);
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
