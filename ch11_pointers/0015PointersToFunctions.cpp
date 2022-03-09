#include <iostream>
#include <string>

using namespace std;

void print(void) // or literally void print(){ // } is fine
{
cout<<" -------"<<endl;
}

int main(){
cout<<"1. void*    yida( void); declares a function which is called yida, this argument receives 0 argument(parameter) and returns a void pointer.\n\n 2. void(*yoda) (void); declares yoda to be a pointer to a function which receives 0 arguments(parameter) and returns nothing.\n\n";


void (*wakanda)(void); // void(*wakanda)();
//declares a pointer called wakanda that pointers to a void function which takes no argument and returns nothing. basically returns void

wakanda = &print; // wakanda =print;

(*wakanda)();// function ran by invoking it indirectly through the pointer 





void* panter(void); // declares a void function called panter,.. uhu at least it returns a void pointer[ void* ]












return 0;
}




