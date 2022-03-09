#include <iostream>
#include <string>
using namespace std;



int main(){

float array[3]={1,2,3};

cout<<" *array is a constant pointer which makes sense because the position of *array is already designated to variable 1\nAnd position of *(array+1) is for the variable 2\nIn a sense an array is just a sequence of constant pointers in order pointed to their designated value uhhh  \n\n";

cout<<*array<<' '<< array<<endl;
cout<<*(array+1)<<' '<<(array+1)<<endl	;
cout<<*(array+2)<<' '<<(array+2)<<endl	;
return 0;
}
