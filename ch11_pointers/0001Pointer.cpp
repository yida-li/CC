#include <iostream>
using namespace std;

int main(){

int x;
int* xPointer;
cout<<"Initially the address of pointer should be set to Null but in this case for compiler show it at location :"<<xPointer<<"\n\n";
cout<<"So a good practice is always set the pointer to Null\n";
xPointer=NULL;
cout<<"Now the xPointer is at location :"<<xPointer<<endl;
xPointer= &x;
*xPointer= 24;
cout<<"x is :"<<x<<" at location "<<&x<<endl;
cout<<"The value that the pointer is pointing at is "<<*xPointer
<<" location of the pointer is at "<<xPointer<<endl;



return 0;}

