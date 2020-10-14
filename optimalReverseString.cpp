//Reverse a String
//https://practice.geeksforgeeks.org/problems/reverse-the-string/0


#include<iostream>
using namespace std;
int main()
 {
	//code
	string s;
	int T;
	cin>>T;
	while(T--){
	    cin>>s;
	    int start=0;
	    int end=s.length()-1;
	    while(start<=end){
	       char temp = s[start];
	       s[start]=s[end];
	       s[end]=temp;
	       start+=1;
	       end-=1;
	   }
	    cout<<s<<endl;
	}
	return 0;
}
