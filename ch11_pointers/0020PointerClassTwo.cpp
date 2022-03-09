#include<iostream>

class pokemon{
public:
char super;
std::string ko;


};

int main(){

pokemon po;
pokemon* pi=&po;

pi->super='S'; // (*pi).super= 'S';
pi->ko="superman";


std::cout<<po.super<<' '<<po.ko<<'\n';

std::cout<<"Remember, it is always the pointer which does -> directly to the variable to make it equal to = something something something eh\n\n";

return 0;}
