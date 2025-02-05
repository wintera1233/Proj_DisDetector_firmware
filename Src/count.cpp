/*
 * count.cpp
 *
 *  Created on: Feb 5, 2025
 *      Author: YvonneChen
 */

#include "count.h"
#include "stm32f4xx_hal.h"

int i = 0;

void add() {
    i++;
    HAL_Delay(1000);
}
