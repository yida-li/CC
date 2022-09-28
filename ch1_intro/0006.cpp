#include <iostream>
#include <string>
using namespace std;

int main() {
   string userName;
   string songVerse;

   getline(cin, userName); //Yida
   userName = userName.substr(1, userName.size() - 1); 

   getline(cin, songVerse); // Gotti Gotti Gotti(Name)
   songVerse.replace(songVerse.find("(Name)"),6,userName);
  

   cout << songVerse << endl; // Gotti Gotti Gottiida

   return 0;
}