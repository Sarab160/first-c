#include<iostream>
#include<iomanip>
using namespace std; 
int main(){
    // float num = 6.34;
    // int num2 = static_cast <int>(num);
    // cout<<"the value of num = "<<num2<<endl;
    // float num1 ;
    // float num3 = 876.34;
    // num1=int(num3);
    // cout<<"value of num"<<num1<<endl;
    // float number = 23.65;
    // float number2 ;
    // number2=number;
    // cout<<"the value of number 2 = "<<number2<<endl;
    // int number4 = 23;
    // char number5 = static_cast<char>(number4);
    // cout<<"the new value is = "<<number5;
// 
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cout<<" outer value "<<i<<" inner value "<<j<<endl;
//     }
//     cout<<endl;
// }

   
   int num=5;
   cout<<setw(num)<<endl;

    const int SIZE = 10;
    int numbers[SIZE];
    int sum = 0;
    int product = 1;

    // Taking 10 integer inputs from the user
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
        product *= numbers[i];
    }

    // Calculating average
    double average = static_cast<double>(sum) / SIZE;

    // Displaying the array
    cout << "Entered numbers: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }

    // Displaying results
    cout << "\nSum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;

    


    // cout << endl;

    // for (int i = 1; i <= n; ++i) {
    //     for (int j = 1; j <= n; ++j) {
    //         int num = pow(i + (j - 1) * n, 2);
    //         cout << setw(6) << num;
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    // for (int i = 1; i <= n; ++i) {
    //     for (int j = 1; j <= n; ++j) {
    //         int num = pow(i + (j - 1) * n, 3);
    //         cout << setw(8) << num;
    //     }
    //     cout << endl;
    // }

    return 0;
}




