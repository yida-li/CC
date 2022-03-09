#include <iostream>
using std::cout;
using std::cin;
using namespace std;
int main(){


int a;


while( a!= 3)
{
cout<<"enter number 1 to 10\n";
cin>>a;
switch(a)
{
case 1:
cout<<"one";
break;

case 2:
cout<<"two";
break;

default:
cout<<"Nonono\n";
break;
} //end switch
}//end while


return 0;
}
