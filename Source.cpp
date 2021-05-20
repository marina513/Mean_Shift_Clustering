#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace cv;
using namespace std;


/*****************************************/
int main() 
{
	
	Mat img = imread("D:/CV/birds.JPG" , 0);

	cout << img.rows << " " << img.cols;

	imshow("Image", img);
	waitKey(0);
	return 0;

}