#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<long long int>primefactor;
void  primeFactors(int n)
{

	while (n%2 == 0)
	{
		primefactor.push_back(2);
		n = n/2;
	}

	for (int i = 3; i <=sqrt(n); i = i+2)
	{
		while (n%i == 0)
		{
		    primefactor.push_back(i);
			n = n/i;
		}
	}
	if (n > 2)
		primefactor.push_back(n);
}

int main()
{
    long long int ele,n;
    cin>>n>>ele;
    vector<long long int>primef;
    vector<long long int>primef1;
    if(ele==n){
        cout<<0;
        exit(0);
    }
    else if((n*2)>ele){
        cout<<-1;
        exit(0);
    }
    else{
    primeFactors(n);
    primef = primefactor;
    primeFactors(ele);
    primef1 = primefactor;
    cout<<primef1.size()- primef.size()*2;
    }
    return 0;
}
