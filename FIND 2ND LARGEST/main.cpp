#include<iostream>
using namespace std;

int main(){
  int maxSize;
  cout << "Enter the size of the array: ";
  cin >> maxSize;
  int arr[maxSize];
  cout << "Enter " << maxSize << " elements for the array:" << endl;
  for (int i = 0; i < maxSize; ++i) {
      cout << "Enter element " << i + 1 << ": ";
      cin >> arr[i];
  }
  int largest = arr[0];
  int secondl ;
  int n = sizeof(arr) / sizeof(arr[0]);
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      secondl = largest;
      largest = arr[i];
    }
  }
  for(int i=0;i<n;i++){
    if(arr[i]>secondl && arr[i]!=largest){
      secondl = arr[i];
    }  
  }
  cout<<"Second largest element in the array : "<<secondl;

}