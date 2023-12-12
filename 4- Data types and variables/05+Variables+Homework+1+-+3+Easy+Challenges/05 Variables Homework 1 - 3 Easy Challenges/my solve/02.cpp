#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string firstname;
    int firstid;
    double firstgrade;

    // first student
    cout << "what is student 1 name: ";
    cin >> firstname;
    cout << endl;
    cout << "His id: ";
    cin >> firstid;
    cout << endl;
    cout << "His math exam grade: ";
    cin >> firstgrade;
    cout << endl;

    // second student
    string secondname;
    int secondid;
    double secondgrade;

    cout << "what is student 2 name: ";
    cin >> secondname;
    cout << endl;
    cout << "His id: ";
    cin >> secondid;
    cout << endl;
    cout << "His math exam grade: ";
    cin >> secondgrade;
    cout << endl;

    cout << "Students grades in math \n"
         << firstname
         << " (with id " << firstid << ")"
         << " got grade: " << firstgrade << endl;

    cout
        << secondname
        << " (with id " << secondid << ")"
        << " got grade: " << secondgrade << endl;

    cout << "Average grade is " << (firstgrade + secondgrade) / 2 << endl;

    return 0;
}
