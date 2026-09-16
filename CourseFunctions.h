#ifndef COURSEFUNCTIONS_H
#define COURSEFUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>

#include "Course.h"

using namespace std;

// Add course
void addCourse(vector<Course>& courses)
{
    string code;
    string name;
    int credits;

    cout << "\n===== ADD COURSE =====\n";

    cout << "Enter Course Code: ";
    cin >> code;

    // Check duplicate course
    for (Course& course : courses)
    {
        if (course.getCode() == code)
        {
            cout << "Course already exists!\n";
            return;
        }
    }

    cin.ignore();

    cout << "Enter Course Name: ";
    getline(cin, name);

    cout << "Enter Credits: ";
    cin >> credits;

    if (credits <= 0)
    {
        cout << "Invalid credits!\n";
        return;
    }

    courses.push_back(
        Course(code, name, credits)
    );

    cout << "Course added successfully!\n";
}


// View courses
void viewCourses(vector<Course>& courses)
{
    cout << "\n===== COURSE LIST =====\n";

    if (courses.empty())
    {
        cout << "No courses found.\n";
        return;
    }

    for (Course& course : courses)
    {
        cout << "\n------------------------\n";
        course.displayInfo();
    }
}


// Search course
void searchCourse(vector<Course>& courses)
{
    string code;

    cout << "\nEnter Course Code: ";
    cin >> code;

    for (Course& course : courses)
    {
        if (course.getCode() == code)
        {
            cout << "\nCourse Found!\n";
            course.displayInfo();
            return;
        }
    }

    cout << "Course not found.\n";
}

#endif