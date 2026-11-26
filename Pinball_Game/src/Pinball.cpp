#include "Pinball.h"

Pinball::Pinball(){
	sprite.load("Sonic Pinball.png");
	float position[2] = { 0.0, 0.0 };
	float velocity[2] = { 2.0, 1.0 };
	float gravity = 0.05;

}

void Pinball::update(){
	position[0] += velocity[0];
	position[1] += velocity[1];

	

}

void Pinball::draw() {

}
