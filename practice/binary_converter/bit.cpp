#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    
    stack<int> stack;
    int x=10;

    while(x>0){
        stack.push(x%2);
        x=x/2;
    }
 
    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }

    
   return 0;
}