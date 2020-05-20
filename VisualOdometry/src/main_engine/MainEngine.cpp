#include "main_engine/MainEngine.h"

MainEngine::MainEngine()
{
}

MainEngine::~MainEngine()
{
}

void MainEngine::ReadConfigrationFiles(int argc,char** argv)
{
	cv::FileStorage fs;
	if (argc<2) {
		cv::FileStorage fs1(".\\config\\test.yml", cv::FileStorage::READ);
		fs = fs1;
	}
	else {
		cv::FileStorage fs1(argv[1], cv::FileStorage::READ);
		fs = fs1;
	}

	if (!fs["imu"].empty()) {
		fs["imu"] >> imu;
		cout << imu <<endl;
	}
	if (!fs["num_of_cam"].empty()) {
		fs["num_of_cam"] >> num_of_cam;
		cout << num_of_cam << endl;
	}
	if (!fs["data_path"].empty()) {
		fs["data_path"] >> data_path;
	}
	if (!fs["image_format"].empty()) {
		fs["image_format"] >> image_format;
	}
	if (!fs["num_frames"].empty()) {
		fs["num_frames"] >> num_frames;
	}
	if (!fs["start_frame"].empty()) {
		fs["start_frame"] >> start_frame;
	}
	if (!fs["end_frame"].empty()) {
		fs["end_frame"] >> start_frame;
	}
	if (!fs["output_path"].empty()) {
		fs["output_path"] >> start_frame;
	}
	if (!fs["cam0_calib"].empty()) {
		fs["cam0_calib"] >> cam0_calib;
	}
	if (!fs["cam1_calib"].empty()) {
		fs["cam1_calib"] >> cam1_calib;
	}
	if (!fs["image_width"].empty()) {
		fs["image_width"] >> image_width;
	}
	if (!fs["image_height"].empty()) {
		fs["image_height"] >> image_height;
	}


	fs.release();
}

void MainEngine::SetupParameters()
{
}

void MainEngine::Run()
{
}
