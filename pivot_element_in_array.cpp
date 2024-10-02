#include<iostream>
using namespace std;

void pivot_element(int *arr,int n){
  int s=0,e=n-1;
  int mid = s +(e-s)/2;
  while(s<e){
    if(arr[mid]>=arr[0])
      s=mid+1;
    else
      e=mid;
    mid = s +(e-s)/2;
  }
  cout<<"The index of the pivot element is:"<<s<<endl;
  cout<<"The pivot element if:"<<arr[s]<<endl;
}

int main(){
  int arr[5]={7,9,1,2,3};
  pivot_element(arr,5);
}
