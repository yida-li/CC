#include <iostream>

#include "0003.cpp"
using namespace std;
int main()
{
    string x;
    cout << " Hey again, what is your online initial?( if you don't have one create one less than 20 words please\n";
    cin >> x;

    person p1(x);
    p1.sayMyName();

    return 0;
}