#include "main_engine/MainEngine.h"

MainEngine::MainEngine()
{
}

MainEngine::~MainEngine()
{
}

void MainEngine::ReadConfigrationFiles(int argc,char* argv)
{
	cv::FileStorage fs;
	if (argc<2) {
		cv::FileStorage fs1(".\\config\\test.yml", cv::FileStorage::READ);
		fs = fs1;
	}
	else {
		cv::FileStorage fs1(argv, cv::FileStorage::READ);
		fs = fs1;
	}

	if (!fs["CamNum"].empty()) {
		fs["CamNum"] >> CamNum;
		cout << CamNum <<endl;
	}
	if (!fs["dataPath"].empty()) {
		fs["dataPath"] >> dataPath;
		cout << dataPath<< endl;
	}

	fs.release();
}

void MainEngine::SetupParameters()
{
}

void MainEngine::Run()
{
}
