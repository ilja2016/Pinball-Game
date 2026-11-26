#pragma once
#include "ofMain.h"

class Pinball {

	public:

		Pinball();
		void update();
		void draw();

		ofImage sprite;
		float position[2];
		float velocity[2];
		float gravity;




};


