#include <iostream>
#include <string>

using namespace std;


int main(){
cout<<"I finally underestand void pointers:: basically need located it and cast it for it to work eh\n";
int santaclaus=0;
void *ion;
int yida[3][3]={1,2,3,3,4,4,5,5,6};
ion=&yida[0][0];

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){

cout <<*((int*)ion+santaclaus)<<' ';
santaclaus++;

}
cout<<endl;
}





return 0;
}
