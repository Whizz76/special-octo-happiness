#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of letters in the word\n";
    int n;
    cin>>n;
    char arr[n];
    int i;
    cout<<"Enter the word\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
