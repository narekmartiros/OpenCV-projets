#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

int main() {
	std::string path = "Resources/test.png";
	cv::Mat img = cv::imread(path);
	cv::Mat imgGray;
	cv::Mat imgBlur;
	cv::Mat imgCanny;
	cv::Mat imgDilate;
	cv::Mat imgErode;

	cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));

	cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);
	cv::GaussianBlur(img, imgBlur, cv::Size(7,7), 5, 51);
	cv::Canny(imgBlur, imgCanny, 25, 100);
	cv::dilate(imgCanny, imgDilate, kernel);	
	cv::erode(imgDilate, imgErode, kernel);

	cv::imshow("Nkar", img);
	cv::imshow("Nkar Gray", imgGray); 
	cv::imshow("Nkar Blur", imgBlur);
	cv::imshow("Nkar Canny", imgCanny);
	cv::imshow("Nkar Dialtion", imgDilate);
	cv::imshow("Nkar Erode", imgErode);
	cv::waitKey(0);
}