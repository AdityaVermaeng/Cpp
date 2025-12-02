#include<iostream>
using namespace std;
int main(){
  int n;
  int table=1;
  cout<<"Enter the no which u want to print the table:";
  cin>>n;
  for(int i=1; i<=10;i++){
    table=n*i;
     cout<<n <<"x" << i <<"="<< table <<endl;
  }
 
  return 0;
}