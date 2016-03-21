//
// Created by root on 21.03.16.
//

#include "GE_OpenCV.h"

GE_OpenCV::GE_OpenCV(Field *_field) : GraphEngine(_field)
{
	winName = "Game of life";
	img.create(field->GetHeight() * ppc, field->GetWidth() * ppc, CV_8UC3);
	cv::namedWindow(winName, CV_WINDOW_AUTOSIZE);
}

void GE_OpenCV::Process()
{
	for (int i = 0; i < field->GetHeight(); ++i)
		for (int j = 0; j < field->GetWidth(); ++j)
		{
			cv::Point2i tl(j * ppc, i * ppc);
			cv::Point2i br((j+1) * ppc, (i+1) * ppc);
			if (field->GetValue(i,j) == 0)
				cv::rectangle(img, tl, br, cv::Scalar(0, 0, 0), -1);
			else
				cv::rectangle(img, tl, br, cv::Scalar(0, 255, 0), -1);
		}
	cv::imshow(winName, img);
	cv::waitKey(1);
}

GE_OpenCV::~GE_OpenCV()
{
	cv::destroyWindow(winName);
}