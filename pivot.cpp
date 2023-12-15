#include<iostream>
#include<vector>
using namespace std;
int search(int *arr,int size){
    int left=0;
    int right=size-1;
    int mid=left+(right-left)/2;
    while(left<=right){
        if(left==right) return mid;
        else if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else{
            if(arr[left]<=arr[mid]){
            left=mid+1;
            mid=left+(right-left)/2;
            }
            else{
                right=mid-1;
                mid=left+(right-left)/2;
            }
        }
    }
    return -1;
}
int main(){
    int arr[17]={12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,29};
    //index
    cout<<search(arr,17);
    
    return 0;
}