#include<iostream>
using namespace std;
int main(){
    cout<<"Enter teh length in feet"<<endl;
    float length,width;
    cin>>width;
    cout<<"Enter width in feets"<<endl;
    cin>>width;
    float pricepersq;
    cout<<"Enter the price of grass per square feet"<<endl;
    cin>>pricepersq;
    double totalprice = length * width *pricepersq;
    cout<<"total price is = "<<totalprice<<endl;
    system("pause");
}