#include <iostream>

using namespace std;

int LinearSearch(int array[], int size, int number);


int main() {
	int array1[] = { 3,5,7,2,4,8,6 };
	int n;
	cin >> n;
	cout << LinearSearch(array1, 7, n) << endl;
	system("pause");
}
int LinearSearch(int array[], int size, int number) {
	for (int i = 0; i < size; i++) {
		if (array[i] == number)
			return i;
	}
	return -1;
}