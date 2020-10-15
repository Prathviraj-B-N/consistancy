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


#include<iostream.h>
#include<algorithm>

Using namespace std;

Void minHeapify(int &a[]){
	Int least = a[i];
  Int left = i/2;
  Int right = left+1;
	if(a[left]<least && left<a.length()){
		least = a[left];
  }
  Else if(a[right]<least && right< a.length){
	  Least = a[right];
  }
  if(least ! = a[i]){
    Int temp = a[least];
    A[least] = a[i];
    a[i] = temp;
	  minHeapify(a[least]);
  }
}

void createHeap(int &a[]){
	for(int i=a.length();i>n/2;i++){
		minHeapify(a[i]);
	}
}

Int kSmallest(int a[],int k){
	Int heapSize =a.length();
	createHeap(a);
	for(i=0;i<k;k++){
		Int temp = a[1];
    A[1] = a[a.length()-1];
    a[heapSize--] = temp;
    minHeapify(a[1]);  	
  }
  Return a[1];
}

int main(){
	Short int T;
	cin>>T;
	while(T--)
  {
	  Int n;
    Int a[n];
	  for(int i=0;i<n;i++){
		  cin>>a[i];
    }
  }
  cout<<kSmallest(a[i],k);
}
