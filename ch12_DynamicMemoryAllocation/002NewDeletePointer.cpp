#include <iostream>
#include <string>
using namespace std;
int main(){
cout<<" requesting enough memory from the heap to hold an integer , giving this location initial value of 22!!!\n";
int* yida;
yida = new int(22);
cout<<*yida<<endl;
cout<<yida<<endl;

delete yida;




return 0;}

