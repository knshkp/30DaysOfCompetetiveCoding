//iterators
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> v={{1,2},{2,3},{3,4},{4,5}};

    vector<pair<int,int>> ::iterator it=v.begin();
    
    for(it = v.begin();it != v.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for(it = v.begin();it != v.end();++it){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    //(*it).first<==>(it->first)
}