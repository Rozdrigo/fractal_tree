#pragma once
#include <opencv2/opencv.hpp>
#include <iostream>
#include "branch.h"
#include "utility.h"

class Tree
{
public:
	static void drawTree(cv::Mat& image, cv::Point2f initial, float size, float angle);
private:

};

