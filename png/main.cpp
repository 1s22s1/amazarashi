#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat src, dst;

    src = cv::imread("../src.png");

    cv::cvtColor(src, dst, cv::COLOR_BGR2GRAY);

    cv::imwrite("../dst.png", dst);

    return 0;
}
