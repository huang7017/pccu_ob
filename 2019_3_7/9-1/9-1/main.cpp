#include<iostream>
#include<iomanip>

using namespace std;
class Rectangle{
	public:
		double width; //data fields
		double height;

		Rectangle()  //Constructor
		{
			width = 1;
			height = 1;
		}
		Rectangle(double newidth, double newheight)
		{
			width = newidth;
			height = newheight;
		}

		double getArea()  //function
		{
			return width * height;
		}
		double getPerimeter()
		{
			return (width + height) * 2;
		}
};
int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	Rectangle r1(a,b);
	Rectangle r2(c, d);
	cout << fixed << setprecision(2) << r1.getArea() << " " << r1.getPerimeter() << endl;
	cout << fixed << setprecision(2) << r2.getArea() << " " << r2.getPerimeter() << endl;
	r2.width = 5.0;
	r2.height = 2.5;
	cout << fixed << setprecision(2) << r2.getArea() << " " << r2.getPerimeter() << endl;
	system("pause");
}