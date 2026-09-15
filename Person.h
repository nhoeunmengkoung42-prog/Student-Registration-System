#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

// Base class
class Person
{
private:
    int id;
    string name;
    string email;

public:
    // Default constructor
    Person()
    {
        id = 0;
        name = "";
        email = "";
    }

    // Parameterized constructor
    Person(int id, string name, string email)
    {
        this->id = id;
        this->name = name;
        this->email = email;
    }

    // Getters
    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    string getEmail()
    {
        return email;
    }

    // Setters
    void setId(int id)
    {
        this->id = id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setEmail(string email)
    {
        this->email = email;
    }

    // Pure virtual function
    virtual void displayInfo() = 0;

    // Virtual destructor
    virtual ~Person()
    {
    }
};

#endif