/*#include"opencv2/highgui/highgui.hpp"
#include"opencv2/imgproc/imgproc.hpp"
#include<iostream>
using namespace cv;
using namespace std;

Mat g_src;
Mat g_gary;
int g_thr = 15;
int g_nthr_max = 255;
RNG g_rng(12345);
Mat g_canny;
vector<vector<Point>>g_vCont;
vector<Vec4i>g_vHierarchy;

void on_ThreshChange(int,void*);

int main(int argc, char** argv)
{

	g_src = imread("C:\\原图\\测试图.bmp",1);
	cvtColor(g_src,g_gary,COLOR_BGR2GRAY);//转灰度
	blur(g_gary,g_gary,Size(9,9));//降噪
	namedWindow("原始窗口", 0);//创建窗口
	imshow("原始窗口",g_src);
	createTrackbar("canny阈值", "原始窗口",&g_thr,g_nthr_max,on_ThreshChange);//创建滚动条
	on_ThreshChange(0,0);
	waitKey(0);
	return(0);
}

void on_ThreshChange(int, void*)
{
	Canny(g_gary,g_canny,g_thr,g_thr*2,3);//用算子检测边缘
	findContours(g_canny,g_vCont,g_vHierarchy,RETR_TREE,CHAIN_APPROX_SIMPLE,Point(0,0));//寻找轮廓
	Mat drawing = Mat::zeros(g_canny.size(),CV_8UC3);//绘出轮廓
	for (int i = 0; i < g_vCont.size(); i++)
	{
		Scalar color = Scalar(g_rng.uniform(0,255),g_rng.uniform(0,255),g_rng.uniform(0,255));//任意值
		drawContours(drawing,g_vCont,i,color,2,8,g_vHierarchy,0,Point());
	}
	namedWindow("轮廓图", 0);
	imshow("轮廓图",drawing);//显示效果图
	imwrite("C:\\pic\\上篮下白 效果图.bmp", drawing);//保存图片
	
}*/