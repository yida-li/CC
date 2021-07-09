#include <iostream>
using namespace std;
int main()
{

    int b[] = {10, 20, 30, 40};
    int *bPtr = b;
    cout << "Array b displayed with :\n\nArray subscript notation\n";
    for (int i = 0; i < 4; ++i)
        cout << " b[" << i << "] = " << b[i] << "\n";

    cout << " \nPointer /offset notation where the pointers is the array name\n";

    for (int i = 0; i < (sizeof(b) / sizeof(*b)); ++i)
        cout << " *(b + " << i << ") = " << *(b + i) << endl;

    cout << " \nPointer something nothing everthing\n";

    for (size_t yida = 0; yida < (sizeof(b) / sizeof(*b)); yida++)
        cout << " bPtr[" << yida << "] = " << bPtr[yida] << endl;

    cout << " \nPointer offset\n";

    for (size_t yida = 0; yida < (sizeof(b) / sizeof(*b)); yida++)
        cout << " *(bPtr" << yida << ") = " << *(bPtr + yida) << endl;

    return 0;
}