#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;

   getline(cin, userInput);
   
   if(userInput.find("fuck")!=string::npos || userInput.find("fucking")!=string::npos) cout<<"Censored\n";
   else cout<<userInput<<endl;
  

   return 0;
}