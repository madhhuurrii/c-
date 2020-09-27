#include <iostream>
#include<cmath>
using namespace std;
#include<iostream>
using namespace std;
int main() {
	int t,n,x,A[20],i,j,B=0,C=0;
	cin>>t;
	for( i=0;i<t;i++)
	{ cin>>n;
	 cin>>x;
	 for(j=0;j<n;j++)
	 { cin>>A[j];
	  B=A[j]^x;
	   C=C+B;
	   B=0;
	   
	 }
	 cout<<C;
	   }
	return 0;
}
