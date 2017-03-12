#pragma once
#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <SDL_events.h>
#include "glm\glm.hpp"
#include "Camera.h"
#include <unordered_map>

class Keyboard
{
public:
	Keyboard() { m_speed = 0.01f; }

	void RegisterEvents(SDL_KeyboardEvent& e);
	void ExecuteEvents(Camera& camera);

	bool IsPressed(SDL_Keycode code);

	~Keyboard();

private:
	void A_KeyUsed(Camera& camera);
	void S_KeyUsed(Camera& camera);
	void D_KeyUsed(Camera& camera);
	void W_KeyUsed(Camera& camera);
	void Z_KeyUsed(Camera& camera);
	void X_KeyUsed(Camera& camera);

	float m_speed;
	std::vector<SDL_Scancode> keys_down;
};
#endif //KEYBOARD_H