#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

   string x;
   
   x="IDK MAN C++ IS PRETTY HARD, ill TTYL LATER MAYNE.";
   //cin>>x;
   
   cout<<"You entered: "<<x<<endl;
    if(x.find("IDK")!=string::npos){
        x.replace(x.find("IDK"),3,"I don't know");
    }
    if(x.find("BFF")!=string::npos){
         x.replace(x.find("BFF"),3,"best friend forever");
    }
    if(x.find("JK")!=string::npos){
         x.replace(x.find("JK"),3,"ust kidding");
    }
    if(x.find("TTYL")!=string::npos){
         x.replace(x.find("TTYL"),3,"talk to you later");
    }
    if(x.find("TMI")!=string::npos){
         x.replace(x.find("TMI"),3,"too much information");
    }
   
   
    cout<<"Expanded: "<<x<<endl;;
   return 0;
}