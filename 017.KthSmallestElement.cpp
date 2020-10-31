/*Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

1 <= T <= 100
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N


Example:
Input:
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4
Output:
7
15
Explanation:
Testcase 1: 3rd smallest element in the given array is 7.
Testcase 2: 4th smallest elemets in the given array is 15.

*/


#include<iostream>
#include<algorithm>

using namespace std;

void minHeapify(int *a,int i,int &heapSize){
  int least = i;
  int left = i*2;
  int right = left+1;
	if(a[left]<a[least] && left<=heapSize){
		least = left;
  }
  else if(a[right]<a[least] && right<=heapSize){
	  least = right;
  }
  if(a[least] != a[i]){
    int temp = a[least];
    a[least] = a[i];
    a[i] = temp;
	  minHeapify(a,least,heapSize);
  }
}

void createHeap(int *a,int &heapSize){
	for(int i=heapSize;i>heapSize/2;i--){
		minHeapify(a,i,heapSize);
	}
}

int kSmallest(int *a,int k,int &heapSize){
	createHeap(a,heapSize);
	for(int i=1;i<=k;k++){
		int temp = a[1];
    		a[1] = a[heapSize-1];
    		a[--heapSize] = temp;
    		minHeapify(a,1,heapSize);  	
  	}
  	return a[1];
}

int main(){
	short int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cin>>k;
		int heapSize = n;
		cout<<kSmallest(a,k,heapSize);
	}
	return 0;
}
