#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
}

//--------------------------------------------------------------
void ofApp::update(){
	Spieler.move();
}


bool ofApp::checkCircleRotatedSquare(float cx, float cy, float r, float sx, float sy, float side_length, float angle_rad) {
	float h = side_length / 2.0f;

	// 1. Translate circle center relative to square center
	float dx = cx - sx;
	float dy = cy - sy;

	// 2. Rotate into square's local space (by -angle)
	float cos_a = std::cos(angle_rad);
	float sin_a = std::sin(angle_rad);
	float local_x = dx * cos_a + dy * sin_a;
	float local_y = -dx * sin_a + dy * cos_a;

	// 3. Clamp to square bounds [-h, h] to find closest point
	float closest_x = std::max(-h, std::min(local_x, h));
	float closest_y = std::max(-h, std::min(local_y, h));

	// 4. Calculate distance from closest point to circle center
	float dist_x = local_x - closest_x;
	float dist_y = local_y - closest_y;
	float dist_sq = dist_x * dist_x + dist_y * dist_y;

	// 5. Check collision
	return dist_sq <= r * r;
}


//if  collision happens
//
// here rotating velocity vector corresponding to rectangles angle
// local vx = dx cos ...
// local  ...
//
// rectangle in that sense flat therefore horizontal reflection
// local vy = -local vy..
//
// ballx += vx

//--------------------------------------------------------------
void ofApp::draw(){
	Spieler.draw();
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
