#include <iostream>
using namespace std;

//Subsets of array

void generate_subsequences(char *in, char*out, int i, int j){
    //base case 
    if(in[i] == '\0'){
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    //rec
    //include the current char
    out[j]=in[i];
    generate_subsequences(in, out, i+1, j+1);

    //exclude the current char
    generate_subsequences(in, out, i+1, j);

}
int main() {
    char input[]="abc";
    char output[30];
    generate_subsequences(input,output,0,0);
}
