#include <iostream>
using namespace std;

//Find the unique numbers in linear time ( ALL the nos. are present thrice except for one numbers which are present only once).


int main() {

    int cnt[64] = {0};
    int n,no;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>no;
        //Update the cnt array by extracting bits
        int j=0;
        while(no>0){
            int last_bit = (no&1);
            cnt[j] += last_bit; 
            j++; 
            no = no>>1;
        }
    }

    //Itrate over the array
    int p=1;
    int ans =0;
    for(int i=0;i<64;i++){
        cnt[i] %= 3;
        ans += (cnt[i]*p);
        p = p<<1;
    }
    cout<<ans<<endl;
    return 0;

}
