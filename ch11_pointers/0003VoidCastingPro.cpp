#include <iostream>
using namespace std;

int main(){

int a,b,c;
float d,e,f;


void *yida;

yida=&a;
*(int*)yida = 11;
yida=&b;
*(int*)yida= 22;
yida=&c;
*(int*)yida= 33;

cout<<a<<' '<<b<<' '<<c<<' ';

yida= &d;
*(float*)yida=44.44;
yida =&e;
*(float*)yida=55.55;
yida =&f;
*(float*)yida=66.66;
cout<<d<<' '<<e<<' '<<f<<' ';


return 0;
}
