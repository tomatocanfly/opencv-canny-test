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

	g_src = imread("C:\\ԭͼ\\����ͼ.bmp",1);
	cvtColor(g_src,g_gary,COLOR_BGR2GRAY);//ת�Ҷ�
	blur(g_gary,g_gary,Size(9,9));//����
	namedWindow("ԭʼ����", 0);//��������
	imshow("ԭʼ����",g_src);
	createTrackbar("canny��ֵ", "ԭʼ����",&g_thr,g_nthr_max,on_ThreshChange);//����������
	on_ThreshChange(0,0);
	waitKey(0);
	return(0);
}

void on_ThreshChange(int, void*)
{
	Canny(g_gary,g_canny,g_thr,g_thr*2,3);//�����Ӽ���Ե
	findContours(g_canny,g_vCont,g_vHierarchy,RETR_TREE,CHAIN_APPROX_SIMPLE,Point(0,0));//Ѱ������
	Mat drawing = Mat::zeros(g_canny.size(),CV_8UC3);//�������
	for (int i = 0; i < g_vCont.size(); i++)
	{
		Scalar color = Scalar(g_rng.uniform(0,255),g_rng.uniform(0,255),g_rng.uniform(0,255));//����ֵ
		drawContours(drawing,g_vCont,i,color,2,8,g_vHierarchy,0,Point());
	}
	namedWindow("����ͼ", 0);
	imshow("����ͼ",drawing);//��ʾЧ��ͼ
	imwrite("C:\\pic\\�����°� Ч��ͼ.bmp", drawing);//����ͼƬ
	
}*/