///============================================================================
/// License:
/// * Project Name:  YiSG3
/// * File Name:     Coordinate.h
/// * Created on:    2012. 9. 13.
/// * Last modified: -
/// * Description:   -   
/// Contact me lbestestl@gmail.com (Owner)
///============================================================================


#ifndef COORDINATE_H_
#define COORDINATE_H_


class Coordinate {
public:
	const int getXpos();
	void setXpos(const int t_xpos);
	const int getYpos();
	void setYpos(const int t_ypos);
	Coordinate& operator=(const Coordinate& rhs);

private:
	int xpos;
	int ypos;
};


#endif /* COORDINATE_H_ */
