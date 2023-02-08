#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int x; //minutes before depature
	
	cin >>testCases;
	
	for(int i = 0; i < testCases;i++)
	{
	    cin >>x;
	    
	    if(x >= 30)
	        cout <<"Yes" <<endl;
	        
	    else
	        cout <<"No" <<endl;
	        
	}
	return 0;
}
