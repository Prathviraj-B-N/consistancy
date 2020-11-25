/******************************************************************************
Given an array with all elements 0 ,apply following range query on it .
input : n is length of array
        q is number of queries
        l if starting index r is ending index
        
        increment number between l and r by 1
        
        
        
        ip: 
        
        10
        5
        0 5
        5 9
        1 3
        5 6
        0 5
        
        op:2 3 3 3 2 4 2 1 1 1 
        
*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Although we can do brute force using for loop with O(qn) it will give time out err
    int n,q;
    //arr length
    cin>>n;
    
    vector<int> arr(n+1,0);
    
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
    }
    int temp=0;
    for(int i=0;i<arr.size()-1;i++){
        temp += arr[i];
        cout<<temp<<" ";
    }
    
    return 0;
}
