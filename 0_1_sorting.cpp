#include<iostream>
using namespace std;

int main() {
    int arr[10] = {0, 1, 1, 0, 1, 0, 0, 1, 1, 0};
    int n = 10;
    for(int i = 0; i <n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}