// Check the store occurance of the key present in an given array using recursion.

#include <iostream>
using namespace std;

int storeOcc(int *a,int i, int n, int key, int *out, int j) {
    //base case
    if(i==n) {
        return j;
    }
    if(a[i]==key) {
        out[j] = i;
        // increment j to accomodate cureent occ
        return storeOcc(a,i+1,n,key,out,j+1);
    }
    // remains j unchanged
    return storeOcc(a,i+1,n,key,out,j);
}

int main() {
    int arr[]={1,2,3,7,4,5,6,7,10};
    int key=7;
    int n= sizeof(arr)/ sizeof(int);

    int output[100];
    int cnt = storeOcc(arr,0,n,key,output,0);
    cout<<"count "<<cnt<<endl;

    for(int k=0;k<cnt;k++) {
        cout<<output[k]<<" ";
    }
    return 0;
}