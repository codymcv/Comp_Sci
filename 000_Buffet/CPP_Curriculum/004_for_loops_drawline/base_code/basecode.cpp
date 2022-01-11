// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char sym;
	cout<<"please enter a symbol: ";
	cin>>sym;
	
	int x;
	cout<<"please enter line length: ";
	cin>>x;
	
	cout<<"horizontal or vertical(h or v): ";
	
	char hv;
	cin>>hv;
	
	
	
	if(hv == 'h'){
		for(int y = 0;y<x;y++){
			cout<<sym;
		}
	}
	
	if(hv == 'v'){
		for(int y = 0;y<x;y++){
			cout<<sym<<endl;
		}
	}
	
	}
	


