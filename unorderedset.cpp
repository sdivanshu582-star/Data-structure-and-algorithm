#include <unordered_set>
#include<iostream>
int main(){
unordered_set<int> set1;

set1.insert(10);
set1.insert(20);
set1.insert(30);

for (auto x:set1){
    cout<<x<<" ";
}
}