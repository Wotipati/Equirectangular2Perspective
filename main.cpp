#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include "equirec2perspec.h"

#include "common.h"

int main() {
    std::string inputImagePath = std::string(DATA_DIRECTORY) + "inputImage.jpg";
    cv::Mat inputImage = cv::imread(inputImagePath);

    const int height = 720;
    const int width = 1080;
    float theta = 180.0f;
    float phi = 0.0f;
    float FOV = 120.0f;

    Equirec2Perspec equiParser;
    equiParser.setParams(inputImage, FOV, height, width);

    cv::Mat outputImage;
    equiParser.equirectangular2perspective(inputImage, outputImage, theta, phi);

    cv::imshow("result", outputImage);
    cv::waitKey(0);

    return 0;
}

