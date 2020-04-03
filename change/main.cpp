#include<opencv2\opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main() {
	Mat src, dst;
	src = imread("D:\\1.png", 1);
	float angle = 10.0, scale = 1;
	Point2f center(src.cols*0.5, src.rows*0.5);
	const Mat affine_matrix = getRotationMatrix2D(center, angle, scale);
	warpAffine(src, dst, affine_matrix, src.size());
	imshow("src", src);
	imshow("dst", dst);
	waitKey(0);



}