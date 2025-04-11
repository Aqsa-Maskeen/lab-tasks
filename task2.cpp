//print area of circle
# include <iostream>
using namespace std;
int main()
{
	double radius,area;
	//input radius
	cout<<"Enter radius of circle:";
	cin>>radius;
	//calculate area
	area=3.14*radius*radius;
	//output
	cout<<"Area of a circle is:"<<area;
	return 0;
}
