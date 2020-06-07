#pragma once
# ifndef _MAINENGINE_H_
#define _MAINENGINE_H_

#include <iostream>
#include <string>
#include <opencv/cv.h>
#include "estimator/Estimator.h"
#include "camera/Camera.h"
#include "utils/Settings.h"

using namespace std;

class MainEngine {

public:
	MainEngine();
	~MainEngine();

	void ReadConfigrationFiles(int argc,char* argv[]);
	void SetupParameters();
	void Run();
	bool ProcessNextFrame();
	bool ProcessOneFrame(int n_frame);

	int imu;
	int num_of_cam;
	int num_frames;
	int start_frame;
	int end_frame;
	string image_format;
	string data_path;
	string output_path;

	cv::Mat T_l, T_r;

	Estimator estimator;
	Camera camera;

	CameraConfig Cconfig;

};
#endif // !_MAINENGINE_H_
