#include <iostream>
using namespace std;

int main(){


cout<<"The C++ compiler treats reference variables as constant pointers. The compiler will perform the dereferencing of these so called constant pointers for you automatically gracefully\n\n";

int abstract;
int&some_reference  = abstract;
abstract= 4;
cout<< &abstract<<" " << &some_reference<<"\n"
<< abstract<<" "<< some_reference<<"\n";

some_reference=5;
cout<< &abstract<<" "<< &some_reference<<'\n'<<abstract<<' '<<some_reference<<'\n';



return 0;}
