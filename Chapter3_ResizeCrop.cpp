#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>


int main() {
	std::string path = "Resources/test.png";
	cv::Mat img = cv::imread(path);
	cv::Mat imgResize;
	cv::Mat imgCrop;

	cv::Rect roi(100, 100, 300, 250);
	imgCrop = img(roi);
	cv::resize(img, imgResize, cv::Size(), 0.4, 0.4);

	cv::imshow("Nkar", img);
	cv::imshow("Nkar Resize", imgResize);
	cv::imshow("Nkar Crop", imgCrop);
	cv::waitKey(0);
}