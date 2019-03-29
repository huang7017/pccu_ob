#include"Date.h"

int main() {
	int y, m;
	cin >> y >> m;
	Date date1(y, m);
	cin >> y >> m;
	Date date2(y, m);

	date1.print();
	date2.print();

	system("pause");
}