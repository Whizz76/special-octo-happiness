#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main(){
    int n;
    cout<<"1. vectors "<<endl;
    cout<<"Enter the number of elements";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements";
    int i;
    int x;
    int maximum;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"sorting the vector "<<endl;
    sort(a.begin(),a.end());
    cout<<"Sorted vector with last element popped "<<endl;

    a.pop_back();
    for(auto v: a){
        cout<<v<<" ";
    }
    cout<<endl;

    cout<<" 2. multiSet "<<endl;
    cout<<"Enter the elements ";
    multiset<int> st;
    for(i=0;i<n;i++){
        int s;
        cin>>s;
        st.insert(s);
    }
    for(auto itr=st.begin(); itr!= st.end(); itr++){
        cout<<*itr<<" ";
    }

    cout<<endl;
    cout<<"3. map "<<endl;
    cout<<"Enter map values "<<endl;
    map<int,int> mp;
    for(i=0;i<n;i++){
        int m;
        cin>>m;
        mp.insert({i,m});
    }
    mp[2]=22;
    for(auto itr= mp.begin(); itr!= mp.end(); itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }

    cout<<" Pair "<<endl;
    pair<int,int> p{8,7};
    pair<int,int> p2;
    p2= make_pair(3,8);
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;



    return 0;


   /* vector<int>::iterator b,c;
    b=find(a.begin(),a.end(),4);
    c=find(a.begin(),a.end(),1);
    int dis= distance(b,c);
    //cout<<"4 is at "<<b<<endl;
    //cout<<"5 is at  "<<*c<<endl;
    cout<<dis;*/



    /*do{
      for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    }while(next_permutation(a.begin(),a.end()));*/

    //reverse(a.begin(),a.end());

 /*   x=*a.rbegin();
    vector<int>::iterator q;
    q= a.begin();
    cout<<"First element is  "<<*q<<endl;
    maximum= *max_element(a.begin(),a.end());
    vector <int>::iterator z,u;
    z= lower_bound(a.begin(),a.end(),4);
    u= upper_bound(a.begin(),a.end(),4);
    cout<<endl;
    cout<<x<<endl;
    cout<<"Maximum element is "<<maximum<<endl;
    cout<<" The lower and upper bound are..."<<endl;
//    cout<<z<<" "<<u<<endl;
    cout<<*z<<" "<<*u;

    //cout<<"The lower bound is at "<<z<<"And the value is  "<< *z <<" The upper bound is at "<< u <<" And the value is  "<< *u;*/




}
