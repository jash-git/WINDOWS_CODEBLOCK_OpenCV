#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;

using namespace std;
//http://monkeycoding.com/?p=540

int main()
{
    Mat img = imread("lena.jpg",CV_LOAD_IMAGE_GRAYSCALE);
    imwrite("output.jpg",img);

    namedWindow("Display window", WINDOW_AUTOSIZE);
    imshow("Display window", img);
    waitKey(0);
    cout << "Hello world!" << endl;
    return 0;
}
