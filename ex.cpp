#include <iostream>
using namespace std;

// Function to print a simple right-angle triangle pattern
void rightAngleTriangle(int n) {
    cout << "\nRight Angle Triangle Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Function to print an equilateral triangle pattern
void equilateralTriangle(int n) {
    cout << "\nEquilateral Triangle Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print a pyramid pattern
void pyramid(int n) {
    cout << "\nPyramid Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print a diamond pattern
void diamond(int n) {
    cout << "\nDiamond Pattern:\n";
    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print a hollow rectangle pattern
void hollowRectangle(int rows, int cols) {
    cout << "\nHollow Rectangle Pattern:\n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

// Function to print a full rectangle pattern
void fullRectangle(int rows, int cols) {
    cout << "\nFull Rectangle Pattern:\n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows/size for patterns: ";
    cin >> n;

    rightAngleTriangle(n);
    equilateralTriangle(n);
    pyramid(n);
    diamond(n);
    
    int rows, cols;
    cout << "Enter number of rows and columns for rectangle patterns: ";
    cin >> rows >> cols;
    
    hollowRectangle(rows, cols);
    fullRectangle(rows, cols);

    return 0;
}
