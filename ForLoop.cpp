

//
// Created by j on 4/14/2022.
//

//#include "ForLoop.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    // int n=a;
    // cin>>n;
    cin>>a>>b;
    int tot=b-a;
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine","even","odd"};
    /*if the number is between 1 and 9, print the number in English
    if n is greater than 9 and even, print even
    if n is greater than 9 and odd, print odd*/

    for(int i=0;i<=tot;i++){
        // if the number is between 1 and 9, print the number in English
        if(a>=1 && a<=9){
            cout<<arr[a]<<endl;
        }
            // if n is greater than 9 and even, print even
        else if(a>9 && a%2==0){
            cout<<"even"<<endl;
        }
            // if n is greater than 9 and odd, print odd
        else if(a>9 && a%2==1){
            cout<<"odd"<<endl;
        }
        a++;
    }
    // cout<<arr[n+1];
    return 0;
}
