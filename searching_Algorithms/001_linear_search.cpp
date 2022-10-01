#include <iostream>

using namespace std;

// imagine this is an interview, write linear search now!
void yidaLinearSearch(int *param,int y,int z){

for(int i=0;i<y;i++){

if(*(param+i)==z)std::cout<<"Found\n";
//std::cout<<*(param+i)<<" ";    


}


}
int main() // can call itself as well as any other functions..., also serves as an entry point
{


int numbers[12]={1,2,4,5,6,32,5,5,6,3,2,34};
int *theMostObviousPointerHere=numbers;
int y_Index;// used to loop through the array of type integer 'numbers'
            // currently contains garbage value which itsn't a big deal

int sizeForScale=sizeof(numbers)/sizeof(*numbers);

/*
for(int i=0;i<sizeof(numbers)/sizeof(*numbers);++i){
//It is because the sizeof() operator returns the size of a type in bytes.
//I learned from the Data Types chapter that an int type is usually 4 bytes, 
//so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
//To find out how many elements an array has, 
//you have to divide the size of the array by the size of the data type it contains

//test
//cout<<numbers[i]<<" ";if( numbers[i]==5)cout<<"Found";

}
*/
yidaLinearSearch(theMostObviousPointerHere,sizeForScale,3);


return 0;

// return 0 in the main function means that the program executed successfully. 
// return 1 in the main function means that the program does not execute successfully 
// and there is some error. return 0 means that the user-defined function is returning false. 
// return 1 means that the user-defined function is returning tru


}
