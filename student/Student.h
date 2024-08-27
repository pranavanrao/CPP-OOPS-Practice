#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
public:
    Student();

    Student(string name, int rollNum, int age, int level){
        this->m_name = name;
        this->m_rollNum = rollNum;
        this->m_age = age;
        this->m_level = level;
    }

    string name() const;
    void setName(const string &newName);

    int rollNum() const;
    void setRollNum(int newRollNum);

    int age() const;
    void setAge(int newAge);

    int level() const;
    void setLevel(int newLevel);

private:
    string m_name;
    int m_rollNum;
    int m_age;
    int m_level;
};

#endif // STUDENT_H
