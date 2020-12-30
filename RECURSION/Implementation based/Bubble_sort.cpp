#include <iostream>
using namespace std;

//Bubble Sort Recursively 

void bubble_sort(int a[],int n){
    //base case
     if (n==1){
         return;
     }
    //rec case
    for(int j=0;j<n-1;j++){
        if(a[j] > a[j+1]){
            swap(a[j], a[j+1]);
        }
    }
   bubble_sort(a,n-1);
}
//main
int main() {
    int a[]={5,4,3,1,2};
    int n=5;
    bubble_sort(a,n);
    for(int i=0;i<n;i++){
     cout<<a[i];
    }
    return 0;
}
