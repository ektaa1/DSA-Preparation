#include<iostream>
using namespace std;
int main(){
    //n is the decimal number and i is the amount of shift the user want
    //for eg. n is 5 and i is 2, we write 5 in binary as 00101. 
    //After doing 2 (=i) left shift, the number will be 10100 which in decimal is 20
    //Now checking it by formula, n=n*(2^i), putting our decimal values, we will get n as 20.
    int n,i;
    cin>>n>>i;
    cout<<"After doing binary left shift, we get "<< (n<<i) <<endl;
}
