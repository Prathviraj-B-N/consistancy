//To Learn about static variables 
#include <iostream>

using namespace std;
double ts(int x,int n){
    static double x_power=1,factorial=1;
    if(n==0){
        return 1;
    }
    double res = ts(x,n-1);
    x_power*=x;
    factorial*=n;
    res+=x_power/factorial;
    return res;
    
}
int main()
{
    cout<<"Taylor series : e^x = 1 + x/1! + (x^2)/2! + (x^3)/3! + ... + (x^n)/n!\n";
    cout<<"Enter x:";
    int x;
    cin>>x;
    cout<<"Enter n:";
    int n;
    cin>>n;
    
    cout<<"Res:"<<ts(x,n);

    return 0;
}
