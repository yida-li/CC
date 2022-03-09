#include <iostream>
#include <string>
using namespace std;


int main(){


int line[5] ={ 4,4,4,4,5};

int *fine;

fine= &line[0];

for(int i=0; i<5;i++)
{
cout<< *fine << " "<<fine <<endl;
fine++;

}


return 0;
}
