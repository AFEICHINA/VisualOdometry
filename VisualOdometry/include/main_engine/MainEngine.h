#pragma once
# ifndef _MAINENGINE_H_
#define _MAINENGINE_H_

#include <iostream>
#include <string>
#include <opencv/cv.h>

using namespace std;

class MainEngine {

public:
	MainEngine();
	~MainEngine();

	void ReadConfigrationFiles(int argc,char** argv);
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
	string cam0_calib;
	string cam1_calib;
	int image_width;
	int image_height;
	double t_l[4][4],t_r[4][4];
	
};
#endif // !_MAINENGINE_H_
