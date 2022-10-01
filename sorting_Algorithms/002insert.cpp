#include <iostream>

using namespace std;

// imagine this is an another interview, write insertion sort now!
void insertionSort(int *param,int y){

int temp=0;
int low_index;
for(int i=1;i<y;i++)
{
  low_index=i;  
    while(low_index>0 && *(param+low_index)<*(param+low_index-1)){

        temp=*(param+low_index);
        *(param+low_index)=*(param+low_index-1);
        *(param+low_index-1)=temp;
        low_index--;
    }
    
    //checking the array after each iteration to understand what is going on
    for( int x=0;x<y;x++){

    cout<<*(param+x)<<" ";    
    }
    cout<<"    -- "<<i<<" iteration\n";
} 
}



int main()
{
int numbers[12]={12,2,34,4422,5,61,32,541,52,61,222,343};
int *theMostObviousPointerHere=numbers;
int sizeForScale=sizeof(numbers)/sizeof(*numbers);
insertionSort(theMostObviousPointerHere,sizeForScale);

//Ability to sort a list as it is being received.
//Efficient for small data sets, especially in practice than other quadratic algorithms — i.e. O(n²).


return 0;
}
