#include <iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
    int temp;
    if(b>a){
        temp = a;
        a = b;
        b = temp;
        a=a%b;
        if(a==0){
            return b;
        }

    }
    else{
        a=a%b;
        if(a==0){
            return b;
        }
    }
    if(a!=0 && b!=0) gcd(a, b);
    else return a+b;
}

int main() {
    unsigned a, b;
    cin>>a>>b;
    cout<<gcd(a, b);
  return 0;
}
