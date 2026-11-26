#pragma once
#include "ofMain.h"

class Paddle {

	public:

		Paddle();
		void move();
		void flip();
		void draw();

		ofPolyline square;
		ofImage sprite;
		float speed;
		float size;
		float half;
		float base_angle;
		float position[2];
};
