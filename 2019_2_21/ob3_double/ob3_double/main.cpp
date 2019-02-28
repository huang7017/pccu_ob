#include<iostream>

using namespace std;

int main() {
	int n, m,t = 0;
	cin >> n >> m;
	while (n <= m)
	{
		if (n % 3 == 0|| n % 5 == 0)
			t++;
		n++;
	}
	cout << t<< endl;
	system("pause");
}