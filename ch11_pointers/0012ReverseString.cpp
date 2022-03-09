
#include <iostream>
#include <string>

using namespace std;

void reverse_string(char s1[], char s2[])
{
 // find the end of the first string designated by the '/0' character

int string1_end = 0;
for( ; s1[string1_end] != '\0' ; string1_end++);
 
// the above for loop is a sneaky way of writing
// for( ; s1[string1_end] != '\0' ; string1_end++)
// {
// 
// }
// note that the ; in the original for loop terminates the
// statement consisting of the for loop with no body...


// Essentially, the string1_end is just to get the length of the string? in forms of characters of array ending by \0? These codes are so sophisticated 

int string2_end = 0;
for( ; s2[string2_end] != '\0' ; ++string2_end); // ; here means its empty loop

// another sneaky for loop with an empty {  }  
// So now, we have the length of both words.
cout<< string2_end;
string2_end--;  // this caught me off guard, we deliberatly postdecrement the length of the 2nd word by 1? huh?
cout<< string2_end;

int i; 
// declare another variable i, set it's length to string_end2..
                         
for( i = string2_end ; i >= 0; i--){


s1[ string1_end++] = s2[i];
cout<<"Experimenting:::"<<*(s1)<<endl;
cout<<"Experimenting:::"<<*(s1+1)<<endl;
cout<<"Experimenting:::"<<*(s1+2)<<endl;
cout<<"Experimenting:::"<<*(s1+3)<<endl;
cout<<"Experimenting:::"<<*(s1+4)<<endl;
cout<<"Experimenting:::"<<*(s1+5)<<endl;
cout<<"Experimenting:::"<<*(s1+6)<<endl;
cout<<"Experimenting:::"<<*(s1+7)<<endl;
cout<<"Experimenting:::"<<*(s1+8)<<endl;
cout<<"Experimenting:::"<<*(s1+9)<<endl;

}

// now add the '\0' character to s1

string1_end++;
s1[string1_end] = '\0';
// this step is actually not needed, but good programming practice would want a null at the end of each string literals right?

}
 


int main()
{

char string1[50] = "ABCDE";
char string2[50] = "Alexa";

cout << string1 << endl;
cout << string2 << endl;

reverse_string(string1, string2);

cout << string1 << endl;

return 0;
}
