#include <iostream>
using std::cout;
using std::cin;

int main(){

cout<"While repetition statement specifies that a program should repeat an action while some condition remains true.\n\nWhile there are more items on my shopping list\n-Purchase next item and cross it off my list\n";
int p;
cout<<"Enter number\n";
cin>>p;
while(p<=100)
p*=3;

cout<<"Now the number is:"<<p;


return 0;
}
