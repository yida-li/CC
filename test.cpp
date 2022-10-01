#include <iostream>
#include <string>
using namespace std;

void swap(int x[],int y,int z){
    int temp=x[y];
    x[y]=x[z];
    x[z]=temp;
}
int main() {    
int x[]={11,222,13,14,51,6,71,8,9,10};
//int mid = sizeof(x)/4;
int l=0;               // 0 
int r=(sizeof(x)/4)-1; // 9 btw
int temp;
//cout<<(l+r)/2<<endl;

for(int yida:x){
    cout<<yida<<" ";
}
cout<<endl;



int mid=(l+r)/2;
while(x[l]<x[mid] && l!=mid)l++;
while(x[r]>x[mid] && r!=mid)r--;
//cout<<l<<endl;
//cout<<r<<endl;
if(l<r){
   swap(x,l,r); 
}
swap(x,l,r);


for(int yida:x){
    cout<<yida<<" ";
}
cout<<endl;



return 0;
}