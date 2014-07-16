/*
 * =====================================================================================
 *
 *       Filename:  Character.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  16/07/2014 15:30:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Quentin BAZIN, <quent42340@gmail.com>
 *        Company:  Deloptia
 *
 * =====================================================================================
 */
#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include "Sprite.hpp"

class Character : public Sprite {
	public:
		Character();
		~Character();
		
	protected:
		s16 m_x;
		s16 m_y;
		
		s8 m_vx;
		s8 m_vy;
		
		bool m_moving;
};

#endif // CHARACTER_HPP_
