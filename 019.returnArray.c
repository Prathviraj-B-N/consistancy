#include <stdio.h>
#include <stdlib.h>

int * create(int n){
    int *p = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        p[i] = i+1;
    }
    return p;
}

int main()
{
    int n;
    scanf("%d",&n);
    int *A = create(n);
    for(int i=0;i<n;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}
