//iterators
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,4,5,6};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> ::iterator it=v.begin();
    cout<<(*(it+1))<<endl;
    for(it = v.begin();it != v.end();++it){
        cout<<(*(it))<<endl;
    }
    // there is a huge diffrence betwwen it++ and it+1  int iterators
    //it++=it is move into a next iterators
    //it+1=it is move to a next location 
}