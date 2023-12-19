#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
     cout<<"23_NTU_CS_1191"<<endl;
	
	int Array[3][3] = {{1, 2, 3},
					   {4, 5, 6},
					   {7, 8, 9}};
	int Row = 0;
	int Column = 0;
	int Smallest_ElementRow = 0;
	int Largest_ElementColumn = 0;
	
	cout << "ENTER THE ROW NUMBER ";
	cin >> Row;
	
	while(Row < 0 || Row >= 3)
	{
		cout << "ENTER THE ROW NUMBER ";
		cin >> Row;
	}
	
	cout << "ENTER THE COLOUMN NUMBER ";
	cin >> Column;
	
	while(Column < 0 || Column >= 3)
	{
		cout << "ENTER THE COLOUMN NUMBER ";
		cin >> Column;
	}
	
	for(int j = 0; j < 3; ++j){
		if(Array[Row][j] > Array[Row][Largest_ElementColumn])
		{
			Largest_ElementColumn = j; 
		}
	}
	for(int i = 0; i < 3; ++i)
	{
		if(Array[i][Column] < Array[Smallest_ElementRow][Column])
		{
			Smallest_ElementRow = i; 
		}
	}			   
	
	cout << "ARRAY IS " << endl;
	
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << setw(5) << Array[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "The Largest Element in Row " << Row << " is: " << Array[Row][Largest_ElementColumn] << endl;
	cout << "The Smallest Element in Column " << Column << " is: " << Array[Smallest_ElementRow][Column] << endl;
    system("pause");
	return 0;
}
