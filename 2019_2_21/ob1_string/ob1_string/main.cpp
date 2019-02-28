#include<iostream>
#include<iomanip>
#include<string>


using namespace std;

int main() {
	string name;
	int ch, math, en;
	cin >> name >> ch >> math >> en;
	cout << name<<" " <<fixed<<setprecision(1)<< (ch + math + en) / 3.0 << endl;
	system("pause");

}