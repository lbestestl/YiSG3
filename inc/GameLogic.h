///============================================================================
/// License:
/// * Project Name:  YiSG3
/// * File Name:     GameLogic.h
/// * Created on:    2012. 9. 13.
/// * Last modified: -
/// * Description:   -   
/// Contact me lbestestl@gmail.com (Owner)
///============================================================================


#ifndef GAMELOGIC_H_
#define GAMELOGIC_H_


#include "User.h"
#include "Enemy.h"
#include "Missile.h"
#include "Item.h"

#include <iterator>
#include <list>


class GameLogic {
public:
private:
	User* user;
	std::list<Enemy*> enemy;
	std::list<Missile*> missile;
	std::list<Item*> map;
};


#endif /* GAMELOGIC_H_ */
