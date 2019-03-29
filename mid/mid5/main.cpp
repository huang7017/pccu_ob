#include"Student.h"
#include<iomanip>

double average(Student stuArray[], int size) {
	double total = 0;
	for (int i = 0; i < size; i++) {
		total += stuArray[i].getScore();
	}

	return total / size;
}

int main() {
	const int size = 3;
	string n; //type
	int m;

	Student stuArray[3];

	for (int i = 0; i < size; i++) {
		cin >> n >> m;
		stuArray[i].setName(n);
		stuArray[i].setScore(m);
	}

	for (int i = 0; i < size; i++) {
		stuArray[i].print();
	}

	cout << fixed << setprecision(2) << "Average: " << average(stuArray, size) << endl;

	system("pause");
}