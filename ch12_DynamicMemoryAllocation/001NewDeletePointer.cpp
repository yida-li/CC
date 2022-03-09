#include <iostream>
#include <string>
using namespace std;

int main(){


int* integer_pointer;
int* integer_pointer2;
double* double_pointer;
long* long_pointer;
integer_pointer = new int;
integer_pointer2 = new int;
double_pointer = new double;
long_pointer= new long; 
//request enough memory from heap to hold an integer,if the request is successful, new returns the address, if there is no more memory, new returns the value 0 the bits in the dynamically allocated memory are random 1's or 0's..


* integer_pointer =10;
cout<<* integer_pointer<<endl;
cout<<integer_pointer<<endl;
cout<<integer_pointer2<<endl;
cout<<double_pointer<<endl;
cout<<long_pointer<<endl;
// once a program no longer needs the memory which it has asked for at run time, it should return it to back to the heap. This is performed with the delete operator

delete integer_pointer,integer_pointer2,double_pointer,long_pointer;
// this returns the 4 byte of memory which integer_pointer pointed to and was used to store the value of 10 in note that the pointer itself still exists and can be assigned another address( through a second call to new for example




return 0;}
