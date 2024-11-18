#include <iostream>
using namespace std;

// Define the Student class
class Student {
private:
    int roll;
    int age;
    int marks[5];
    int totalMarks;

public:
    // Constructor to initialize total marks
    Student() : totalMarks(0) {}

    // Function to input student details
    void inputDetails() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Marks for 5 Subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    // Function to calculate total marks
    void calculateTotalMarks() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
    }

    // Function to display student details
    void displayDetails() const {
        cout << "Roll: " << roll << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }

    // Function to get total marks
    int getTotalMarks() const {
        return totalMarks;
    }

    // Function to get roll number
    int getRoll() const {
        return roll;
    }

    // Function to get age
    int getAge() const {
        return age;
    }
};

int main() {
    const int numStudents = 5; // Number of students
    Student students[numStudents];
    int topperIndex = 0; // Index of the topper

    // Input details for all students
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details for Student-" << (i + 1) << ":" << endl;
        students[i].inputDetails();
        students[i].calculateTotalMarks();
    }

    // Find the topper
    for (int i = 1; i < numStudents; i++) {
        if (students[i].getTotalMarks() > students[topperIndex].getTotalMarks()) {
            topperIndex = i;
        }
    }

    // Display topper details
    cout << "\nTopper of the B.TECH 3rd Semester:" << endl;
    cout << "Roll: " << students[topperIndex].getRoll() << endl;
    cout << "Age: " << students[topperIndex].getAge() << endl;
    cout << "Total Marks: " << students[topperIndex].getTotalMarks() << endl;

    return 0;
}
