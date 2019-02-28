#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

double aver(int ch, int math, int en);

int main() {
	string name;
	int a, b, c;
	cin >> name >> a >> b >> c;
	cout << name <<" "<< fixed << setprecision(1) << aver(a, b, c) << endl;
	system("pause");
}

double aver(int ch, int math, int en) {
	return (ch + math + en) / 3;
}