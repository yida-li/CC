#include <iostream>
#include <string>
using namespace std;

int main(){







char* stars[6];// declare an array of 6 character pointers
//declares the variable named stars to be a 6 element array of pointers to characters( each element of the array is a pointer to a character)

stars[0]= "fu";
stars[1]= "pu  ";
stars[2]= "su  ";
stars[3]= "mu  ";
stars[4]= "lu  ";
stars[5]= "yu  "; //<----- these are all string literal constants

for(int i=0;i<6;i++)
cout<< *(stars+i)<<'\n';






return 0;
}
