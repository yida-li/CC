#include <iostream>
using namespace std;

int main()
{

    int w = 0;
    while (w != 1)
    {
        int x;
        int y;
        cout << " generating the matrix but for 1 year old neo\n";
        cout << " enter row\n";
        cin >> x;
        cout << " enter column\n";
        cin >> y;

        int counter = 1;
        for (int i = 0; i < x; i++)
        {

            for (int j = 0; j < y; j++)
            {

                cout << " --" << counter << "-- ";
                counter++;
            }
            cout << "\n";
        }

        cout << " type 1 to exit, any other key to go again\n";
        cin >> w;
    }

    return 0;
}
