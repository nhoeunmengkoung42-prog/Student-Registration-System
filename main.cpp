#include <iostream>
#include <vector>

#include "Person.h"
#include "Student.h"
#include "Lecturer.h"
#include "Course.h"
#include "Registration.h"

#include "StudentFunctions.h"
#include "CourseFunctions.h"
#include "RegistrationFunctions.h"

using namespace std;


// ======================================================
// POLYMORPHISM DEMONSTRATION
// ======================================================

void showPeople()
{
    cout << "\n===== POLYMORPHISM DEMO =====\n";

    // Student object
    Student student(
        1,
        "Dara",
        "dara@email.com",
        "Software Engineering",
        2
    );

    // Lecturer object
    Lecturer lecturer(
        101,
        "Mr. Rathana",
        "rathana@email.com",
        "Computer Science"
    );

    // Base class pointer
    Person* people[2];

    // Store different child objects
    people[0] = &student;
    people[1] = &lecturer;

    // Same function call
    // Different result
    for (int i = 0; i < 2; i++)
    {
        people[i]->displayInfo();

        cout << "------------------------\n";
    }
}


// ======================================================
// MAIN FUNCTION
// ======================================================

int main()
{
    // Store students
    vector<Student> students;

    // Store courses
    vector<Course> courses;

    // Store registrations
    vector<Registration> registrations;

    int choice;

    do
    {
        cout << "\n========================================\n";
        cout << "   STUDENT COURSE REGISTRATION SYSTEM\n";
        cout << "========================================\n";

        cout << "1.  Add Student\n";
        cout << "2.  View Students\n";
        cout << "3.  Search Student\n";
        cout << "4.  Update Student\n";
        cout << "5.  Delete Student\n";

        cout << "6.  Add Course\n";
        cout << "7.  View Courses\n";
        cout << "8.  Search Course\n";

        cout << "9.  Register Course\n";
        cout << "10. View Registrations\n";

        cout << "11. Polymorphism Demo\n";

        cout << "0.  Exit\n";

        cout << "----------------------------------------\n";

        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice)
        {
        case 1:
            addStudent(students);
            break;

        case 2:
            viewStudents(students);
            break;

        case 3:
            searchStudent(students);
            break;

        case 4:
            updateStudent(students);
            break;

        case 5:
            deleteStudent(students);
            break;

        case 6:
            addCourse(courses);
            break;

        case 7:
            viewCourses(courses);
            break;

        case 8:
            searchCourse(courses);
            break;

        case 9:
            registerCourse(
                registrations,
                students,
                courses
            );
            break;

        case 10:
            viewRegistrations(registrations);
            break;

        case 11:
            showPeople();
            break;

        case 0:
            cout << "\nThank you for using the system!\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}