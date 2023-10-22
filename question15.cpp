#include<iostream>
#include<cmath>
using namespace std;
//perimeter of rectangle
//formula is 2(l+w)
int main(){
    float length,width,perimeter;
    cout<<"ENTER THE LENGTH"<<endl;
    cin>>length;
    cout<<"ENTER THE WIDTH "<<endl;
    cin>>width;
    cout<<"perimeter of rectangle is "<<endl;
    perimeter = (length + width);
    perimeter = 2 * perimeter;
    cout<<perimeter<<endl;
    system("pause");
    return 0;
}