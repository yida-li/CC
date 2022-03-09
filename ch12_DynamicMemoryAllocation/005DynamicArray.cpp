#include <iostream>
#include <string>

#include <cstring>
using namespace std;


char* riri( char *str)
// function receives a char pointer and return a character pointer
// this function will dynamically allocate sufficient memory to hold the contents string pointed to by the passed parameter with all vowels(a,e,i,o,u) removed. The function will return a pointer to the start of the dynamically allocated memory. We will make use of the [[[strlen]] function found in the library<cstring>.!

{
int l = strlen(str);
cout<<"length of l is : "<< l<<endl;
l++; // add one more to account for end-of-string character '/0'?

char * start= new char [l];// this one clearly dynamically allocate sufficient memor
char * tmpp= start; // make a copy but for what??

while(* str !='\0'){


if((*str !='a')&& (*str !='e')&&(*str!='i') &&(*str!='o')&&(*str!='u') )
{
*tmpp = *str; // copy only the non-vowel characters obviously
tmpp++;
}
str++; // advance the two pointers


}
*tmpp = '\0';
// do the memories reset back once computer is closed?
return start;
}


int main(){


cout<<" Here is another example of the use of the new operator together with pointers. It is a c++ function which receives a char* and will return another char*. The function will dynamically allocate sufficient memory to hold the contents string pointed to by the passed parameter with all vowels( a,e,i,o,u) removed. The function will return a pointer to the start of the dynamically allocated memory. We will make use of the strlen function found in the library <string> within your function.\n\n";

char s1[] ="memdaedae";
char s2[] ="";
char s3[] ="iminkli";

cout<< s1 <<" "  << riri(s1) <<endl;
cout << s2 <<" " << riri(s2) <<endl;
cout << s3 << " "<< riri(s3) <<endl;

 
return 0;}




