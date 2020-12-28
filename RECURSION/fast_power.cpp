#include <iostream>
using namespace std;
int power(int a, int n){
    if(n==0) {
        return 1;
    }
    else
      return a * power(a, n-1); 
}

int fast_power(int a, int n){
  if(n==0){
      return 1;
  }
  int smaller_ans = fast_power(a,n/2);
  smaller_ans*=smaller_ans;
  if(n%2!=0){
    return a*smaller_ans;
  }
  else {
      return smaller_ans;
  }
}

int main() {
    int a=5;
    int n= 3;
    cout<<power(a,n)<<endl;
    cout<<fast_power(a,n);
}
