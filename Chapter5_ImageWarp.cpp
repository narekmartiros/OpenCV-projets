#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

float w = 250, h = 350;
cv::Mat matrix;
cv::Mat imgWarp;

int main() {
	std::string path = ("Resources/cards.jpg");
	cv::Mat img = cv::imread(path);

	cv::Point2f src[4] = { {529, 142},{771,190}, {405,395}, {674, 457} };
	cv::Point2f dst[4] = { {0.0f, 0.0f},{w,0.0f}, {0.0f, h}, {w, h} };

	matrix = cv::getPerspectiveTransform(src, dst);
	cv::warpPerspective(img, imgWarp, matrix, cv::Point(w,h));

	cv::imshow("Nkar warp", imgWarp);
	cv::waitKey(0);
}