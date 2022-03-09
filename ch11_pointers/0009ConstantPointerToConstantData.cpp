#include <iostream>
using namespace std;
int main(){

const int hawk =5;
const int* const claws =&hawk;

cout<<" ready only i guess?\n";
cout<<*claws<<&claws<<' '<<claws<<'\n'<<&hawk<<' '<<hawk;


return 0;}
