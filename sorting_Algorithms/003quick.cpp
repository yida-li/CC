#include <iostream>

using namespace std;



/// @brief exchange elements
/// @param x 
/// @param y 
/// @param z 
void swap(int x[],int y,int z){
    int temp=x[y];
    x[y]=x[z];
    x[z]=temp;
}


int partition(int param[],int x,int y){
    
    
    int pivot=param[(x+(y-x)/2)];
    while(x<y){
    while(param[x]<pivot){
        ++x;
    }
    while(param[y]>pivot && y!=0){
        --y;
    }
    if(x<y){
    swap(param,x,y);
    ++x;
    --y;
    }
    }
    return y;
}



void quickSort(int param[],int x,int y){

if(x>=y)return;

int temp=partition(param,x,y);
quickSort(param,x,temp);
quickSort(param,temp+1,y);
}

int main()
{

    
int numbers[12]={122,21,21,21,19,18,1222,16,17,21,21,122};

int sizeForScale=sizeof(numbers)/sizeof(*numbers);
//quickSort(numbers,0,sizeForScale-1);

for(int i:numbers)
{
    cout<<i<<" ";
}
cout<<endl;

quickSort(numbers,0,sizeForScale-1);

for(int i:numbers)
{
    cout<<i<<" ";
}
return 0;
}