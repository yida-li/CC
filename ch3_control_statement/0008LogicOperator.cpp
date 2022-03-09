#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
string x;

do{
cout<<"Enter Apple but don't enter Pear\n";

cin>>x;

if(x=="Apple")
cout<< true <<" Pen\n";
else
cout<< false<<" Pen\n";
}while(x!="Pear");



return 0;
}
