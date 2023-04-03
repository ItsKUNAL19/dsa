// square root


#include <iostream>
using namespace std;

int squareroot(int n)
{
  int s = 0;
  int e = n;
  int mid = s+(e-s)/2;
  int c;
  while(s<=e)
  {
    if(mid*mid == n){
      return mid;

    }
    if(mid*mid < n){
      c=mid;
      s = mid+1;
    }
    else
    {
      e=mid-1;
    }
    mid = s+(e-s)/2;
  }
  return c;
}

int main() {
  int n;
  //cout<<"enter the number"<<endl;
  cin>>n;
  int ans = squareroot(n);
  //cout<<ans;

  //cout<<"Enter the no of points "<<endl;
  int k;
  cin>>k;
  float finalans = ans;
  float step = 0.1;
  for(int i=0 ; i<k ; i++)
  {
    for(double j=ans ; j*j<=n ; j+=step)
    {
      finalans=j;
    }
    step = step/10;
  }
  cout<<finalans;
  return 0;
}