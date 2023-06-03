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

    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;

                
            }
            
        }

        if(arr[i]>arr[min]){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}