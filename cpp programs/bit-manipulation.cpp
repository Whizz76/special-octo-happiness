#include <bits/stdc++.h>
#define INT_SIZE 32
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of elements in array\n";
    cin>>n;
    /*int arr[n];
    cout<<"enter the array elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int result=0;
    for(int i=0;i<INT_SIZE;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(arr[j]&(1<<i)){
                sum+=1;
            }
        }
        if((sum%3)!=0){
            result=result|(1<<i);
        }
    }
    cout<<result<<endl;*/  // Uncomment this code to run(the code runs successfully)

    int a[n];
    cout<<"Enter the number of array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=0;
    for(int i=0;i<n;i++){
        x=x^a[i];
    }
    int pos;
    for(int i=0;i<INT_SIZE;i++){
        if(x&(1<<i)){
            pos=i;
            break;
        }
    }
    int nx=0;
    for(int i=0;i<n;i++){
        if(a[i]&(1<<pos)){
            nx=nx^a[i];
        }
    }
    cout<<nx<<endl;
    cout<<(nx^x)<<endl;


}
