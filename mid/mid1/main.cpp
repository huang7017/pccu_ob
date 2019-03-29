#include"Student.h"

int main() {
	string n; //type
	int m;
	
	Student student1("John", 90); //class object
	Student student2("Mary", 80);
	
	cin >> n >> m; 
	
	student1.setName(n);
	student2.setScore(m);
	
	cout << student1.getName() << " " << student1.getScore() << endl;
	cout << student2.getName() << " " << student2.getScore() << endl;
	system("pause");
}