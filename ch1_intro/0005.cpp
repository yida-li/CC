#include <iostream>
#include <string>
using namespace std;

int main() {
   string emailText;
   int atSymbolIndex;
   string emailUsername;

   cout << "Enter email address: ";
   cin  >> emailText;

   atSymbolIndex = emailText.find('@');
   if (atSymbolIndex == string::npos) {
      cout << "Address is missing @" << endl;
   }
   else {
      emailUsername = emailText.substr(0, atSymbolIndex);
      cout << "Username: " << emailUsername << endl;
   }

   return 0;
}