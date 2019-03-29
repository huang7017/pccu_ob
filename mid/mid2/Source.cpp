#include<iostream>
#include<sstream>
#include<string>

using namespace std;

void printStringArray(string word[], int size);

int main() {
	const int size = 10; //array size

	string text;
	getline(cin, text);

	stringstream ss(text);
	string word[size];

	int i = 0;
	while (!ss.eof()) {
		ss >> word[i];
		i++;
	}
	printStringArray(word, i); //print
	text.insert(text.length(), "!!");
	cout << text << endl;
	system("pause");
}

void printStringArray(string word[], int size) {
	for (int i = 0; i < size; i++) {
		cout << word[i] << endl;
	}
}