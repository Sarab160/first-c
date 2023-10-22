#include<iostream>
using namespace std;
//check poistion of alphabet
int main(){
    char alphabet;
    cout<<"ENTER THE ALPHABET"<<endl;
    cin>>alphabet;
    int poistionofalphabet = alphabet -'a' +1;
    cout<<"POISTION OF ALPHABET IS : "<<poistionofalphabet<<endl;
    system("pause");
    return 0;
}