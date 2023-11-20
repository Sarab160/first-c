#include<iostream>
#include<cmath>
using namespace std;

int array(){
int item[5]; //Declare an array item of five components
int sum;
int counter;
cout << "Enter five numbers: ";
sum = 0;
for (counter = 0; counter < 5; counter++)
{
cin >> item[counter];
sum = sum + item[counter];
}
cout << endl;
cout << "The sum of the numbers is: " << sum << endl;
cout << "The numbers in reverse order are: ";
//Print the numbers in reverse order.
for (counter = 4; counter >= 0; counter--)
cout << item[counter] << " ";
cout << endl;
return 0;

}
int array2(){
	int number[] = {2,3,4,5};
	for(int i=3;i>=0;i--){
		cout<<number[i];
	}
}
int evennumber(){
	int arraynumber[10]={1,2,3,4,5,6,7,8,9,10};
	
	int number;
	int odd;
	for(int i=0;i<=9;i++){
		if(arraynumber[i]%2==0){
			number++;
		}
	
	}
	cout<<"even number are"<<number<<endl;
	//cout<<"odd number are"<<odd<<endl;
	return 0;
}
int main(){
	//array();
	//array2();
	evennumber();
}

