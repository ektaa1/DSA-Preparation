#include<iostream>
using namespace std;
int main(){
    //In this we will check whether ith no. of bit in the binary system of numbere n is one or zero.
    //If its zero, the whole answer will return false otherwise true
    //for example n=10, i=3. in binary, 10 is written as 1010 (using 16 8 4 2 1 method)
    //we need to check if ith is set or not, here it is set so return true.
    // introduce a variable f and assign it 1, nand left shift it for i times
    // 0001 << 3 = 1000 . Now take the AND operation of f and n
    // 1010 & 1000 = 1000. Hence, it is true, The ith bit is set
    int n,i,f=1;
    int ans;
    cin>>n>>i;
    f=f<<i;
    ans= f & n;
    if(ans==0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }

}