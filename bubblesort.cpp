#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[] , int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
}
void swap(int *x , int *y){
    int temp=*x;
    *x=*y;
    *y=temp;

}
 int main(){
    int arr[]={4,7,10,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    //cout<<n<<endl;

    bubblesort(arr,n);
    print(arr,n);

    return 0;
 }