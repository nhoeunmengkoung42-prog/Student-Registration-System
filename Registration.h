#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <iostream>
#include <string>

using namespace std;

class Registration
{
private:
    int registrationId;
    int studentId;
    string courseCode;

public:
    // Default constructor
    Registration()
    {
        registrationId = 0;
        studentId = 0;
        courseCode = "";
    }

    // Parameterized constructor
    Registration(int registrationId,
                 int studentId,
                 string courseCode)
    {
        this->registrationId = registrationId;
        this->studentId = studentId;
        this->courseCode = courseCode;
    }

    // Getters
    int getRegistrationId()
    {
        return registrationId;
    }

    int getStudentId()
    {
        return studentId;
    }

    string getCourseCode()
    {
        return courseCode;
    }

    // Setters
    void setRegistrationId(int registrationId)
    {
        this->registrationId = registrationId;
    }

    void setStudentId(int studentId)
    {
        this->studentId = studentId;
    }

    void setCourseCode(string courseCode)
    {
        this->courseCode = courseCode;
    }

    // Display registration
    void displayInfo()
    {
        cout << "Registration ID : "
             << registrationId << endl;

        cout << "Student ID      : "
             << studentId << endl;

        cout << "Course Code     : "
             << courseCode << endl;
    }
};

#endif