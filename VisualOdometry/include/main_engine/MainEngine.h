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

	void ReadConfigrationFiles(int argc,char* argv);
	void SetupParameters();
	void Run();

	int CamNum;
	string dataPath;
};
#endif // !_MAINENGINE_H_
