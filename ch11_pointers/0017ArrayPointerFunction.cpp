#include<iostream>
#include <string>
using namespace std;
int global_array[5]; // an integer array of 5 uninitialized elements

void clear(){
for(int i=0;i<5;i++)
global_array[i]=i*2;


}

void add_one(){


for( int i=0; i<5; i++)
global_array[i]= global_array[i]+1;
}

void print_out(){

for( int i=0; i<5; i++)
cout<<*(global_array+i)<<endl;


}

int main()
{

void (*  array[4]) (void) ; // declare an array of 4 pointers to FUNCTIONS which do not return a value

array[0] = &clear;
array[1] = &print_out;
array[2] = &add_one;
array[3] = &print_out;

// now call each function one-by-one

for(int i = 0; i < 4 ; i++)
   (*array[i])() ;


return 0;
}


