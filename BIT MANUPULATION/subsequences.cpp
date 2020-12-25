#include <iostream>
#include <cstring>
using namespace std;

/* Finding Subsequenses Subsets of given a string 
Input - "abc"
Output - " ",a,b,ab,abc,ac,b,bc,c
*/

void filterChars(int n, char a[]){
    int j=0;
    while(n>0){
        int last_bit = (n&1); //get the last bit
        if(last_bit){
            cout<<a[j];
        }
        j++;
        n = n>>1;
    }
    cout<<endl;
}

void printSubsets(char a[]){
    int n = strlen(a);
    for(int i=0;i<(1<<n);i++){
        filterChars(i, a);
    }
}
int main() {
    char a[100];
    cin>>a;
    printSubsets(a);
}
