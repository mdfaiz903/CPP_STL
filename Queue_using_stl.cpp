#include<bits/stdc++.h>
#include<queue>
using namespace std;
//stl queue calling syntex
// queue data_type Name_of_uqeue int main(){
    queue <int> q;
    q.push(1);
    q.push(10);
    q.push(3);
    q.push(4);
    //q.pop();
    while(!q.empty()){
        int x =q.front();
        cout<<x<<" ";
        q.pop();
    }
    // int x = q.front();
    // cout<<x<<endl;

    return 0;
}
