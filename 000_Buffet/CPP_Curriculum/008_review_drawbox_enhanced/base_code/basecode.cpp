// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter box width: ";
	int width; cin>>width;
	
	cout<<"Please neter border character: ";
	char sym; cin>>sym;
	
	cout<<"Please enter box height: ";
	int height; cin>>height;
	
	cout<<"please enter x coordinate: ";
	int x; cin>>x;
	
	cout<<"Please enter y coordinate: ";
	int y; cin>>y;
	
	gotoxy(x,y);
	
	int d;
	for(int d=0; d<height; d++){
		
		int e;
		for(int e=0; e<width; e++){
			gotoxy(x+e,y+6+d);
			cout<<sym;
		}
		
	gotoxy(x+1,y+1);
	
	int f;
	for(int f=0;f<height-1;f++){
		
		int g;
		for(int g=0; g<width-1; g++){
			cout<<" ";
		}
	}
	
	}
}
