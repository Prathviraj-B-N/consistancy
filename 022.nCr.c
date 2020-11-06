#include <stdio.h>
int fact(int n){
    if (n<=1){
        return 1;
    }
    return n*fact(n-1);
}


int nCr(int n,int r){
    return (fact(n)/(fact(n-r)*fact(r)));    
}

int nCrRecursion(int n,int r){
    if(n==r || r==0 ){
        return 1;
    }
    else{
        return nCrRecursion(n-1,r-1)+nCrRecursion(n-1,r);
    }
}

int main()
{
    printf("%d",nCrRecursion(5,2));
    printf("%d",nCr(5,2));
    return 0;
}
