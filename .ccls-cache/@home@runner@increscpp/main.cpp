#include <iostream>
using namespace std;

int main() {
  int n;
  int cnt = 0;
  int a, b, c;
  cin>>n;
  cin>>a;
  for(int i = 0; i<n-1; i++){
    cin>>b;
    while(b<=a or b<=c){
      b++;
      cnt++;
      cout<<cnt<<endl;
    }
    c = a;
    a = b;
    continue;
  }
  // for(int i = 1; i<n; i++){
  //   while(a[i]<=a[i-1]){
  //     a[i] = a[i]+=1;
  //     cout<<i<<" "<<cnt<<" "<<a[i]<<endl;
  //     cnt++;
  //   }
  //   if(a[i]>a[i-1]){
  //     continue;
  //   }
  //   // while(a[i]<=a[i-1]){
  //   //   a[i] = a[i]+=1;
  //   //   cout<<i<<" "<<a[i]<<endl<<a[i];
  //   //   cnt++;
  //   // }
  //   // continue;
  // }
  // for(int i =0; i<n; i++){
  //   cout<<a[i]<<endl;
  // }
  cout<<cnt;
}