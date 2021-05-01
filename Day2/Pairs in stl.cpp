#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair-it is a class which combine two thing or concatenate two thing
    pair <int,string> p;
    //initialissation of a pair
    p={2,"abc"};
    pair<int,string> p1;
    p1=make_pair(2,"abc");
    // when we can not intialaze by the refrence value in pair so it cannot change its value of p when we change it
    pair<int,string> &p2=p;

    cout<<p.first<<p.second;
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<p_array[i].second<<endl;
    }
    //if we taking input by a pairs
    pair<int,string> a;
    cin>>a.first;
    cout<<a.first;
}