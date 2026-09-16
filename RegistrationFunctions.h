#ifndef REGISTRATIONFUNCTIONS_H
#define REGISTRATIONFUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>

#include "Registration.h"
#include "Student.h"
#include "Course.h"

using namespace std;

// Register student for course
void registerCourse(
    vector<Registration>& registrations,
    vector<Student>& students,
    vector<Course>& courses
)
{
    int registrationId;
    int studentId;
    string courseCode;

    cout << "\n===== COURSE REGISTRATION =====\n";

    cout << "Enter Registration ID: ";
    cin >> registrationId;

    cout << "Enter Student ID: ";
    cin >> studentId;

    // Check student
    bool studentFound = false;

    for (Student& student : students)
    {
        if (student.getId() == studentId)
        {
            studentFound = true;
            break;
        }
    }

    if (!studentFound)
    {
        cout << "Student does not exist!\n";
        return;
    }

    cout << "Enter Course Code: ";
    cin >> courseCode;

    // Check course
    bool courseFound = false;

    for (Course& course : courses)
    {
        if (course.getCode() == courseCode)
        {
            courseFound = true;
            break;
        }
    }

    if (!courseFound)
    {
        cout << "Course does not exist!\n";
        return;
    }

    registrations.push_back(
        Registration(
            registrationId,
            studentId,
            courseCode
        )
    );

    cout << "Course registered successfully!\n";
}


// View registrations
void viewRegistrations(
    vector<Registration>& registrations
)
{
    cout << "\n===== REGISTRATION LIST =====\n";

    if (registrations.empty())
    {
        cout << "No registrations found.\n";
        return;
    }

    for (Registration& registration : registrations)
    {
        cout << "\n------------------------\n";
        registration.displayInfo();
    }
}

#endif