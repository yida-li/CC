#include <iostream>
using std::cout;
using std::cin;

int main(){
cout<<"The do...while repetition statement is similar to the while statement. In the while statement, the loop-continuation condition test occurs at the beginning of the loop before the body of the loop executes. The do... while statements test the loop-continuation condition after the loop body executes; therefore, the loop body always executes at least once, hmm at least once. So the Do-Loop = while loop but minimum once.\n";

int a;
cout<<"enter number\n";
cin>>a;


do{
cout<<" do this thing";
a++;
}while(a<=10);



return 0;
}
