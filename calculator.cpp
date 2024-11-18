#include <iostream>
using namespace std;

class Calculator {
public:
    // Function for 3 integers
    void calculate(int a, int b, int c) {
        int sum = a + b + c;
        double avg = sum / 3.0;
        cout << "Sum = " << sum << endl;
        cout << "Average = " << avg << endl;
    }

    // Function for 3 floats
    void calculate(float a, float b, float c) {
        float sum = a + b + c;
        float avg = sum / 3.0;
        cout << "Sum = " << sum << endl;
        cout << "Average = " << avg << endl;
    }

    // Function for 2 integers and 1 float
    void calculate(int a, int b, float c) {
        float sum = a + b + c;
        float avg = sum / 3.0;
        cout << "Sum = " << sum << endl;
        cout << "Average = " << avg << endl;
    }

    // Function for 1 integer, 1 float, and 1 integer
    void calculate(int a, float b, int c) {
        float sum = a + b + c;
        float avg = sum / 3.0;
        cout << "Sum = " << sum << endl;
        cout << "Average = " << avg << endl;
    }
};

int main() {
    Calculator calc;

    // Test case 1: 3 integers
    cout << "Test case 1:" << endl;
    calc.calculate(3, 4, 8); // Sum = 15, Average = 5

    // Test case 2: 2 integers, 1 float
    cout << "Test case 2:" << endl;
    calc.calculate(6, 4, 5.3f); // Sum = 15.3, Average = 5.1

    // Additional test case: 1 integer, 1 float, 1 integer
    cout << "Test case 3:" << endl;
    calc.calculate(3, 4.5f, 6); // Sum = 13.5, Average = 4.5

    // Additional test case: 3 floats
    cout << "Test case 4:" << endl;
    calc.calculate(2.1f, 3.5f, 4.0f); // Sum = 9.6, Average = 3.2

    return 0;
}
