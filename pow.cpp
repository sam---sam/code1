#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
bool isPrime( int n){return (n%2!=0 && n%3!=0 && n%5!=0);}
int main(int argc , char * argv[]){
for (int i=1;i<argc;i++)
if (isPrime(atoi(argv[i])))
cout <<argv[i]<<" = "<<endl;
return 0;
}
