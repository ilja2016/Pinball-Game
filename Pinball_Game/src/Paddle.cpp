#include "Paddle.h"

Paddle::Paddle() {
	ofPolyline square;
	sprite.load("Sonic Paddle");
	float speed = 10.0;
	float size = 580;
	float half = size / 2.0;
	float position[2] = { 300.0, 200.0 };

	// Add 4 corners centered around (0,0)
	square.addVertex(-half, -half); // Top-left
	square.addVertex(half, -half); // Top-right
	square.addVertex(half, half); // Bottom-right
	square.addVertex(-half, half); // Bottom-left
	square.close();

	// Rotate the vertices directly around the Z-axis (0, 0, 1)
	square.rotateDeg(45, glm::vec3(0, 0, 1));

	// Move it to its final screen position
	square.translate(glm::vec3(position[0], position[1], 0));
}

void Paddle::move() {
	if (ofGetKeyPressed(OF_KEY_LEFT) || position[0] - half > 0) position[0] -= speed;
	else if (ofGetKeyPressed (OF_KEY_RIGHT) || position[0] + half < ofGetWidth()) position[0] += speed;
	square.translate(glm::vec3(position[0], position[1], 0));
}

void Paddle::flip() { }

void Paddle::draw(){
	sprite.draw(position[0] - half, position[1] - half, position[0] + half * 2, position[1] + half * 2);
}
