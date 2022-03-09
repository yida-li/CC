#include <iostream>


#include <string>
using namespace std;


void reverseArr( char s1[], char s2[]){

int x=0;
int y=0;
for (; s1[x] != '\0'; x++);

for (; s2[y] != '\0'; ++y);



y--;


for (int i = y; i >= 0 ; i--){


s1[x++] = s2[i];

 


}

x++;
s1[x]='\0';



}

int main(){

char a[]={'a','s','b'};
char s[]={'q','w','z'};
reverseArr(a,s);
cout<<a;



return 0;
}
