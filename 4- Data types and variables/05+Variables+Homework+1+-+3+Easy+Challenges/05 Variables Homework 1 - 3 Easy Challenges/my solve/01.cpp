#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double firstn, secondn;
    cout << "Enter Two Numbers: ";
    cin >> firstn >> secondn;
    cout << firstn << " + " << secondn << " = " << firstn + secondn << endl;
    cout << firstn << " - " << secondn << " = " << firstn - secondn << endl;
    cout << firstn << " / " << secondn << " = " << firstn / secondn << endl;
    cout << firstn << " * " << secondn << " = " << firstn * secondn << endl;
    return 0;
}
