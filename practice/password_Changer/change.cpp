#include <iostream>
#include <string>
using namespace std;

int main() {
   
   string x;
   cin>>x;
   
   for(unsigned int i=0;i<x.size();i++){
    
   if(x.at(i)=='i') x.at(i)='1';
   else    if(x.at(i)=='a') x.at(i)='@';
   else    if(x.at(i)=='m') x.at(i)='M';
   else    if(x.at(i)=='B') x.at(i)='8';
   else    if(x.at(i)=='s') x.at(i)='$';
   else    if(x.at(i)=='c') x.at(i)='$';
   else    if(x.at(i)=='u') x.at(i)='$';
   else    if(x.at(i)=='e') x.at(i)='5';
   else    if(x.at(i)=='2') x.at(i)='%';
   else    if(x.at(i)=='3') x.at(i)='^';
   else    if(x.at(i)=='7') x.at(i)='&';
   else    if(x.at(i)=='b') x.at(i)='*';
   else    if(x.at(i)=='E') x.at(i)='(';
   else    if(x.at(i)=='#') x.at(i)='3';
   //1 thousand more
     
   }
   x+="!";
   cout<<x<<endl;
   
   return 0;
}