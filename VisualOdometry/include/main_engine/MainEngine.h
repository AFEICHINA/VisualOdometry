#pragma once
# ifndef _MAINENGINE_H_
#define _MAINENGINE_H_

#include <iostream>
#include <opencv/cv.h>

class MainEngine {
public:
	MainEngine();
	~MainEngine();

	void ReadConfigrationFiles(int argc,char* argv);
	void SetupParameters();
	void Run();


};
#endif // !_MAINENGINE_H_
