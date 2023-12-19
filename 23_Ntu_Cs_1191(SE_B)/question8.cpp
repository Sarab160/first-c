#include<iostream>

using namespace std;

int main(){
	        cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
            cout<<"23_NTU_CS_1191"<<endl;
	
	int Array[10] = {0};
	int OriginalArray[10] = {0};
	int InitialPoint = 0;
	int FinalPoint = 0;
		
	cout << "ENTER THE INTEGERS OF ARRAY ";
	
	for(int i = 0; i < 10; ++i){
		cin >> Array[i];
	}
	
	for(int i = 0; i < 10; ++i){
		OriginalArray[i] = Array[i];
	}
	for(int i = 1; i < 10; ++i){
		for(int j = 0; j < 10-i; ++j){
			if(Array[j] > Array[j+1]){
				Array[j] = Array[j] + Array[j + 1];
				Array[j + 1] = Array[j] - Array[j + 1];
				Array[j] = Array[j] - Array[j + 1];
			}
		}
	}
	
	do{
		cout << "ENTER THE INITAL RANGE " << endl;
		cin >> InitialPoint;
	
		while(InitialPoint < Array[0] || InitialPoint > Array[9]){
			cout << "ENTER THE INITAL POINT RANGE " << endl;
			cin >> InitialPoint;
        }
		cout << "Please Enter the Final Point of Range: " << endl;
		cin >> FinalPoint;
		while(FinalPoint < Array[0] || FinalPoint > Array[9]){
			cout << "Please Enter the Final Point of Range: " << endl;
			cin >> FinalPoint;
		}
	}while(InitialPoint >= FinalPoint);
	cout << " Array is: " << endl;
	
	for(int i = 0; i < 10; ++i)
	{
		cout << OriginalArray[i] << " ";
	}
	cout << endl << endl;
			
	cout << "The Values in Range are: " << endl;
	for(int i = 0; i < 10; ++i){
		if(OriginalArray[i] >= InitialPoint && OriginalArray[i] <= FinalPoint){
			cout << Array[i] << " ";
		}
	}
	system("pause");
	return 0;
}
