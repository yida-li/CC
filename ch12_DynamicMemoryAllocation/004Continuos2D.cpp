#include <iostream>
#include <string>
using namespace std;
int main(){

int rows;
int cols;
int*  pointer;  //indices
int * pointer_backup; //index 
int yida;

cout<< "enter the number of rows of the array you wus to create" <<endl;
cin>>rows;
cout<< "enter the number of cols of the array you wish to create" <<endl;
cin>>cols;

pointer = new int[rows*cols];

pointer_backup= pointer;


for ( int i=0; i<rows; i++)
	for ( int j=0; j<cols ; j++)
		{
			cout<<"Enter number plox:\n";
			cin>>yida;
			*(pointer + ( i*cols +j)) = yida;
		}

// now printing out the array

for ( int i=0; i<rows; i++){
	for ( int j=0; j<cols ; j++)
{
	cout << *(pointer + ( i*cols +j)) <<' ';

}
cout<<endl;
}



delete [] pointer_backup;
return 0;




}
