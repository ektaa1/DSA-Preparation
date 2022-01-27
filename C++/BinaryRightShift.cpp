#include<iostream>
using namespace std;
int main(){
    //n is the decimal number and i is the amount of shift the user want
    //for eg. n is 5 and i is 2, we write 5 in binary as 00101. 
    //After doing 2 (=i) right shift, the number will be 00001 which in decimal is 1
    //Now checking it by formula, n=n/(2^i), putting our decimal values, we will get n as 1.
    // >> This is the right shift operator
    int n,i;
    cin>>n>>i;
    cout<<"After doing binary right shift, we get"<< (n>>i) <<endl;
}