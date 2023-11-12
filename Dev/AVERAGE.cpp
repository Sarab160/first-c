#include<iostream>
using namespace std;
int main(){
	int number;
	int sum=0;
	float average;
	int i=0;
	do{
		cout<<"ENTER THE NUMBER OF STUDENTS"<<endl;
		cin>>number;
		sum+=number;
		i++;
	}while(i<10);
	average = sum/10;
	cout<<"AVERAGE OS STUDENTS ARE : "<<average<<endl;
	system("pause");
	return 0;
}
