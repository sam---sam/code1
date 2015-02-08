#include<iostream>
#include<string>
using namespace std;



void line (string str ){
int lg = str.length();

for (int i=0;i<lg;i++)
cout <<"*";
cout <<endl;

}

void print (string str , int col=37 , bool w=false){


if (w)
line(str);

int i=col+30;
cout <<"\033[0;"<<i<<"m"<<str<<"\033[0m";

if (w)
line(str);

}

int main (){

print ("hello it is me !\n");
print ("hello it is me !\n",1);
print ("hello it is me !\n",6,true);
return 0;
}
