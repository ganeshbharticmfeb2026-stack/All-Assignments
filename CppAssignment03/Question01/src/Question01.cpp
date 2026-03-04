
#include <iostream>
using namespace std;

class Box
{
	int length;
	int width;
	int height;

public:
	Box()
	{
		length = 0;
		width = 0;
		height = 0;
	}
	Box(int length, int width, int height)
	    : length(length), width(width), height(height)
	{
	}

	void setDimennsion(int length,int width,int height)
	{
		this->length = length;
		this->width = width;
		this->height = height;
	}

	int  volume()
	{
		return length*width*height;
	}
};

int main() {
	int le,wd,he;

	cout<<"Enter length width height of box here :"<<endl;
	cin>>le>>wd>>he;
	Box box1(le,wd,he);
	cout<<"volume is box 1:"<<box1.volume()<<endl;

	cout<<"Enter length width height of box here :"<<endl;
	cin>>le>>wd>>he;
	box1.setDimennsion(le,wd,he);
	cout<<"volume is box 2:"<<box1.volume()<<endl;
	return 0;
}
