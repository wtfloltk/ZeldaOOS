/*
 * =====================================================================================
 *
 *       Filename:  SpriteAnimation.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  16/07/2014 15:48:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Quentin BAZIN, <quent42340@gmail.com>
 *        Company:  Deloptia
 *
 * =====================================================================================
 */
#ifndef SPRITEANIMATION_HPP_
#define SPRITEANIMATION_HPP_

#include "Timer.hpp"

struct SpriteAnimation {
	SpriteAnimation(u16 _size, u8 *_tabAnim, u16 _delay, s16 _position[][2]) :
		size(_size), tabAnim(_tabAnim), delay(_delay), isPlaying(false), position(_position) {}
	
	u16 size;
	u8 *tabAnim;
	u16 delay;
	Timer timer;
	bool isPlaying;
	s16 (*position)[2];
	char* ToString() {
		return ((char*)("u16 _size, u8 *_tabAnim, u16 _delay, s16 _position[][2]\n" + (char*)(this->size) + " " + (char*)(this->tabAnim) + " " + (char*)(this->delay)
			+ " " + (char*)(this->timer) + " " + (char*)(this->isPlaying) + " " + (char*)(this->position[0]) + "," + (char*)(this->position[1])));
	}	
};

#endif // SPRITEANIMATION_HPP_
