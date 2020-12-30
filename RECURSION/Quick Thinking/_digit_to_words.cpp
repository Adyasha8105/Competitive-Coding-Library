#include <iostream>
using namespace std;
//2048 problem
//Number to spellings

void printSpellings(int n){
    char words[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  //base case
  if(n==0){
      return;
  }
  //rec case first print the spellings
  printSpellings(n/10);
  int digit= n%10;
  cout<<words[digit]<<" ";
  return;
}
int main() {
    int n;
    cin>>n;
    printSpellings(n);
   
}
