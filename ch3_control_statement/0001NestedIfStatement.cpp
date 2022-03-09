

#include<iostream>
using std::cout;
using std::cin;

int main(){
cout<<"Enter number 0-100\n";
int a;
cin >>a;

if (a==100)
cout<<"Perfect";
else if (a>=90)
cout<<"A+";
else if(a>=80)
cout<<"B+";
else if(a>=70)
cout<<"C+";
else
cout<<"Fail";
return 0;
}

