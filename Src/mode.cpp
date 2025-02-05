/*
 * mode.cpp
 *
 *  Created on: Feb 5, 2025
 *      Author: YvonneChen
 */

#include "mode.h"
#include "main.h"

extern int buttonState;
int prev_state = buttonState;
int m=0;

int MODE(){

	if (buttonState != prev_state && m<3){
		m++;
	}
	return m;
}
