#include"Student.h"

using namespace std;

int main() {
	string n;
	int y, m, s;

	cin >> n >> y >> m >> s;
	Student student1(n,Date(y,m),s);

	cin >> n >> y >> m >> s;
	Student student2(n, Date(y, m), s);
	student1.print();
	student2.print();

	system("pause");
}