#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //  string name = "sarab";
   
    //  ofstream out("sample.txt");
    //   string name3 = "hello";
    //  ofstream name2("sample.txt");
    //  out<<name;
    //  name2<<name3;
    string getline2 ;
    ifstream get("sample.txt");
    // get>>getline;
    getline(get,getline2);
    cout<<getline2;

}
