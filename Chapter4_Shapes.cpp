#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

int main() {

	cv::Mat img(512, 512, CV_8UC3, cv::Scalar(255, 255, 255));
	cv::circle(img, cv::Point(256, 256), 150, cv::Scalar(0, 70, 255), cv::FILLED);
	cv::rectangle(img, cv::Point(130, 226), cv::Point(382, 286), cv::Scalar(255, 255, 255), cv::FILLED);
	cv::line(img, cv::Point(130, 299), cv::Point(382, 299), cv::Scalar(255, 255, 255), 3);
	cv::putText(img, "No enter", cv::Point(200, 262), cv::FONT_HERSHEY_COMPLEX, 1, cv::Scalar(0, 70, 255), 1);

	cv::imshow("Nkar", img);
	cv::waitKey(0);
}