#include <iostream>

using namespace std;

void swap(int x[],int y,int z){
    int temp=x[y];
    x[y]=x[z];
    x[z]=temp;
}
int partition(int param[],int x,int y){
    
    int middle=((x+y)/2);
    int pivot=param[middle];
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

    
int numbers[12]={1,21,21,21,19,18,18,16,17,21,21,1};
//{12,2,34,4422,5,62,32,541,52,81,222,343};
//[2]={333,3};
//[12]={12,2,34,4422,5,62,32,541,52,81,222,343};

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