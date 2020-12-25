#include <iostream>
using namespace std;

// You are given two 32 bit numbers, N and M and two bit positions, 
// i and j. Write a method to set all bits between i and j in N equal to M.
// ( e.g M becomes a substring of N located at i and starting at j).

int clearRangeItoJ(int n, int i, int j){
    int ones = (~0);
    int a = ones <<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    int ans = n & mask;
    return ans;
}

int replaceBits (int n, int m, int i, int j){
    int n_ = clearRangeItoJ(n,i,j);
    int ans = n_ | (m<<i);
    return ans;
}

int main() {
    int n=5;
    int i=1, j=3;
    int m=2;
    cout<<replaceBits(n,m,i,j);
}
