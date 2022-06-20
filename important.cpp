/*************************************************************************
	> File Name: important.cpp
	> Author: xjz
	> Mail: xjz8053@gmail.com 
	> Created Time: 2022年06月20日 星期一 09时58分49秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Test{
public:
	Test();
	Test(int,int);
private:
	int width = 30;
	int height = 30;
};

Test::Test()
{
	cout <<"Test()" <<  width << endl;
}

Test::Test(int w,int h):width(w),height(h)
{
	//width = w;
	//height = h;
	cout << "Test(int,int)\t" << width << endl; 
	Test();
}


int main()
{
	//Test t(40,40);
	int data[2][3];
	cout << data << endl;
	cout << data+1<< endl;
	cout << &data+1<<endl;
}
