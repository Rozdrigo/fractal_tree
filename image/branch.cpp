#include "branch.h"
#include <Math.h>

#include <opencv2/opencv.hpp>

Branch::Branch(const cv::Point2f& initial, const float size, const float angle) {
	m_initial = initial;
	m_size = size;
	m_angle = angle;

	m_final = calculateFinal(initial, size, angle);
}

cv::Point2f& Branch::calculateFinal(const cv::Point2f& initial, const float size, const float angle) {
	//x2 = x1 + comprimento * cos(θ);
	//y2 = y1 + comprimento * sin(θ);
	cv::Point2f t_point = cv::Point2f(m_initial.x + size * cos(angle), m_initial.y + size * sin(angle));
	return t_point;
}

cv::Point2f Branch::getInitial(){
	return m_initial;
}

cv::Point2f Branch::getFinal(){
	return m_final;
}

float Branch::getSize(){
	return m_size;
}

float Branch::getAngle(){
	return m_angle;
}

void Branch::drawOnImage(cv::Mat& image){
	cv::line(image, m_initial, m_final, cv::Scalar(255, 255, 255), 1);
}
