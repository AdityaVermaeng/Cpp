//find character lowercase or uppercase

#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter character:";
  cin>>ch;
  if(ch>='a'  && ch<='z'){
    cout<<"LowerCase\n";
  }
  else{
    cout<<"Uppercase\n";
  }
}