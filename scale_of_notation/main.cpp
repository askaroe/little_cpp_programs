#include <iostream>
#include <cstdlib>
#include <map>
//cstdlib ---> itoa(int value, char *str, int base(система счисления))
using namespace std;

int main()
{
    map <int, string> s;
    s[2] = "binary: ";
    s[3] = "number system with base 3 ";
    s[4] = "number system with base 4 ";
    s[5] = "number system with base 5 ";
    s[6] = "number system with base 6 ";
    s[7] = "number system with base 7 ";
    s[8] = "number system with base 8 ";
    s[9] = "number system with base 9 ";
    s[10] = "decimal ";
    s[16] = "hexadimal ";
    int n, ns;
    char after[33];
    cout<<"Input your number: ";
    cin>>n;
    cout<<"Input the number system you need: ";
    cin>>ns;
    itoa(n, after, ns);
    for(auto now: s){
        if(ns==now.first){
             cout<<"Your number in "<< now.second <<"is: "<<after;
        }
    }

    return 0;
}
