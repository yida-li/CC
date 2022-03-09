#include <iostream>
using std::cout;
using std::cin;

int main(){

cout<<"Statements break and continue alters the flow of control:\n"
<<"Break statement are used to escape early from a loop ro to skip remainder of a switch statement\n"
<<"Continue statement skips the remaining statements in the body of that statement and proceeds with the next iteration of the loop\n\n:";
int a;
cout<<"enter number\n";
cin>>a;
for(int i=0;i<40;i+=a)
{   
if( i==21)
{cout<<"STOP! at "<<i<<"\n";
break;
}
if( i==24)
{cout<<"Continue!\n";
continue;
}
cout<<"pew"<<i<<"\n";
}	
return 0;
}
