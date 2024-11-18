/* Develop an application where requirement is to search an item from two different types of data set of 10 elements each. One data set is of type integer and another is of type float. These data needs protection for unauthorized users. Function name of the search function need to be same. */

#include <iostream>
using namespace std;

class DataSearch {
private:
    int intData[10];   // Integer dataset
    float floatData[10]; // Float dataset

public:
    // Function to input integer dataset
    void inputIntegerData() {
        cout << "Enter 10 integer values: ";
        for (int i = 0; i < 10; i++) {
            cin >> intData[i];
        }
    }

    // Function to input float dataset
    void inputFloatData() {
        cout << "Enter 10 float values: ";
        for (int i = 0; i < 10; i++) {
            cin >> floatData[i];
        }
    }

    // Overloaded search function for integer dataset
    int search(int value) {
        for (int i = 0; i < 10; i++) {
            if (intData[i] == value) {
                return i + 1; // Return 1-based position
            }
        }
        return -1; // Not found
    }

    // Overloaded search function for float dataset
    int search(float value) {
        for (int i = 0; i < 10; i++) {
            if (floatData[i] == value) {
                return i + 1; // Return 1-based position
            }
        }
        return -1; // Not found
    }
};

int main() {
    DataSearch ds;

    // Input datasets
    cout << "Input for Integer Dataset:\n";
    ds.inputIntegerData();

    cout << "Input for Float Dataset:\n";
    ds.inputFloatData();

    // Search in integer dataset
    cout << "Enter integer data to search: ";
    int intSearch;
    cin >> intSearch;
    int intPos = ds.search(intSearch);
    if (intPos != -1) {
        cout << "Data found at position: " << intPos << endl;
    } else {
        cout << "Data not found" << endl;
    }

    // Search in float dataset
    cout << "Enter float data to search: ";
    float floatSearch;
    cin >> floatSearch;
    int floatPos = ds.search(floatSearch);
    if (floatPos != -1) {
        cout << "Data found at position: " << floatPos << endl;
    } else {
        cout << "Data not found" << endl;
    }

    return 0;
}
