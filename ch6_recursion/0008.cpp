#include <iostream>
using namespace std;

unsigned long leonardo(unsigned long);

int main()
{
    cout << "how did the machine find the golden ratio?";
    int x = 0;
    int y = 0;
    while (x != 1)
    {
        cout << " enter the number of layers of the fibonacci sequence please , if you are unsure enter 10\n\n";
        cin >> y;
        for (int i = 1; i <= y + 1; i++)
        {

            cout << "fibonacci of order " << i << " is " << leonardo(i) << endl;
        }

        cout << " type 1 to exit, any other key to go again\n";
        cin >> x;
    }
    return 0;
}
unsigned long leonardo(unsigned long x)
{

    if ((0 == x) || (1 == x))
        return x;
    else
        // fn = fn-1+ fn-2
        return leonardo(x - 1) + leonardo(x - 2);
}