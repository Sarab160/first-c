#include<iostream>
#include<math.h>
using namespace std;
//find total points
int main(){
    int thirdpointers,secondpointers;
    cout<<"ENTER SECOND POINTS"<<endl;
    cin>>secondpointers;
    cout<<"ENTER THIRD POINTERS"<<endl;
    cin>>thirdpointers;
    int totalpoints = (2* secondpointers) + (3*thirdpointers);
    cout<<"total points = "<<totalpoints<<endl;
    system("pause");
    return 0;
}