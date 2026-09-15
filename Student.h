#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
private:
    string major;
    int year;

public:
    // Default constructor
    Student() : Person()
    {
        major = "";
        year = 1;
    }

    // Parameterized constructor
    Student(int id, string name, string email,
            string major, int year)
        : Person(id, name, email)
    {
        this->major = major;
        this->year = year;
    }

    // Getters
    string getMajor()
    {
        return major;
    }

    int getYear()
    {
        return year;
    }

    // Setters
    void setMajor(string major)
    {
        this->major = major;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    // Polymorphism
    void displayInfo() override
    {
        cout << "Student ID : " << getId() << endl;
        cout << "Name       : " << getName() << endl;
        cout << "Email      : " << getEmail() << endl;
        cout << "Major      : " << major << endl;
        cout << "Year       : " << year << endl;
    }
};

#endif