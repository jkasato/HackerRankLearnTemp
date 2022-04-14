//
// Created by j on 4/13/2022.
//
#include "ConditionalStatement.h"
#include <bits/stdc++.h>
using namespace std;
string ltrim(const string &);
string rtrim(const string &);
/*if a number is greater than or equal to 1 but less than or equal to 9, print
the lowercase english word for the number. Otherwise, print 'Greater than 9'*/
int ConditionalStatement(){
    string n_temp;
    getline(cin, n_temp);
    int n = stoi(ltrim(rtrim(n_temp)));
    //if a number is greater or equal to 1 but less than or equal to 9,
    //print the lowercase english word for the number
        if (n==1){printf("one");}
        else if(n==2){printf("two");}
        else if(n==3){printf("three");}
        else if(n==4){printf("four");}
        else if(n==5){printf("five");}
        else if(n==6){printf("six");}
        else if(n==7){printf("seven");}
        else if(n==8){printf("eight");}
        else if(n==9){printf("nine");}
            // if(n<=9){printf("Greater than 9");}
    //else, print 'Greater than 9'
        else{printf("Greater than 9");}
    return 0;
}

string ltrim(const string &str) {
    string s(str);
    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );
    return s;
}