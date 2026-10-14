

#ifndef _CLOCK_H
#define _CLOCK_H

#include <math.h>			//header file for mathematical calculation

//constants

#define HR_RADIUS 10		//radius of hour hand
#define MIN_RADIUS 30		//radius of minute hand
#define SEC_RADIUS 20		//radius of second hand



//functions

void Draw_clock(unsigned int,unsigned int,unsigned int);			//for drawing the total clock at user level
float degree_to_radian(float);                        //for degree to radian conversion
int hr_x_coordinate_finder(unsigned int,unsigned int,float);    //to find the coordinates of hour hand
int hr_y_coordinate_finder(unsigned int,unsigned int,float);
int min_x_coordinate_finder(unsigned int,unsigned int,float);    //to find the coordinates of min hand
int min_y_coordinate_finder(unsigned int,unsigned int,float);
int sec_x_coordinate_finder(unsigned int,unsigned int,float);    //to find the coordinates of sec hand
int sec_y_coordinate_finder(unsigned int,unsigned int,float);
void Draw_clock_hand(int,int);                            //to draw the hands according to coordinates

#endif
