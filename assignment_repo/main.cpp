#include"Lib/opencv2/opencv.hpp"
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("1.png");
	imshow("Test", img);
	waitKey(0);
	return 0;
}