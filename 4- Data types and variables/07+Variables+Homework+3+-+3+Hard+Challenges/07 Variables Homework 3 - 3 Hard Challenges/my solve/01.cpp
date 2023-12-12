#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1; // 5
    int num2; // 3
    int num3; // 2
    int temp = -1;

    cin >> num1 >> num2 >> num3;

    temp = num1; // temp = 2

    num1 = num2; // num3 = 5

    num2 = num3; // num1 = 3

    num3 = temp; // num2 = 2

    cout << num1 << " " << num2 << " " << num3;
    return 0;
}
