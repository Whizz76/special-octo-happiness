#include <bits/stdc++.h>
using namespace std;
int main(){
    // Max subarray sum using kadane's algo
    cout<<"Max subarray sum\n";
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int i;
    int arr[n];
    cout<<"Enter the array elements\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int currsum;
    int maxsum=INT_MIN;
    for(i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum>maxsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<"Max sum is "<<maxsum;
    cout<<endl;

    // Max circular subarray sum
    cout<<"Max circular subarray sum....\n";
    int total_sum;
    for(i=0;i<n;i++){
        total_sum+=arr[i];
    }
    for(i=0;i<n;i++){
        arr[i]=-arr[i];
    }
    int c;
    int m=INT_MIN;
    for(i=0;i<n;i++){
        c+=arr[i];
        if(c>m){
            m=c;
        }
        else{
            c=0;
        }
    }
    int max_sum= total_sum+m;
    cout<<"Max circular subarray sum  "<<max_sum;
    cout<<endl;
    cout<<"Pair sum..\n";
    cout<<"Enter a given sum";
    int key;
    cin>>key;
    for(i=0;i<n;i++){
        arr[i]=-arr[i];
    }
    int st=0;
    int en=n-1;
    int psum=0;
    int g=0;
    sort(arr,arr+n);
    while(st<=en){
        psum=arr[st]+arr[en];
        if(psum>key){
            en--;
        }
        else if(psum<key){
            st++;
        }
        else{
            g=psum;
            break;
        }
    }
    if(g){
        cout<<"Pair sum formed from pair "<<arr[st]<<" "<<arr[en];
    }
    else{
        cout<<"Not found";
    }
    cout<<endl;


    return 0;


}
