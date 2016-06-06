#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetCircleResolution(100);
    ofSetFrameRate(60);
    ofEnableAlphaBlending();
}
;
//--------------------------------------------------------------
void ofApp::update(){
    triX = mouseX - ofGetWidth()/2;
    triY = mouseY - ofGetHeight()/2;
    triTheta = atan(triY/triX);
    angle = (180*triTheta)/PI;
    if(triX<0 && triY<0)angle = (90-angle) + 90;
    if(triX<0 && triY>0)angle = 180 + abs(angle);
    if(triX>0 && triY>0)angle = 360 - angle;
    if(triX>0 && triY<0)angle = abs(angle);
    color = angle*255/360;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(128);
    for(int i=1;i<=19; i++){
        ofLine(0,i*35,ofGetWidth(),i*35);
    }
    for(int i=1; i<=29; i++){
        ofLine(i*34,0,i*34,ofGetHeight());
    }
    
    ofLine(0,mouseY,ofGetWidth(),mouseY);
    ofLine(mouseX,0,mouseX,ofGetHeight());
    
    ofSetColor(ofColor::fromHsb(color, 255, 255, 180));
    ofLine(ofGetWidth()/2,ofGetHeight()/2,mouseX,mouseY);
    
    
    dist = abs(ofDist(ofGetWidth()/2, ofGetHeight()/2, mouseX, mouseY));
    ofFill();
    ofCircle(ofGetWidth()/2,ofGetHeight()/2, dist/5);
    ofNoFill();
    ofCircle(ofGetWidth()/2, ofGetHeight()/2,dist);
    
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
