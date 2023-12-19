#include<iostream>
#include<string>

using namespace std;

int main()
{
	    cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
        cout<<"23_NTU_CS_1191"<<endl;
	
	string data = "\0";
	int Length = 0;
	bool Palindrome = true;
	
	cout << "ENTER THE STRING DATA " << endl;
	getline(cin,data);
	
	Length = data.length();
	
	for(int i = 0; i < Length; ++i){
		if(data[i] >= 65 && data[i] <= 90)
		{
			data[i] += 32;
		}
	}
	
	cout << endl << data ;
    cout<<endl<<endl;
	for(int i = 0, j = Length - 1; i < Length/2; ++i, --j)
	{
		if(data[i] != data[j])
		{
			Palindrome = false;
			break;
		}
	}
	
	if(Palindrome)
	{
		cout << "IT IS PLAINDROME DATA" << endl;
	}
	else
	{
		cout << "IT IS NOT PLAINDROME DATA" << endl;
	}
	system("pause");
	return 0;
}
