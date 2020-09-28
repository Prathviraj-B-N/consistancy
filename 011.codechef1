// https://www.codechef.com/problems/TREE2

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int solve(int* array,int N){
    int H;
    int ptr = N-2;
    int ptr2;
    if(array[N-1]!=0){
        while(array[ptr]==array[N-1] && ptr>0){
            ptr--;
        }
        if(ptr==0){
            ptr2 = 0;
        }
        else{
            ptr2=ptr-1;
        }
        
        while(array[ptr2]==array[ptr] && ptr2>0){
            ptr2--;
        }
        
        
        H = array[N-1]-array[ptr2];
        
        
        for(int i =ptr2+1;i<N;i++){
            array[i]-=H;
        }
        return  1 + solve(array,N) ;
        
    }
    else{
        return 0;
    }
}

int main()
{
    int h;
    cin>>h;
    while(h--){
        int N;
        cin>>N;
        int *arr = new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        sort(arr,arr+N);
        int min = solve(arr,N);
        cout<<min;
    }
   
   
   return 0;
}
