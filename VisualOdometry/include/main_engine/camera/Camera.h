#pragma once
# include <opencv/cv.h>

class Camera {
public:
	Camera();
	~Camera();

	bool setConfig();
};