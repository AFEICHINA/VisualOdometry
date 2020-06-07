#include "main_engine/camera/Camera.h"
#include <iostream>

Camera::Camera()
{
}

Camera::~Camera()
{
}

bool Camera::setConfig(CameraConfig config)
{
	cam_num =  config.cam_num;
	cam0_calib_file = config.cam0_calib;
	cam1_calib_file = config.cam1_calib;
	std::cout << cam0_calib_file << std::endl;
	
	cv::FileStorage cam0,cam1;

	if (cam_num == 1) {
		cv::FileStorage cam0_fs(cam0_calib_file, cv::FileStorage::READ);
		cam0 = cam0_fs;
		if (!cam0["model_type"].empty()) {
			cam0["model_type"] >> cam0_modelType;
			std::cout << cam0_modelType << std::endl;
		}
		if (!cam0["camera_name"].empty()) {
			cam0["camera_name"] >> cam0_name;
		}
		if (!cam0["image_width"].empty()) {
			cam0["image_width"] >> image_width;
		}
		if (!cam0["mirror_parameters"].empty()) {
			cam0["mirror_parameters"] >> image_height;
		}
		if (!cam0["distortion_parameters"].empty()) {
			cam0["distortion_parameters"] >> distortion_parameters;
		}
		if (!cam0["projection_parameters"].empty()) {
			cam0["projection_parameters"] >> projection_parameters;
		}

		return true;
	}
	else if(cam_num == 2){

		return true;
	}
	else {
		std::cerr << "Cam Num should be 1 or 2 in Config Yaml File!" << std::endl;
		return false;
	}

}
