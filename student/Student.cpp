#include "Student.h"

Student::Student() {}

string Student::name() const
{
    return m_name;
}

void Student::setName(const string &newName)
{
    m_name = newName;
}

int Student::rollNum() const
{
    return m_rollNum;
}

void Student::setRollNum(int newRollNum)
{
    m_rollNum = newRollNum;
}

int Student::age() const
{
    return m_age;
}

void Student::setAge(int newAge)
{
    m_age = newAge;
}

int Student::level() const
{
    return m_level;
}

void Student::setLevel(int newLevel)
{
    m_level = newLevel;
}
