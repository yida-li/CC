#include <iostream>
using namespace std;
int main(){


cout<<"trying to read directly and indirectly, whatever that means\n\n";



const int Sun= 999;

int const * telescope= &Sun;

cout<<*telescope<<telescope<<'\n';




return 0;}

