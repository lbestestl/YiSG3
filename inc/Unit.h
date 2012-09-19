///============================================================================
/// License:
/// * Project Name:  YiSG3
/// * File Name:     Unit.h
/// * Created on:    2012. 9. 13.
/// * Last modified: -
/// * Description:   -   
/// Contact me lbestestl@gmail.com (Owner)
///============================================================================


#ifndef UNIT_H_
#define UNIT_H_


#include "Coordinate.h"


class Unit {
public:
	void moveUnit();
	bool hasInterSection(const Unit& unit);

private:
	Coordinate *curPos;
	int code;
};

#endif /* UNIT_H_ */
