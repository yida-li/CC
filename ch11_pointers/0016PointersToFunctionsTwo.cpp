#include <iostream>
#include <string>
using namespace std;



void one(){

cout<<" first function that takes no argument and returns void \n";


}

void two(int a){

cout<<" second function thats takes 1 integer argument but returns void\n";
cout<<" this function will multiple the argument by 10 and print it out\n";

a*=10;
cout<<a<<endl;

}

int three(int a,int b){

cout<<" third function that takes 2 integer argument and will return 1 integer\n";
cout<<" so basically the two arguments inserted inside the method can be used to perform a certain operation and the return type is an int.\n";
return (a+b); // does this even work lol? it does,,, i guess it really takes trial and error for imagination huh


}



int main(){

void (*joker) (void);
joker=one;
(*joker)();

void(*joker1)(int);
joker1=two;
(*joker1)(30);

int (*joker2)(int,int);
joker2=three;
cout<<(*joker2)(40,40)<<endl;
return 0;}










