#include <iostream>
using std::cout;
using std::cin;
bool ask(int x){
/*
if (x%=2)
return true;
else
return false;
*/
return (x%=2)?true:false;

}

int main(){

int x;
cout<<"Send!\n";
cin>>x;

if (ask(x)== true)
cout<<"truth seeker\n";
else
	if (ask(x)!=true)
		cout<<"false hood\n";


return 0;
}
