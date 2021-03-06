/*
 *  weatherstaion.h - The application's main definitions.
 *
 *  Copyright (c) 2015 Martin Glueck <martin@mangari.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 3 as
 *  published by the Free Software Foundation.
 */


#ifndef WEATHERSTATION_H_
#define WEATHERSTATION_H_

#include "io_config.h"

enum
{
    COM_OBJ_BRIGHTNESS_EAST         =  0
,   COM_OBJ_THRESHOLD_1_EAST        =  1
,   COM_OBJ_THRESHOLD_2_EAST        =  2
,   COM_OBJ_THRESHOLD_1_EAST_LOWER  =  3
,   COM_OBJ_THRESHOLD_1_EAST_UPPER  =  4
,   COM_OBJ_BRIGHTNESS_EAST_BLOCK   =  5
,   COM_OBJ_FACADE_EAST_AUTO_1      =  6
,   COM_OBJ_FACADE_EAST_AUTO_2      =  7
,   COM_OBJ_FACADE_EAST_SCENE       =  6
,   COM_OBJ_FACADE_EAST_POS_SHUTTER =  6
,   COM_OBJ_FACADE_EAST_POS_SLATS   =  7
,   COM_OBJ_FACADE_EAST_BLOCK       =  8
,   COM_OBJ_FACADE_EAST_TEACH_IN_P1 =  9
,   COM_OBJ_FACADE_EAST_TEACH_IN_P2 =  10
,   COM_OBJ_FACADE_EAST_STATUS_POS  =  11
,   COM_OBJ_FACADE_EAST_STATUS_SLAT =  12
,   COM_OBJ_FACADE_EAST_EXT_TEMP    =  13
// 14,15,16
,   COM_OBJ_BRIGHTNESS_SOUTH        = 17
,   COM_OBJ_THRESHOLD_1_SOUTH       = 18
,   COM_OBJ_THRESHOLD_2_SOUTH       = 19
,   COM_OBJ_THRESHOLD_1_SOUTH_LOWER = 20
,   COM_OBJ_THRESHOLD_1_SOUTHT_UPPER= 21
,   COM_OBJ_BRIGHTNESS_SOUTH_BLOCK  = 22
,   COM_OBJ_FACADE_SOUTH_AUTO_1     = 23
,   COM_OBJ_FACADE_SOUTH_AUTO_2     = 24
,   COM_OBJ_FACADE_SOUTH_SCENE      = 23
,   COM_OBJ_FACADE_SOUTH_POS_SHUTTER= 23
,   COM_OBJ_FACADE_SOUTH_POS_SLATS  = 24
,   COM_OBJ_FACADE_SOUTH_BLOCK      = 25
,   COM_OBJ_FACADE_SOUTH_TEACH_IN_P1= 26
,   COM_OBJ_FACADE_SOUTH_TEACH_IN_P2= 27
,   COM_OBJ_FACADE_SOUTH_STATUS_POS = 28
,   COM_OBJ_FACADE_SOUTH_STATUS_SLAT= 29
,   COM_OBJ_FACADE_ESOUTH_EXT_TEMP  = 30
// 31,32,33
,   COM_OBJ_BRIGHTNESS_WEST         = 34
,   COM_OBJ_THRESHOLD_1_WEST        = 35
,   COM_OBJ_THRESHOLD_2_WEST        = 36
,   COM_OBJ_THRESHOLD_1_WEST_LOWER  = 37
,   COM_OBJ_THRESHOLD_1_WEST_UPPER  = 38
,   COM_OBJ_BRIGHTNESS_WEST_BLOCK   = 39
,   COM_OBJ_FACADE_WEST_AUTO_1      = 40
,   COM_OBJ_FACADE_WEST_AUTO_2      = 41
,   COM_OBJ_FACADE_WEST_SCENE       = 40
,   COM_OBJ_FACADE_WEST_POS_SHUTTER = 40
,   COM_OBJ_FACADE_WEST_POS_SLATS   = 41
,   COM_OBJ_FACADE_WEST_BLOCK       = 42
,   COM_OBJ_FACADE_WEST_TEACH_IN_P1 = 43
,   COM_OBJ_FACADE_WEST_TEACH_IN_P2 = 44
,   COM_OBJ_FACADE_WEST_STATUS_POS  = 45
,   COM_OBJ_FACADE_WEST_STATUS_SLAT = 46
,   COM_OBJ_FACADE_WEST_EXT_TEMP    = 47
// 48,49,50
,   COM_OBJ_DUSK                    = 51
,   COM_OBJ_DUSK_TOGGLE_DAY_NIGHT   = 52
,   COM_OBJ_WIND_THRESHOLD_1        = 53
,   COM_OBJ_WIND_VELOCITY           = 54
,   COM_OBJ_TEMPERATURE             = 55
,   COM_OBJ_TEMPERATURE_THRESHOLD_1 = 56
,   COM_OBJ_TEMPERATURE_THRESHOLD_2 = 57
,   COM_OBJ_STATUS                  = 58
,   COM_OBJ_DUSK_SHUTTER_UP_DOWN    = 59
,   COM_OBJ_DUSK_SHUTTER_BLOCK      = 60
,   COM_OBJ_WIND_THRESHOLD_2        = 61
// 62,63
};

#endif /* WEATHERSTATION_H_ */
