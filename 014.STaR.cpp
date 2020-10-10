#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n+(n-1);j++){
            if((j>=n-i) && (j<=i+n)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
}
