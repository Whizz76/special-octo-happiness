#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
   cout<<"Find the max length word\n";
   cout<<"Enter the sentence\n";
   string str;
   getline(cin,str);
   int n=str.length();
   int st=0;
   int l=0;
   int m=INT_MIN;
   int s=0;
   int e=0;
   for(int i=0;i<n+1;i++){
    if(str[i]!=' ' && str[i]!='\0'){
        l=l+1;
    }
    if(str[i]==' '){
        l=0;
        st=i+1;

    }
    if(str[i]=='\0'){
        cout<<"longest word length "<<m<<endl;

    }

    if(l>m){
        m=l;
        s=st;
        e=i;
    }


   }
   cout<<"longest word is: \n";
        for(int j=s;j<=en;j++){
            cout<<str[j];
        }
    return 0;

}
