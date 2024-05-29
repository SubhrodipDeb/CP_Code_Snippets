//Bit manipulation Lecture 1
 

 //function to convert a decimal to a binary

#include<bits/stdc++.h>
using namespace std;

 string decimalToBinary(int n){
     string ans="";
     while(n>0){
     	if(n%2==1){
     		ans+='1';
     	}
     	else ans+='0';
     	n/=2;
     }
     reverse(ans.begin(),ans.end());
     return ans;
 }  

// function to convert a binary to a decimal

int binaryToDecimal(string s){
	int n=s.size();
	int ans=0;
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			ans+=(1<<(n-i-1));
		}
	}
	return ans;
}

 int main(){
 	int n;
 	cin>>n;
 	string s=decimalToBinary(n);
 	int ans=binaryToDecimal(s);
 	cout<<s<<endl;
 	cout<<ans<<endl;
 }  