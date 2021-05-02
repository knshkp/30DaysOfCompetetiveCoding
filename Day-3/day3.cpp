#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v){
    cout<<"size is"<<" "<<v.size()<<" ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
int main(){
    vector<int> v(10,3);
    v.push_back(7);
    printVec(v);
    v.pop_back();
    printVec(v);
    vector<int> v2=v;
    printVec(v2);
    v2.push_back(5);
    printVec(v2);
    printVec(v);


}