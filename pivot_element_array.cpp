#include<iostream>
using namespace std;


int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[0]<=arr[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }cout<<s;

}


int main(){
    int arr[]={4,5,6,1,2,3};
    pivot(arr,6);
    return 0;
}