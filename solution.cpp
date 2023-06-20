#include <iostream>
using namespace std;

int length(int n){
    int f,l;   //f is for the first part and l for the last part after alocating the mid position to  the firstt soldier
    if(n==0){
        return 0;
    }
    if(n%2==1){
        f=n/2;
        l=n/2;
    }else{
        f=n/2-1;
        l=n/2;
    }
    return ((n+1)+length(f)+length(l));
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    for(int i=0;i<n;i++){
	        
	    }
	    
	    //finding the minimum length of the wire(achieved when we start from the mid position and then doing the same to the remaining recursively)
	    int minlen=length(n);
	    
	    //finding the max length of the wire used by the generalization and finding the formula for it and then (it is achieved when we start from the start position and then allocating the next position)
	    int maxlen=(n*(n+3))/2;
	    
	    if(m<minlen){
	        cout<<"-1"<<endl;
	    }else if(m>maxlen){
	        cout<<m-maxlen<<endl;
	    }else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
