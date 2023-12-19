#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	  cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
     cout<<"23_NTU_CS_1191"<<endl;
	int arr1[3][3] = {{1, 2, 3},
					   {4, 5, 6},
					   {7, 8, 9}};
	
	int arr2[3][3] = {{3, 4, 5},
					   {3, 4, 5},
					   {3, 4, 5}};
					   
	int arr3[3][3];
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; j++){
			if(arr1[i][j] % 2 == 0 && arr2[i][j] % 2 == 0)
			{
				arr3[i][j] = arr1[i][j] + arr2[i][j];
			}
			else
			{
				arr3[i][j] = arr1[i][j] * arr2[i][j];
			}
		}
	}				   
	cout << endl << "The First Array is " << endl;
	
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; j++)
		{
			cout << setw(5) << arr1[i][j] << " ";
		}
		
		cout << endl;
	}
	
	cout << endl << "The Second Array is " << endl;
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << setw(5) << arr2[i][j] << " ";
		}
		
		cout << endl;
	}
	
	cout << endl << "The Third Array is " << endl;
	
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << setw(5) << arr3[i][j] << " ";
		}
		
		cout << endl;
	}
	system("pause");
	return 0;
}
