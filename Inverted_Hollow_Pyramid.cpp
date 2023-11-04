Fisrt line of the input is an integer that refers to the number of lines
Output the below pattern

input:4

output:
*******
b*iii*b
bb*i*bb
bbb*bbb

Program:

#include<iostream>
#include<vector>
using namespace std;

int main(){

int n,k=2;
int start=0;
cin>>n;
int len=(n*2)-1;
int end=len-1;
for(int i=0;i<n;i++){
  for(int j=0;j<len;j++){
    if(i==0){
       cout<<"*";
    }
    else if(i==n-1){
        if(j==len/2){
              cout<<"*";
        }
        else{
              cout<<"b";
        }
    }
    else{
       if(j==start+i || j==end-i){
          cout<<"*";
       }
       else if(j>=(start+k)-1 && j<=(end-k)+1){
          cout<<"i";
        }   
       else{
          cout<<"i";
       }
    }
  }
cout<<endl;
k++;
}
}

