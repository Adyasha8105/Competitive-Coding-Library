#include <iostream>
using namespace std;
//Book allocation problem

bool isPossible(int arr[], int n, int m, int curr_min){
    int studentUsed = 1;
    int pages_reading =0;
    for(int i=0;i<n;i++){
        if(arr[i]>curr_min){
            return false;
        }
        if(pages_reading + arr[i]>curr_min){
            studentUsed++;
            pages_reading= arr[i];
            if(studentUsed>m){
                return false;
            }
        }else {
         pages_reading+= arr[i];
        }
    }
    return true;
}
int FindPages(int arr[], int n, int m){
    long long sum=0;
    if(n<m){
        return -1;
    }
    //count the no of pages
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s= arr[n-1];
    int e= sum;
    int ans =0;
    while(s<=e){
        int mid =(s+e)/2;
        if(isPossible(arr,n,m,mid)){
            e = mid-1;
            ans=mid;
        }
        else {
            //it is not possible to divide at x pages 
            // increase the no of pages
            s= mid+1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;

        int arr[1000];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cout<<FindPages(arr,n,m)<<endl;
    }

    return 0; 
}
