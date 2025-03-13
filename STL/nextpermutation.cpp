#include<bits/stdc++.h>
using namespace std;

int main()
{ // for numbers 
  int arr[3] = {1,2,3};
  do{
      for(int i =0;i<3;i++){
          cout<<arr[i]<<",";
      }
      cout<<"\n";
  }while(next_permutation(arr,arr+3));
    
//for strings  
string str = "abc";
  do{
      for(int i =0;i<3;i++){
          cout<<str[i]<<",";
      }
      cout<<"\n";
  }while(next_permutation(str.begin(),str.end()));
    return 0;
}