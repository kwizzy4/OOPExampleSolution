#include "Student.h"

int main() {
	Student st1, st2, st3;
	
	Student* ptr = new Student();
	
	cout << st1.toString() << endl;

	st1.id = 123;
	st1.name = "Alex";
	st1.age = 15;
	st1.class_number = 9;
	st1.class_letter = 'A';
	st1.mark = 10;
	st1.alive = true;
	
	return 0;
}