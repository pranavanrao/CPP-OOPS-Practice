#include <iostream>

#include "student/Student.h"

using namespace std;

void parseStudent() {
    cout << "Student!!!" << endl;

    Student student;

    student.setName("Pranav N Rao");
    student.setRollNum(21);
    student.setAge(25);
    student.setLevel(100);

    cout << "Name : " << student.name() << endl;
    cout << "Roll Num : " << student.rollNum() << endl;
    cout << "Age : " << student.age() << endl;
    cout << "Level : " << student.level() << endl;
}
