#include<iostream>
using namespace std;
int main(){
	int number;
	int fabionic=0;
	cout<<"ENTER THE NUMBER"<<endl;
	cin>>number;
	for(int i=1;i<=number;i++){
		fabionic+=i;
		
		cout<<"NUMBER IS "<<fabionic<<endl;
	}
}
