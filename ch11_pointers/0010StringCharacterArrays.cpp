#include<iostream>
#include <string>
using namespace std;
int main(){



char * s= "ABC";
//creates a pointer to a character which is assigned the address
// of a character string literal constant stored in a portion
// of memory which may only be read 
// even compiler is giving me warning... wow
// i guess it's treating as string constant at this point
// welp..

char s1[4]={'a','b','c','\0'};
//declares and initializes a 4 element of array of characters. The last element in the array is the null character '\0' Now the elements of the array can both be read and written at will!! so much better

cout<<" read only : "<<s <<endl;

cout<<" read and write :"<< s1<<endl;

*s1='z';
cout<<" read and write :"<< s1<<endl;


*(s1+1)='X';
cout<<" read and write :"<< s1<<endl;

cout<<" I hope i remember that arrays are just constant pointers!!\n\n;";
return 0;
}
