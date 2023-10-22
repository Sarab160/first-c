#include<iostream>
#include<cmath>
using namespace std;
//check case of letters
int main(){
    char alphabet;
    cout<<"ENTER ALPHABET"<<endl;
    cin>>alphabet;
    if(alphabet>=65&&alphabet<=90){
        cout<<alphabet<<" is a capital alphanet"<<endl;
    }
    else if(alphabet>=97&&alphabet<=122){
        cout<<alphabet<<" is a samll alphabet"<<endl;
    }
    else{
        cout<<"invalid alphabet"<<endl;
    }
    system("pause");
    return 0 ;
}