#pragma once
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include <iostream>

cv::Mat detectAndDraw(cv::Mat& img, cv::CascadeClassifier& cascade,
    cv::CascadeClassifier& nestedCascade,
    double scale, bool tryflip);

cv::Mat draw(cv::Mat& img, std::vector <cv::Rect> faces, std::vector<std::vector<cv::Rect>> nested, double scale);
