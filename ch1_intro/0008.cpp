#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;
    char x;
    string temp;
    int semaphore=0;
    int counter=0;
    //getline(cin, userInput);
    
    for(int i=0;i<userInput.size();i++){
       if(userInput.at(i)==' ') {
        
        semaphore++;}
    }
    if (semaphore==2){
    for(int i=0;i<userInput.size();i++){
       if(userInput.at(i)==' ' && counter==0){
        x=userInput.at(i+1);
        counter++;}
        else if(userInput.at(i)==' '){
        temp = userInput.substr(i+1, userInput.size() - 1); 
    }
    }    
    cout<< temp <<", "<<userInput.at(0)<<'.'<<x<<".\n";
    }
    else{
    for(int i=0;i<userInput.size();i++){
       if(userInput.at(i)==' '){
        temp = userInput.substr(i+1, userInput.size() - 1); 
    }
    }    
    cout<< temp <<", "<<userInput.at(0)<<".\n";
    }

    
   return 0;
}