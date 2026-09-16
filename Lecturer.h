#ifndef LECTURER_H
#define LECTURER_H

#include "Person.h"

class Lecturer : public Person
{
private:
    string department;

public:
    // Default constructor
    Lecturer() : Person()
    {
        department = "";
    }

    // Parameterized constructor
    Lecturer(int id, string name, string email,
             string department)
        : Person(id, name, email)
    {
        this->department = department;
    }

    // Getter
    string getDepartment()
    {
        return department;
    }

    // Setter
    void setDepartment(string department)
    {
        this->department = department;
    }

    // Polymorphism
    void displayInfo() override
    {
        cout << "Lecturer ID : " << getId() << endl;
        cout << "Name        : " << getName() << endl;
        cout << "Email       : " << getEmail() << endl;
        cout << "Department  : " << department << endl;
    }
};

#endif