#include <iostream>
#include <string>

using namespace std;


void Print_Matrix(void* a , int rows, int columns)
{
 for(int i = 0 ; i < rows ; i++){
   for(int j =0 ; j < columns ; j++)
   {
        cout << *( (int *)a + (i * columns) + j) << " " ;
        
        

       
   }
   cout <<"\n";
}
}


int main()
{



int big_matrix[5][5] = { 10, 11, 12, 13, 14, 
                         16, 17, 18, 19, 20, 
                         22, 23, 24, 25, 26, 
                         28, 29, 30, 31, 32, 
                         34, 35, 36, 37, 38 };




cout << "The big_matrix is : " << endl;  
Print_Matrix(&big_matrix[0][0], 5, 5);


return 0;
}

