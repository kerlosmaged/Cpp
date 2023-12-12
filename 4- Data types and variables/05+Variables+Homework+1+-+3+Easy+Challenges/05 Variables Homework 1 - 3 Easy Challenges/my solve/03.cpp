#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int st1, st2, st3, st4, st5, st6, st7, st8;
    cin >> st1 >> st2 >> st3 >> st4 >> st5 >> st6 >> st7 >> st8;
    double evenPlaces = st2 + st4 + st6 + st8;
    double oddPlaces = st1 + st3 + st5 + st7;
    cout << evenPlaces << " " << oddPlaces;
    return 0;
}
