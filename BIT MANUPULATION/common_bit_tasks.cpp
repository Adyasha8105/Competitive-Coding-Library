#include <iostream>
using namespace std;

bool isOdd(int n){
    return (n & 1);
}

int getbit (int n, int i) {
    int mask = (1<<i);
    int bit = (n & mask)>0 ? 1:0;
    return bit;
}

int setbit (int n, int i) {
    int mask = (1<<i);
    int ans = (n | mask);
    return ans;
}  

int clearbit (int n, int i) {
    int mask = ~(1<<i);
    int clear = (n & mask);
    return clear;
}

int updatebit (int n, int i, int  v) {
    int mask = ~(1<<i);
    int clear = (n & mask);
    return (clear | (v<<i));
}

int clearLastIBits(int n, int i){
    int mask = (-1 << i);
    return n & mask;
}

int clearRangeItoJ(int n, int i, int j){
    int ones = (~0);
    int a = ones <<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    int ans = n & mask;
    return ans;

}

int main(){
    int n=31;
    int i=1, j=3;
    cout<< isOdd(n) <<endl;
    cout<< getbit(n,i) <<endl;
    cout<< setbit(n,i) <<endl;
    cout<< clearbit(n,i) <<endl;
    cout<< updatebit(n,i,0) <<endl;
    cout<< clearLastIBits(n,i) <<endl;
    cout<<clearRangeItoJ(n,i,0)<<endl;
    return 0;
}


