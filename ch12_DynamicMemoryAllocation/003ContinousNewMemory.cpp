#include <iostream>
#include <string>

using namespace std;

int main(){



cout<<"Using new <data_type>[size]\n\n";


int size;
int* Apointer;
cout<<"enter the size of the dynamic array you wish to create"<<endl;
cin>> size;

Apointer = new int[size];

for( int i=0; i<size; i++)
{
*(Apointer+i)=2*i;
}

for( int i=0; i<size; i++){
cout<<*Apointer <<" " <<Apointer <<endl;
Apointer++;
}
cout<<"pointer at the current location is : ";
cout << Apointer <<endl;
Apointer = Apointer- size;
cout<<"pointer at the start is : ";
cout<< Apointer <<endl;

delete []Apointer;

return 0;}
