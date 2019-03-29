#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;
class Date
{
public:
	Date();
	Date(int, int);

	void setYear(int);
	void setMonth(int);
	int getYear();
	int getMonth();

	void print();

private:
	int year;
	int	month;
};
#endif
