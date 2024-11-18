#include <iostream>
using namespace std;

// Define the Employee class
class Employee {
private:
    int age;
    float basic, DA, TA, totalSalary;
    int yearsOfExperience;

public:
    // Function to input employee details
    void inputDetails() {
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Basic Salary: ";
        cin >> basic;
        cout << "Enter Years of Experience: ";
        cin >> yearsOfExperience;
    }

    // Function to calculate the total salary
    void calculateSalary() {
        DA = 0.6 * basic; // 60% of basic
        TA = 0.1 * basic; // 10% of basic
        totalSalary = basic + DA + TA;

        if (yearsOfExperience > 5) {
            totalSalary += 1200; // Add extra Rs. 1200
        }
    }

    // Function to display employee details and salary
    void displayDetails() const {
        cout << "Age: " << age << endl;
        cout << "Basic: " << basic << endl;
        cout << "Years of Experience: " << yearsOfExperience << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    // Function to return total salary for accumulation
    float getTotalSalary() const {
        return totalSalary;
    }
};

int main() {
    const int numEmployees = 3; // Number of employees
    Employee employees[numEmployees];
    float totalCost = 0;

    // Input details and calculate salary for each employee
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter details for Employee-" << (i + 1) << ":" << endl;
        employees[i].inputDetails();
        employees[i].calculateSalary();
    }

    cout << "\nDisplaying Employee Details:\n";
    // Display details and accumulate total cost
    for (int i = 0; i < numEmployees; ++i) {
        cout << "\nEmployee-" << (i + 1) << ":\n";
        employees[i].displayDetails();
        totalCost += employees[i].getTotalSalary();
    }

    // Display total salary cost
    cout << "\nTotal Salary Paid to All Employees: " << totalCost << endl;

    return 0;
}
