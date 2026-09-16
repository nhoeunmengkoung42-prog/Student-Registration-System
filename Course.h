#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class Course
{
private:
    string code;
    string name;
    int credits;

public:
    // Default constructor
    Course()
    {
        code = "";
        name = "";
        credits = 0;
    }

    // Parameterized constructor
    Course(string code, string name, int credits)
    {
        this->code = code;
        this->name = name;
        this->credits = credits;
    }

    // Getters
    string getCode()
    {
        return code;
    }

    string getName()
    {
        return name;
    }

    int getCredits()
    {
        return credits;
    }

    // Setters
    void setCode(string code)
    {
        this->code = code;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setCredits(int credits)
    {
        this->credits = credits;
    }

    // Display course
    void displayInfo()
    {
        cout << "Course Code : " << code << endl;
        cout << "Course Name : " << name << endl;
        cout << "Credits     : " << credits << endl;
    }
};

#endif