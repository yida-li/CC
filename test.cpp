#include <iostream>
#include <string>
using namespace std;

int main() {
    
    
    string y;
string x;
getline(cin,y);
cout<<y.size();
    while(y!="Done" && y!="done" && y.at(0)!='d'){

    for(int i=y.size()-1;i>=0;i--){
        x+=y.at(i);


    }
cout<<x;
x="";
getline(cin,y);
    }
    
   return 0;
}