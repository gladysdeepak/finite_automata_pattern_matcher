#include <iostream>
#include <string>
using namespace std;


bool matchesPattern(const string& input) {

    enum State { Q0, Q1, Q2, Q3 };
    State currentState = Q0; 

    for (char ch : input) {
        switch (currentState) {
            case Q0:
                if (ch == '1') currentState = Q1;
                break;
            case Q1:
                if (ch == '0') currentState = Q2;
                else if (ch == '1') currentState = Q1;
                break;
            case Q2:
                if (ch == '1') currentState = Q3;
                else if (ch == '0') currentState = Q0;
                break;
            case Q3:
                if (ch == '0') currentState = Q2;
                else if (ch == '1') currentState = Q1;
                break;
        }
    }

    return currentState == Q3;
}

int main() {
    string input;
    cout << "Enter a binary string: ";
    cin >> input;

    if (matchesPattern(input)) {
        cout << "The string ends with '101'." << endl;
    } else {
        cout << "The string does NOT end with '101'." << endl;
    }

    return 0;
}