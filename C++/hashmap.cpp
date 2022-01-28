#include<unordered_map>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int len=0,s=0,e,swap;
    char name[15];
    cin.getline(name,15);
    for(int i=0;name[i]!='\0';i++){
        len++;
    }
    e=len-1;
    while(s<=e){
        swap=name[s];
        name[s]=name[e];
        name[e]=swap;
        s++;
        e--;
    }
    cout<<name;


    return 0;
}