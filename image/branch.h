#pragma once

#include <opencv2/opencv.hpp>

class Branch
{
private:
	cv::Point2f m_initial; 
	cv::Point2f m_final;
	float m_size;
	float m_angle;
	cv::Point2f& calculateFinal(const cv::Point2f& initial, const float size, const float angle);

public:
	Branch() = default;
	Branch(const cv::Point2f& initial, const float size, const float angle);
	~Branch() = default;
	cv::Point2f getInitial();
	cv::Point2f getFinal();
	float getSize();
	float getAngle();
	void drawOnImage(cv::Mat& image);
};