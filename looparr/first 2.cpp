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
int array2d(){
	int n,m;
	cout<<"enter the values"<<endl;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int l=0;l<m;l++){
			cin>>arr[i][l];
		}
	}
	cout<<"matrix is"<<endl;
	for(int i=0;i<n;i++){
		for(int l=0;l<m;l++){
			cout<<arr[i][l]<<" ";
		}
	cout<<endl;
}
return 0;
}
int signed2d(){
	int n,m;
	cout<<"enter values"<<endl;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int l=0;l<m;l++){
			cin>>a[i][l];
		}
	}
	int row_start=0,row_end=n-1,coloumn_start=0,coloumn_end=m-1;
	while(row_start<=row_start&&coloumn_start<=coloumn_end){
		//for row start
		for(int c=coloumn_start;c<=coloumn_end;c++){
			cout<<a[row_start][c]<<" ";
		}
		row_start++;
		
		for(int r=row_start;r<=row_end;r++){
			cout<<a[coloumn_start][r]<<" ";
		}
		coloumn_end--;
		//for row end
		for(int col=coloumn_end;col>=coloumn_start;col--){
			cout<<a[row_end][col]<<" ";
		}
		row_end--;
		// coloumn start
		for(int row=row_end;row>=row_start;row--){
			cout<<a[row][coloumn_start]<<" ";
		}
		coloumn_start++;
	}
}
int main(){
	//array();
	//array2();
//	evennumber();
   //array2d();
   signed2d();
}

