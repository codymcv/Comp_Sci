// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter box width: ";
	int width;
	cin>>width;
	
	cout<<"Please enter character: ";
	char border;
	cin>>border;
	
	cout<<"Please enter box height: ";
	int height;
	cin>>height;
	
	cout<<"Enter X coordinate: ";
	int x;
	cin>>x;
	
	cout<<"Enter Y coordinate: ";
	int y;
	cin>>y;
	
	gotoxy(x,y);
	
	int d;
	for(int d=0; d<height; d++){
		
		int e;
		
		for(int e=0; e<width; e++){
			gotoxy(x+e,y+6+d);
			cout<<border;
		}
		
		cout<<endl;
	}
	
	gotoxy(x+1,y+1);
	
	int f;
	 for(int f=0; d<height-1; f++){
	 	int g;
	 	for(int g=0; g<width-1; g++){
	 		gotoxy(x+1+g,y+1+f);
	 		cout<<" ";
	 	}
	 	cout<<endl;
	 }
	

}
