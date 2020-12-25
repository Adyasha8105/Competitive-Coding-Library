#include <iostream>
using namespace std;
// Given a number N, find Number of set bits in binary rep. of it
// N = 13, Binary = 1101, Output: 3

int main() {
    int ans = 0;
    int n;
    cin>>n;
    while(n>0) //Count Bits
  {
    ans+=(n&1);
    n=n>>1;
  }
  cout<<ans;
}
