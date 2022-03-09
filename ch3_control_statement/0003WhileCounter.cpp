#include <iostream>
using std::cout;
using std::cin;

int main(){

int counter=0;

while( counter<=5)
{
cout<<counter<<' ';
counter++;
}

while(--counter>0)
cout<<counter<<' ';

cout<<"\n\n";
cout<<counter;
cout<<"\n\n";
while( counter<=10)
{cout<<counter<<' ';
counter=counter+2;}

return 0;
}
