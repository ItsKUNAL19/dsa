#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int>arr;
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  for (int i = 0 ; i<n ; i++)
  {
    cin>>arr[i];
    arr.push_back(arr[i]);
  }

  for (int i = 0 ; i<n ; i++)
  {
    cout<<arr[i];
    arr.pop_back();
  }

  return 0;
}