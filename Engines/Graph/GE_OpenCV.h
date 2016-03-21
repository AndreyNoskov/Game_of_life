//
// Created by root on 21.03.16.
//

#ifndef CL_GAME_OF_LIFE_GE_OPENCV_H
#define CL_GAME_OF_LIFE_GE_OPENCV_H

#include <string>

#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include "GraphEngine.h"

class GE_OpenCV : GraphEngine
{
public:
	GE_OpenCV(Field* _field);
	~GE_OpenCV();

	void Process();

private:
	std::string winName;
	cv::Mat img;
	const int ppc = 20;
};


#endif //CL_GAME_OF_LIFE_GE_OPENCV_H
