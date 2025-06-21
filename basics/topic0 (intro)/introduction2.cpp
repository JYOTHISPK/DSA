#include <iostream>
using namespace std;

int main() {
    // Declare variables
    string name;
    int age;

    // Ask for user input
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    // Output the values entered by the user
    cout << "Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}
