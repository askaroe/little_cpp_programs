#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100];
    cin>>n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            for(int b = 0; b<=a[i][j]; b++){
                if(a[i][j]==b*b){
                    a[i][j]=b;
                }
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
