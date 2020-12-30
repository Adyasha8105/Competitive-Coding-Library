#include <iostream>
using namespace std;
//Quick Sort

int partition(int *a, int s, int e){
    // Inplace
    int i=s-1;
    int j=s;
    int pivot = a[e];
    for(;j<=e-1;j++){
        if(a[j]<=pivot){
        //merge the smaller element in the region-1
        i=i+1;
        swap(a[i],a[j]);
        }
        //expand the larger region
        j=j+1;
    }

    //place the pivot element in the correct index
    swap(a[e],a[i+1]);
    return i+1;   
}
void quicksort(int *arr, int s, int e) {
    if(s>=e){
        return;
    }
    //rec case
    int p = partition(arr, s, e);
    //left part
    quicksort(arr, s, p-1);
    //right
    quicksort(arr,p+1,e);
}

int main() {
   int arr[]={2,7,8,6,1,5,4};
   int n = sizeof(arr)/sizeof(int);
   quicksort(arr,0,n-1);
   for(int i=0;i<=n-1;i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}
