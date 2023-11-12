#include<iostream>
using namespace std;
int main(){//find male and female in class of 10 students
	char gender = '/0';
	int male;
	int female;
	int i=0;
	do{
		cout<<"ENTER THE GENDER"<<endl;
		cin>>gender;
		while(gender!='m'&&gender!='M'&&gender!='F'&&gender!='f'){
			if(male=='m'||male=='M'){
				male++;
			}
			else{
				female++;
			}
			i++;
		}
		
	}while(i<10);
	cout<<"MALE IN CLASS : "<<male<<endl;
	cout<<"FEMALE IN CLASS : "<<female<<endl;
	system("pause");
	return 0;
}
