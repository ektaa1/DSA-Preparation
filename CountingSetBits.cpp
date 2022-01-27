#include<iostream>
using namespace std;
//Introduce variables n= any number,f= 1 and count=0. 
//We want to find the number of 1 present in the binary representaion of the number n
//for eg. n=11, its binary is 1011 (8 4 2 1 method). we can see, there are 3 set bits so answer shouldb be 3
//we will take AND of f(0001) & n(1011), if its >0 do count++;
//then keep right shifting the n by 1 until n becomes zero and keep taking the AND of n&f and do count++.
//return count;  
int main(){
    int n,count=0,f=1,a;
    cin>>n;
    while(n>0){
        a= (f & n);
        if(a>0){
            count++;
        }
        n=(n>>1);
    }
    cout<<count;
    

}