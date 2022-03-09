#include <iostream>
#include <string>

using namespace std;


void Print_Matrix(void* a , int rows, int columns, char data_type)
{
 for(int i = 0 ; i < rows ; i++){
   for(int j =0 ; j < columns ; j++)
   {
       switch (data_type)
       {
        case 'i' : cout << *( (int *)a + (i * columns) + j) << " " ;
                   break;
        case 'c' : cout << *( (char *)a + (i * columns) + j) << " " ;
                   break;
        case 'f' : cout << *( (float *)a + (i * columns) + j) << " " ;
                   break;
        default : cout << "Invalid data type" << endl;
                  return;
        }

       
   }
   cout <<"\n";
}
}


int main()
{

int little_matrix[3][3] = { 1,2,3,4,5,6,7,8,9 };

int big_matrix[5][5] = { 10, 11, 12, 13, 14, 
                         16, 17, 18, 19, 20, 
                         22, 23, 24, 25, 26, 
                         28, 29, 30, 31, 32, 
                         34, 35, 36, 37, 38 };

char array_of_chars[2][2] = { 'a', 'b', 'c', 'd'};

float array_of_floats[4][4] = { 1.23, 2.34, 3.33, 4.44,
                                5.55, 6.66, 7.77, 8.88,
                                9.99, 10.10, 11.11, 12.12,
                                13.13, 14.14, 15.15, 16.16};


cout << "The little matrix is : " << endl;
Print_Matrix(&little_matrix[0][0], 3, 3, 'i');

cout << "The big_matrix is : " << endl;  
Print_Matrix(&big_matrix[0][0], 5, 5, 'i');


cout << "The character array is : " << endl;
Print_Matrix(&array_of_chars[0][0], 2,2, 'c');

cout << "The float array is : " << endl;
Print_Matrix(&array_of_floats[0][0], 4,4, 'f');

return 0;
}

