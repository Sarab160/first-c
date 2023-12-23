#include<iostream>
#include<ctime>
using namespace std;
// Create a C++ program with a function named getCurrentDateTime that retrieves the current date and time. 
// The function should display the current date and time in the main program.
int current(){
    time_t sec = time(0);
    string date = ctime(&sec);
  cout<<date;
    return 0 ;

}
int main(){
cout<<"the current daye and time is : "<< endl;
current();
}