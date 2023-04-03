//pivot element


#include <iostream>
#include<vector>
using namespace std;

// int pivot(vector<int > arr)
int pivot(int arr[] ,int size)
{
  int s=0;
  //int e= arr.size()-1;
  int e = size-1;
  int mid = s+(e-s)/2;
  while (s<=e)
  {
    if(arr[mid+1]!=0&&arr[mid]>arr[mid+1])
    {
      return mid;
    }
    if(arr[mid-1]!=0&&arr[mid]<arr[mid-1])
    {
      return mid-1;
    }
     if(arr[s]>arr[mid])
    {
      e=mid-1;
    }
    else
    {
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return -1;
}

int main() {
  // vector<int>arr{8,9,10,12,2,3,4,6,7};
  int arr[]={8,9,10,12,23,2,3,4,6,7};
  int size = 9;
  int ans= pivot(arr , size);
  cout<<arr[ans];
  return 0;
}