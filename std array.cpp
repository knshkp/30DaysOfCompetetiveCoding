// TOPIC std::array
// Syntax: std::array<T,N>array;
//NOTICE:
//1. std:: array is a conatainer that encapsulate fuxed size arrays
// 2. array size is needed at compile time
// 3. Assign by value is actual by value
// 4. Access by elements
//    a. at()
//    b. []
//    c. front()
//    d. back()
//    e. data()
#include <iostream>
#include <array>
using namespace std;
int main(){
    std::array<int,5> myarray;
    std::array<int,5>myarray={1,2,3,4,5};
    std::array<int,5>myarray1={1,2,3,4,5};
    cout<<myarray.at(3);
} 