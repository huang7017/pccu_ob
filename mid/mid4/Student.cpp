#include"Student.h"


Student::Student(string newName,Date newbirthDay, int newScore) {
	name = newName;
	score = newScore;
	birthDay = newbirthDay;
}
void Student::setName(string newName) {
	name = newName;
}
void Student::setScore(int newScore) {
	score = newScore;
}
string Student::getName() {
	return name;
}
int Student::getScore() {
	return score;
}

void Student::print() {
	cout << name << " ";
	birthDay.print();
	cout << score << endl;
}