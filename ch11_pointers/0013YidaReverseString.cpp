#include <iostream>
using std::string;
using std::cout;
using std::cin;

void ultimateTransformation( char word1[], char word2[],char word[]){
int t1=0;//testSubject1
int t2=0;//testSubject2

for(;word1[t1]!='\0';t1++); // word is 10 letters, t1 is set to 10;

for(;word2[t2]!='\0';t2++); // word is 5 letters, t2 is set to 5;

t2--;

for(int i=t2;i>=0;i--)
word1[t1++]=word2[i];

t1++;
word1[t1]='\0';



int t3=0;

for(;word1[t3]!='\0';t3++);
cout<<t3<<'\n';

for( int i=0;i<t3;i++)
word[i]=word1[i];

t3++;
word[t3]='\0';






}

int main(){

char mot[50] ="Condescend";
char mot2[50]="Faith";
char mot3[50]="";
ultimateTransformation(mot,mot2,mot3);

cout<< mot<<'\n'<<mot2<<'\n'<<mot3<<'\n';

}
