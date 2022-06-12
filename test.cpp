//#include <opencv2/cv.h>
#include <opencv2/highgui.h>
#include <opencv2/opencv.hpp>
using namespace cv;

int main( int argc, char** argv )
{
    Mat src;
    src = imread( argv[1], 1 );

    if( argc != 2 || !src.data )
    {
        return -1;
    }

    namedWindow( "imshow image", CV_WINDOW_AUTOSIZE );
    imshow( "imshow image", src );
    waitKey(0);

    return 0;
}
