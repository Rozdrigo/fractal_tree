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
	cv::Point2f getInitial() const;
	cv::Point2f getFinal() const;
	float getSize() const;
	float getAngle() const;
	void drawOnImage(cv::Mat& image) const;
};