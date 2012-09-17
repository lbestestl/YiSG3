///============================================================================
/// License:
/// * Project Name:  YiSG3
/// * File Name:     Coordinate.cpp
/// * Created on:    2012. 9. 13.
/// * Last modified: -
/// * Description:   -   
/// Contact me lbestestl@gmail.com (Owner)
///============================================================================


#include "../include/Coordinate.h"


const int
Coordinate::getXpos()
{
	return xpos;
}


void
Coordinate::setXpos(const int xpos_t)
{
	xpos = xpos_t;
}


const int
Coordinate::getYpos()
{
	return ypos;
}


void
Coordinate::setYpos(const int ypos_t)
{
	ypos = ypos_t;
}


Coordinate&
Coordinate::operator=(const Coordinate& rhs)
{
	xpos = rhs.xpos;
	ypos = rhs.ypos;

	return *this;
}
