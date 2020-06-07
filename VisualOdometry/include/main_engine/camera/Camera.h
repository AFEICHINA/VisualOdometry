#pragma once
#ifndef _CAMERA_H_
#define _CAMERA_H_

# include <opencv/cv.h>
#include "utils/Settings.h"

class Camera {
public:
	Camera();
	~Camera();

	std::string cam0_calib_file;
	std::string cam1_calib_file;
	int cam_num;
	bool setConfig(CameraConfig config);

	std::string cam0_modelType;
	std::string cam0_name;
	int image_width;
	int image_height;
	std::string mirror_parameters;
	std::string	 distortion_parameters;
	std::string projection_parameters;

};

#endif // !_CAMERA_H_


