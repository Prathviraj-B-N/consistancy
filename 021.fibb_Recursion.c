
#include <stdio.h>
#include<stdlib.h>

void init_dp(int n,int *dp){
    for(int i=0;i<=n;i++){
        dp[i] = -1;
    }
}

void print_res(int n,int *dp){
    printf("Fibbonaci Series : ");
    for(int i =1;i<=n-1;i++){
        printf("%d + ",dp[i]);
    }
    printf("%d .",dp[n]);
}

int generate_fib(int n,int *dp){
    if(n<=1){
        dp[n]=n;
        return n;
    }
    else{
        if(dp[n]==-1){
            dp[n] = generate_fib(n-2,dp)+generate_fib(n-1,dp);
            return dp[n];
        }
        else{
            return dp[n];
        }
    }
}


int main()
{
    int n;
    
    printf("Fibbonaci series :\nEnter n: ");
    scanf("%d",&n);
    int *dp = (int *)malloc(sizeof(int)*(n+1));

    init_dp(n,dp);
    dp[n] = generate_fib(n,dp);
    print_res(n,dp);
    
    return 0;
}
