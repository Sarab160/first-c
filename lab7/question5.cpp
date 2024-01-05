#include<iostream>
using namespace std;
int main(){
  int rows=4 ,cols =5;
  int number[rows][cols];
  for (int i=0 ; i<rows ; i++)
  {
    for(int j=0 ; j<cols ; j++)
    {
    cin>>number[i][j];
    }
  }
    for (int i=0 ; i<rows ; i++)
  {
    for(int j=0 ; j<cols ; j++)
    {
    cout<<number[i][j]<<"\t";
    }
  }
  return 0;
}

