#include <iostream>
#include "C:/Users/heroe/Documents/ProjektKompetencyjny/opnCV/opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	cout << "Hello World" << endl;

	if (argc != 2)
	{
		printf("usage: DisplayImage.out <Image_Path>\n");
		return -1;
	}

	Mat image;
	image = imread(argv[1], 1);

	if (!image.data)
	{
		printf("No image data \n");
		return -1;
	}
	namedWindow("Display Image", WINDOW_AUTOSIZE);
	imshow("Display Image", image);

	waitKey(0);


	system("PAUSE");
    return 0;
}
