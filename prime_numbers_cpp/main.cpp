#include <iostream>
using namespace std;

int main()
{
    int n, cnt=0;
    cin>>n;
    for(int i = 2; i<=n; i++){
        for(int j = 2; j<=i; j++){
            if(i%j==0){
                cnt++;
            }
        }
        if(cnt==1){
            cout<<i<<" is prime\n";
        }
        cnt=0;
    }

    return 0;
}
