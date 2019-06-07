#include<iostream>
#include<cstring>
using namespace std;
void generate_output(string s1, string s2){
       int size1 = s1.length();
	   for(int i =0;i<size1;i++){
		   int a= ((int)s1[i]) ^ ((int)s2[i]);
		   cout<<a;
	   }
}


int main() {
	int t;
	cin>>t;
	string s1, s2;
	for(int i=0;i<t;i++){
		cin>>s1>>s2;
		generate_output(s1,s2);
	}

}
