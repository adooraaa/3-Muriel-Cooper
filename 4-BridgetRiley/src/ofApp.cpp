#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowShape(700, 1800);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(255);
    
        
        //-------
    
   
    //*
    
     for (int i=0; i<7; i++){
            
          float pct=ofMap(i,0,8,0,1);
           pct=powf(pct, (mouseX -35) * 0.0100);
           float x=ofMap(pct,0, 1, -45, 110);
         ofSetColor(0);
          ofDrawLine(x, 0, x, 1010);}
    
    
    for (int i=0; i<7; i++){
           
         float pct=ofMap(i,0,8,0,1);
          pct=powf(pct, (mouseX -35) * 0.0102);
          float x=ofMap(pct,0, 1, -45, 110);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    for (int i=0; i<7; i++){
           
         float pct=ofMap(i,0,8,0,1);
          pct=powf(pct, (mouseX -35) * 0.0103);
          float x=ofMap(pct,0, 1, -45, 110);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    for (int i=0; i<7; i++){
           
         float pct=ofMap(i,0,8,0,1);
          pct=powf(pct, (mouseX -35) * 0.0104);
          float x=ofMap(pct,0, 1, -45, 110);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    for (int i=0; i<7; i++){
           
         float pct=ofMap(i,0,8,0,1);
          pct=powf(pct, (mouseX -35) * 0.0105);
          float x=ofMap(pct,0, 1, -45, 110);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    for (int i=0; i<7; i++){
           
         float pct=ofMap(i,0,8,0,1);
          pct=powf(pct, (mouseX -35) * 0.0106);
          float x=ofMap(pct,0, 1, -45, 110);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
            
    
    for (int i=0; i<7; i++){
           
         float pct=ofMap(i,0,8,0,1);
          pct=powf(pct, (mouseX -35) * 0.0107);
          float x=ofMap(pct,0, 1, -45, 110);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    for (int i=0; i<7; i++){
           
         float pct=ofMap(i,0,8,0,1);
          pct=powf(pct, (mouseX -35) * 0.0108);
          float x=ofMap(pct,0, 1, -45, 110);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    
    for (int i=0; i<7; i++){
           
         float pct=ofMap(i,0,8,0,1);
          pct=powf(pct, (mouseX -35) * 0.0109);
          float x=ofMap(pct,0, 1, -45, 110);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    for (int i=0; i<7; i++){
           
         float pct=ofMap(i,0,8,0,1);
          pct=powf(pct, (mouseX -35) * 0.0110);
          float x=ofMap(pct,0, 1, -45, 110);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    //*
    
    //* ----
    
    for (int i=0; i<8; i++){
           
         float pct=ofMap(i,0,7,0,1);
         pct=powf(pct, (mouseX + 550) * 0.001);
          float x=ofMap(pct,0, 1, 70, 175);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    for (int i=0; i<8; i++){
           
         float pct=ofMap(i,0,7,0,1);
         pct=powf(pct, (mouseX + 550) * 0.00101);
          float x=ofMap(pct,0, 1, 70, 175);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    for (int i=0; i<8; i++){
           
         float pct=ofMap(i,0,7,0,1);
         pct=powf(pct, (mouseX + 550) * 0.00102);
          float x=ofMap(pct,0, 1, 70, 175);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    
    for (int i=0; i<8; i++){
           
         float pct=ofMap(i,0,7,0,1);
         pct=powf(pct, (mouseX + 550) * 0.00103);
          float x=ofMap(pct,0, 1, 70, 175);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
    
    for (int i=0; i<8; i++){
           
         float pct=ofMap(i,0,7,0,1);
         pct=powf(pct, (mouseX + 550) * 0.00105);
          float x=ofMap(pct,0, 1, 70, 175);
        ofSetColor(0);
         ofDrawLine(x, 0, x, 1010);}
            
  //*/
    
    //----
    
                for (int i=0; i<10; i++){
                    
                    float pct=ofMap(i,0,9,0,1);
                    pct=powf(pct, mouseX * 0.01);
                    float x=ofMap(pct,0, 1, 160, 310);
                    
                    ofSetColor(0);
                    ofDrawLine(x, 0, x, 1010);}
                    
    
                    for (int i=0; i<10; i++){
                        
                        float pct=ofMap(i,0,9,0,1);
                        pct=powf(pct, mouseX * 0.0102);
                        float x=ofMap(pct,0, 1, 160, 310);
                        
                        ofSetColor(0);
                        ofDrawLine(x, 0, x, 1010);}
                        
                        for (int i=0; i<10; i++){
                            
                            float pct=ofMap(i,0,9,0,1);
                            pct=powf(pct, mouseX * 0.0103);
                            float x=ofMap(pct,0, 1, 160, 310);
                            ofSetColor(0);
                            
                            ofDrawLine(x, 0, x, 1010);}
                            
                            
                            for (int i=0; i<10; i++){
                                
                                float pct=ofMap(i,0,9,0,1);
                                pct=powf(pct, mouseX * 0.0104);
                                float x=ofMap(pct,0, 1, 160, 310);
                                
                                ofSetColor(0);
                                ofDrawLine(x, 0, x, 1010);}
                                
                                
                                for (int i=0; i<10; i++){
                                    
                                    float pct=ofMap(i,0,9,0,1);
                                    pct=powf(pct, mouseX * 0.0105);
                                    float x=ofMap(pct,0, 1, 160, 310);
                                    
                                    ofSetColor(0);
                                    ofDrawLine(x, 0, x, 1010);}
                                    
                                    
                                    
                                    for (int i=0; i<10; i++){
                                        
                                        float pct=ofMap(i,0,9,0,1);
                                        pct=powf(pct, mouseX * 0.0106);
                                        float x=ofMap(pct,0, 1, 160, 310);
                                        
                                        ofSetColor(0);
                                        ofDrawLine(x, 0, x, 1010);}
                                        
                                        
                                        for (int i=0; i<10; i++){
                                            
                                            float pct=ofMap(i,0,9,0,1);
                                            pct=powf(pct, mouseX * 0.0107);
                                            float x=ofMap(pct,0, 1, 160, 310);
                                            
                                            ofSetColor(0);
                                            ofDrawLine(x, 0, x, 1010);}
                                            
                                            
                                            
                                            for (int i=0; i<10; i++){
                                                
                                                float pct=ofMap(i,0,9,0,1);
                                                pct=powf(pct, mouseX * 0.0108);
                                                float x=ofMap(pct,0, 1, 160, 310);
                                                
                                                ofSetColor(0);
                                                ofDrawLine(x, 0, x, 1010);}
                                                
                                                
                                                
                                                
                                                for (int i=0; i<10; i++){
                                                    
                                                    float pct=ofMap(i,0,9,0,1);
                                                    pct=powf(pct, mouseX * 0.0109);
                                                    float x=ofMap(pct,0, 1, 160, 310);
                                                    ofSetColor(0);
                                                    
                                                    ofDrawLine(x, 0, x, 1010);}
    
    for (int i=0; i<10; i++){
        
        float pct=ofMap(i,0,9,0,1);
        pct=powf(pct, mouseX * 0.011);
        float x=ofMap(pct,0, 1, 160, 310);
        
        ofSetColor(0);
        ofDrawLine(x, 0, x, 1010);}
        
        
                    //*/

        
 //}
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
