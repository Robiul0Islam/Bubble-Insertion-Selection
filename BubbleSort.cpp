#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"Enter the array limit: ";
    cin>>n;
    cout<<"Enter the array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int temp;
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            
            if(arr[j+1]<arr[j]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}