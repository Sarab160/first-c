#include<iostream>
using namespace std;
int arr(){
	int arr[2][4];
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cout<<"enter the integer"<<" ";
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<"\t";
			cout<<endl;
			
		}
	}
	return 0;
}
//asdfuahifuaiufgiuasgiuasgiagus

int arr2(){
	int arr[2][4]= {{11,23,34,3},{32,34,23,45}};
	int max,min;
	max=min=arr[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
			if(arr[i][j]<min){
				min=arr[i][j];
			}
		}
	}
	cout<<"max number: "<<max<<" min number : "<<min<<endl;
}
int main(){
//arr2();
arr();
}

