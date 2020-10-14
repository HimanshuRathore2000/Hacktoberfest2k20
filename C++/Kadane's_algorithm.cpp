#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{	int maxhere=0,maxall;
	maxall=-1000001;
	    int n;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        
	        cin>>ar[i];
	        maxhere=maxhere+ar[i];
	        if(maxhere>=maxall)
	        maxall=maxhere;
	        if (maxhere<0)
	        maxhere=0;
	      
	        
	        
	    }
	    
	    
	   cout<<maxall<<'\n'; 
	    
	    
	}
	return 0;
}
