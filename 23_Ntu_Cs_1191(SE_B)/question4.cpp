#include<iostream>

using namespace std;

int main()
{
	cout << "MUHAMMAD SARAB RAFIQUE" << endl;
	cout << "23_NTU_CS_1191" << endl;
	int Array[10] = {0};
	int OriginalArray[10] = {0};
	int Size = 0;
	int third_index = 2;
	int second_smallindex = 0;
	cout << "ENTER THE INTEGERS OF ARRAY "<<endl;
	
	for(int i = 0; i < 10; ++i){
		cin >> Array[i];
	}
	
	for(int i = 0; i < 10; ++i){
		OriginalArray[i] = Array[i];
	}
	
	for(int i = 1; i < 10; ++i){
		for(int j = 0; j < 10-i; ++j){
			if(Array[j] < Array[j+1]){
				Array[j] = Array[j] + Array[j + 1];
				Array[j + 1] = Array[j] - Array[j + 1];
				Array[j] = Array[j] - Array[j + 1];
			}
		}
	}

	
	int Index = 0;
	for(int i = 1; i < 10; ++i){
		if(Array[Index] != Array[i]){
			Index++;
		}
		
		Array[Index] = Array[i];
	}
	Size = Index + 1;
	second_smallindex = Size - 2;
	for(int i = 0; i < 10; ++i){
		if(OriginalArray[i] == Array[third_index]){
			third_index = i;
			break;
		}
	}
	
	for(int i = 0; i < 10; ++i){
		if(OriginalArray[i] == Array[second_smallindex]){
			second_smallindex = i;
			break;
		}
	}
			
	cout << "The Array is ";
	
	for(int i = 0; i < 10; ++i){
		cout << OriginalArray[i] << " ";
	}
	
	cout << endl << endl;	


	if(Size > 2)
	{
		cout << "Third Largest Element is " << OriginalArray[third_index] << " and is at Index " << third_index << "." << endl;	
	}
	else
	{
		cout << "THIRD LARGE ELEMENT ARE NOT PRESENT IN ARRAY" << endl;
	}
	
	if(Size > 1){
		cout << "Second Smallest Element is " << OriginalArray[second_smallindex] << " and is at Index " << second_smallindex << "." << endl;	
	}
	else{
		cout << "Second Smallest Element does not exist." << endl;
	}
	system("pause");
	return 0;
}

