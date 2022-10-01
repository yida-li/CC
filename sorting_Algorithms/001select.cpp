#include <iostream>

using namespace std;

// imagine this is an another interview, write selection sort now!
void selectionSort(int *param,int y){

int temp=0;
int low_index;
int low=0;
for(int i=0;i<y;i++)
{
    low_index=i;
for(int j=i;j<y;j++)
{
if(*(param+j)<*(param+low_index)){
    low_index=j;
}

}
temp=*(param+i);
*(param+i)=*(param+low_index);
*(param+low_index)=temp;
}
}
int main()
{
int numbers[12]={12,2,34,4422,5,61,32,541,52,61,222,343};
int *theMostObviousPointerHere=numbers;
int sizeForScale=sizeof(numbers)/sizeof(*numbers);
selectionSort(theMostObviousPointerHere,sizeForScale);

for(int i=0;i<sizeof(numbers)/sizeof(*numbers);i++)
{
cout<<numbers[i]<<" ";
}

return 0;
}
