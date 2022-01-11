// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter line length: ";
	int length; cin>>length;
	cout<<endl;
	
	cout<<"Please enter line symbol: ";
	char sym; cin>>sym;
	cout<<endl;
	
	cout<<"Please enter x coordinate: ";
	int x; cin>>x;
	cout<<endl;
	
	cout<<"Please enter y coordinate: ";
	int y; cin>>y;
	cout<<endl;
	
	gotoxy(x,y);
	
	for(int d=0; d<length; d++){
		cout<<sym;
	}

}
