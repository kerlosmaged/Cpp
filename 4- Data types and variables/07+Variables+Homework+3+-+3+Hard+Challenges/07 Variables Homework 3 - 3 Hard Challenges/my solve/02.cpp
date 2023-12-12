#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    int eq_1 = a * a;
    int eq_neg_1 = 2 * a + 1;

    // here if b = 1 (b+1 )/2= 1
    int is_1 = (b + 1) / 2; // if b = -1 will be -1+1 =0/2 will be 0
    // but if b = 1 will be 1+1 = 2/2 will be 1 

    // here if b = -1 (b-1) = 0
    int is_neg_1 = 1 - is_1; // if is_1 = 1 this will be 0 and the difference if is_1 = 0 will be 1

    cout << "this is result from calc is 1: " << eq_1 * is_1 << "\n";

    cout << "this is result from calc is -1: " << eq_neg_1 * is_neg_1 << "\n";

    cout << eq_1 * is_1 + eq_neg_1 * is_neg_1;
    return 0;

    // the main idea from this example is if the calc eq 1 is_1 = 1 and is_neg_1 = 0
    // so we need the option (b) is 1 or 0 the calc about the use value
}
