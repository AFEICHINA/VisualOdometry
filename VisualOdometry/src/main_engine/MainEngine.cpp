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
		fs=cv::FileStorage("\\config\\test.yml", cv::FileStorage::READ);
	}
	else
		fs = cv::FileStorage(argv, cv::FileStorage::READ);

}

void MainEngine::SetupParameters()
{
}

void MainEngine::Run()
{
}
