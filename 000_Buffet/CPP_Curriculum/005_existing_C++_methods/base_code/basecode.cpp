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
	
	cout<<"horizontal, vertical or diagonal(h, v, or d): ";
	
	char hv;
	cin>>hv;
	
	
	
	if(hv == 'h'){
		for(int h = 0;h<x;h++){
			cout<<sym;
		}
	}
	
	if(hv == 'v'){
		for(int v = 0;v<x;v++){
			cout<<sym<<endl;
		}
	}
	
	if(hv == 'd'){
		for(int d = 1;d<=x;d=d+1){
			gotoxy(d,d+4);
			cout<<sym;
		}
	}
	
}
