#include<iostream>
using namespace std;
int main(){
    cout<<"==========================================="<<endl;
    cout<<"|  cofee size and prive calculator       |"<<endl;
    cout<<"==========================================="<<endl;
    string name;
    cin>>name;
    cout<<"| Enter your Name:                      |"<<endl;
    cout<<"| > "<<name<<"                          |"<<endl;
    char namecoffesize;  
    cout<<"| select coffe size(smaill,medium,or large): |"<<endl;
      cin>>namecoffesize;
    cout<<"| > "<<namecoffesize<<"                    |"<<endl;
    switch (namecoffesize){
        case 's':
        // string fullnameofsize = "small";
        // float price = 2.00;
        cout<<"| Hello "<<name<<",                      |"<<endl;
        cout<<"| you have ordered a small size coffe    |"<<endl;
        cout<<"| your total is $2.00                     |"<<endl;
        break;
        case 'm':
        //  string fullnameofsize = "medium";
        // float price = 2.50;
        cout<<"| Hello "<<name<<",                      |"<<endl;
        cout<<"| you have ordered a medium size coffe    |"<<endl;
        cout<<"| your total is $2.50                     |"<<endl;
        break;
        case 'l':
        // string fullnameofsize = "large";
        // float price = 3.00;
        cout<<"| Hello "<<name<<",                      |"<<endl;
        cout<<"| you have ordered a large size coffe    |"<<endl;
        cout<<"| your total is $""                     |"<<endl;
        break;
    };
    return 0;

}