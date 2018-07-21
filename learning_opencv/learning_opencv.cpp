// learning_opencv.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
	Mat a=imread("lena.bmp");
	Mat R(3, 2, CV_8UC3);
	randu(R, Scalar::all(0), Scalar::all(100));
	cout << format(R,"python")<< endl;
	if (a.empty())
	{
		cout << "图片不存在" << endl;
	}
//	imshow("lena", a);
	waitKey(10);
    return 0;
}

