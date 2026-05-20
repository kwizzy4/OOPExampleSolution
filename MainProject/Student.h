#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	int id;
	string name;
	int age;
	double mark;
	int class_number;
	char class_letter;
	bool alive;

	// default constructor / constructor without arguments
	Student() {
		//cout << "Student default constructor..." << endl;
		id = 0;
		name = "";
		age = 0;
		mark = 0;
		class_number = 0;
		class_letter = '\0';
		alive = false;
	}

	string toString() {
		string s = "Student: ";
		s += "Name = " + name;
		s += ", age = " + to_string(age);
		s += ", class = " + to_string(class_number) + to_string(class_letter);
		s += ", mark = " + to_string(mark);
		s += ", alive = ";
		s += (alive ? "yes" : "no");
		return s;
	}
};