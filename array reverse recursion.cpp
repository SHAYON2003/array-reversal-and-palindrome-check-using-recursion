#include <iostream>
using namespace std;

void f(int arr[], int l, int r, int n){
     if(l>=r) return;
    
    swap(arr[l],arr[r]);

  f(arr,l+1,r-1, n);
    
}

int main(){
     int arr[] = {1,2,3,4,5};
     int n = 5;
     f(arr,0,n-1,n);
    
    for(int i = 0;i<n;i++){
         cout<<arr[i]<<" ";
    }

    return 0;
    
}