#include <iostream>
using namespace std;

//last occurence of a key in a sorted array

int first_occ(int a[], int n, int key){
    int s=0;
    int e=n - 1;
    int ans = -1;
    while(s<=e){
    int mid = (s+e)/2;
    if(a[mid]== key){
        ans=mid;
        s= mid+1;
    }
    else if (a[mid] <key){
        s=mid+1;
    }
    else {
        e = mid -1;
    }
  }
  return ans;
}
int main() {
    int arr[]= {1,2,5,8,8,8,8,8,10,12,15,20};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin>>key;
    cout<<first_occ(arr,n,key);
}
