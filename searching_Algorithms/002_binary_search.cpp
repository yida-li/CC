#include <iostream>

using namespace std;

// imagine this is an another interview, write binary search now!
void yidaBinarySearch(int *param,int y,int z){
int low,high,mid;
low=0;
high=y-1;
while(low<=high){
    if(*(param+((low+high)/2))<z)low=((low+high)/2)+1;
    else if(*(param+((low+high)/2))>z) high=((low+high)/2)-1; 
    else {
    cout<<"found at "<<(low+high)/2;
    break;
    }
}
}
int main()
{
int numbers[12]={1,2,3,4,5,6,32,51,52,61,222,343};
int *theMostObviousPointerHere=numbers;
int sizeForScale=sizeof(numbers)/sizeof(*numbers);
yidaBinarySearch(theMostObviousPointerHere,sizeForScale,3);
return 0;
}
