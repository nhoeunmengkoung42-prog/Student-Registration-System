#ifndef STUDENTFUNCTIONS_H
#define STUDENTFUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>

#include "Student.h"

using namespace std;

// Add student
void addStudent(vector<Student>& students)
{
    int id;
    string name;
    string email;
    string major;
    int year;

    cout << "\n===== ADD STUDENT =====\n";

    cout << "Enter Student ID: ";
    cin >> id;

    // Check duplicate ID
    for (Student& student : students)
    {
        if (student.getId() == id)
        {
            cout << "Student ID already exists!\n";
            return;
        }
    }

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Email: ";
    getline(cin, email);

    cout << "Enter Major: ";
    getline(cin, major);

    cout << "Enter Year (1-4): ";
    cin >> year;

    if (year < 1 || year > 4)
    {
        cout << "Invalid year!\n";
        return;
    }

    students.push_back(
        Student(id, name, email, major, year)
    );

    cout << "Student added successfully!\n";
}


// View students
void viewStudents(vector<Student>& students)
{
    cout << "\n===== STUDENT LIST =====\n";

    if (students.empty())
    {
        cout << "No students found.\n";
        return;
    }

    for (Student& student : students)
    {
        cout << "\n------------------------\n";
        student.displayInfo();
    }
}


// Search student
void searchStudent(vector<Student>& students)
{
    int id;

    cout << "\nEnter Student ID: ";
    cin >> id;

    for (Student& student : students)
    {
        if (student.getId() == id)
        {
            cout << "\nStudent Found!\n";
            student.displayInfo();
            return;
        }
    }

    cout << "Student not found.\n";
}


// Update student
void updateStudent(vector<Student>& students)
{
    int id;

    cout << "\nEnter Student ID to update: ";
    cin >> id;

    for (Student& student : students)
    {
        if (student.getId() == id)
        {
            string name;
            string email;
            string major;
            int year;

            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name);

            cout << "Enter New Email: ";
            getline(cin, email);

            cout << "Enter New Major: ";
            getline(cin, major);

            cout << "Enter New Year (1-4): ";
            cin >> year;

            if (year < 1 || year > 4)
            {
                cout << "Invalid year!\n";
                return;
            }

            student.setName(name);
            student.setEmail(email);
            student.setMajor(major);
            student.setYear(year);

            cout << "Student updated successfully!\n";
            return;
        }
    }

    cout << "Student not found.\n";
}


// Delete student
void deleteStudent(vector<Student>& students)
{
    int id;

    cout << "\nEnter Student ID to delete: ";
    cin >> id;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getId() == id)
        {
            students.erase(students.begin() + i);

            cout << "Student deleted successfully!\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

#endif