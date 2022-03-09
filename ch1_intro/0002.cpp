#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
string a;
cout<<"Enter a sentence with less than 25 space\n";

std::getline(cin,a);
if(a.size()<=25)
	cout<<"Displaying :"<<a<<'\n';
else
{
a= a.substr(0,25);
cout<<"i had to cut it :"<<a<<'\n';
}

cout<<"Also the length of this string is :";
cout<<a.length();
return 0;
}
