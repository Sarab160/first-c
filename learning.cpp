#include<iostream>
using namespace std;
int main(){
   
//     cout<<"sarab cheema";
//     int num = 3;
//     float num2 = 3.343;
//     char name = 87;
//     int number,num4,red;
//     cin>>number;
//     cin>>num4;
//     cout<<number+num4;
//      cout<<name;
//     // return 0;
//      cout<<"**write your calculator program** \n";
//     cout<<"Enter the numbers and solve the logics \n";

//     float number1,number2;

//     cout<<" \n ENTER YOUR FIRST NUMBER :";
//     cin>>number1;

//     cout<<" \n ENTER YOUR SECOND NUMBER :";
//     cin>>number2;

//    float sum,div,sub,mult;
//    sum = number1+number2;
//    sub = number1-number2;
//    div = number1 / number2;

//    mult = number1 * number2;

//    cout<<"\n sum = "<<sum;

//    cout<<" \n divison = "<<div;

//    cout<< " \n subtraction ="<<sub;

//    cout<<"  \\n multiplication ="<<mult; 
// system("pause");


//     return 0;
// int count = 1; // Initialize a counter for even numbers
//     int sum = 0;   // Initialize the sum variable

//     while (count <= 100) {
//         if (count % 2 == 0) {
//             sum += count; // Add the even number to the sum
//         }
//         count++; // Move to the next number
//     }

//     cout << "Sum of first 100 even numbers: " << sum << endl;

    // int number, factorial = 1;
    
    // cout << "Enter a positive integer: ";
    // cin >> number;
    
    // if (number < 0) {
    //     cout << "Factorial is not defined for negative numbers." << std::endl;
    // } else {
    //     int i = 1;
    //     while (i <= number) {
    //         factorial *= i; // Multiply factorial by the current number (i)
    //         i++;
    //     }
    // //     cout << "Factorial of " << number << " is: " << factorial << endl;
    // }
    
    int numTerms;
    cout << "Enter the number of terms for the Fibonacci sequence: ";
    cin >> numTerms;

    int firstTerm = 0, secondTerm = 1, nextTerm;
    int count = 2; // Already displaying first two terms (0 and 1)
cout << "Fibonacci Sequence: " << firstTerm << " " << secondTerm << " ";
   
    while (count < numTerms) {
        nextTerm = firstTerm + secondTerm;
        cout << nextTerm << " ";
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        count++;
    }
 

    cout << endl;
   return 0;
}






