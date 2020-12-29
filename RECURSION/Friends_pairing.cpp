#include <iostream>
using namespace std;

// Friends Pairing Problem
int fact(int z) {  
    int f = 1, i;  
    if (z == 0)  {  
     return(f);  
    }  
    else {  
     for (i = 1; i <= z; i++){  
      f = f * i;  
    }  
  }  
  return(f);  
}  
int fp(int n) {
    if(n==0 || n==1) {
        return 1;
    }
    if(n==2) {
        return 2;
    }
    return fp(n-1)+fp(n-2)*(fact(n-1)/fact(n-2));
}
int main() {
  int n=3;
  cout<<fp(n);
}
