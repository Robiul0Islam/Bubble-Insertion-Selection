#include<iostream>
using namespace std;
int main(){

    vector<int> arr(5);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    arr.push_back(100);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }

}