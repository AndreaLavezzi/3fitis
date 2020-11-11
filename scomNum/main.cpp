#include <iostream>
using namespace std;

main() {
	int n;
	
	string bin;
	bin="";
	
	cout<<"Inserire numero: ";
	cin>>n;
	
	while (n>0) {
		if (n%2==0)
			bin='0'+bin;
		else
			bin='1'+bin;
		n=n/2;
	}
	
	cout<<bin;	
		
}
