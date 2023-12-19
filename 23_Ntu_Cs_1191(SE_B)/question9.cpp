#include<iostream>
#include<string>

using namespace std;

int main()
{
	         cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
            cout<<"23_NTU_CS_1191"<<endl;
	
	string data = "\0";
	int Length = 0;
	
	cout << "ENTER THE DATA " << endl;
	getline(cin,data);
	
	cout << endl << "Before Changes The String is " << endl;
	cout << data << endl;
	Length = data.length();
	
	for(int i = 0; i < Length; ++i){
		if(data[i] >= 65 && data[i] <= 90){
			data[i] += 32;
		}
		else if(data[i] >= 97 && data[i] <= 122){
			data[i] -= 32;
		}
		else
		{
			data[i] = data[i];
		}
	}
	
	cout << endl << "After Changes, The String is " << endl;
	cout << data;
	system("pause");
	return 0;
}
