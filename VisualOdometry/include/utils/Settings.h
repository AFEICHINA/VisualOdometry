#pragma once
#ifndef  _SETTINGS_H_
#define _SETTINGS_H_

#include <iostream>

typedef struct {
	
} IMUConfig;

typedef struct {
	std::string cam0_calib;
	std::string cam1_calib;
	int image_width;
	int image_height;
	int cam_num;
} CameraConfig;

typedef struct {

} LidarConfig;
#endif // ! _SETTINGS_H_

