#include <opencv2/opencv.hpp>
#include "tree.h"

void Tree::drawTree(cv::Mat& image, cv::Point2f initial, float size, float angle) {
	if (size < 10)
		return;

	Branch aux = Branch(initial, size, angle);
	aux.drawOnImage(image);

	drawTree(image, aux.getFinal(), size * 0.8, angle + 0.3f);
	drawTree(image, aux.getFinal(), size * 0.8, angle - 0.3f);
}
