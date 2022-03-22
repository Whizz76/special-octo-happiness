#include <bits/stdc++.h>
using namespace std;
void find_gcd(int a,int b){
    if(b%a==0){
        cout<<a;
    }
    find_gcd(b%a,b);
    //return 0;


};



int main(){
    int x=9;
    int y=10;
    int z;
    z= x|y;
    cout<<z<<endl;
    cout<<"swapping using xor "<<endl;
    x=x^y;
    y=x^y;
    x=x^y;
    cout<<"before: 9 "<<"After x is "<<x<<endl;
    cout<<"before: 10 "<<"After y is "<<y<<endl;
    int arr[8]={7,7,9,9,8,8,8,8};
    int res=0;
    for(int i=0;i<8;i++){
        res=res^arr[i];
    }
    cout<<res<<endl;
    cout<<"Gcd"<<endl;
    cout<<"Enter two numbers ";
    int g,h;
    cin>>g;
    cin>>h;
    cout<<"gcd of "<<g<<" and "<<h<<endl;
    find_gcd(min(g,h),max(g,h));
    /*cout<<"Print all prime numbers smaller than or equal to n"<<endl;
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    //int j=0;
    //int c=0;
    int d=n-1;
    int ab[d];
    int ar[d];
    for(int i=0;i<n-1;i++){
        ab[i]=0;
    }
    for(int i=0;i<n-1;i++){

        cout<<ab[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        arr[i]=i+2;
    }
    for(int i=0;i<n-1;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n-1;i++){

    }*/


    return 0;


}
