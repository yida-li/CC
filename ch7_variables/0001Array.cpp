#include <iostream>
using namespace std;

int main(){




int j,i,rows,columns;

cout<<"Enter rows and columns\n";
cin>>rows>>columns;
int array[rows][columns];
for ( i=0;i<rows;i++)
{	for(j=0;j<columns;j++)
           {
		
		cin>>array[i][j];

		
           }
}


for(i=0;i<rows;i++){
	for(j=0;j<columns;j++){
		cout<<"Pew"<<array[i][j]<<' ';}cout<<endl;
}return 0;
}
