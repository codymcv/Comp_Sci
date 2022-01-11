// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	//#####
	//#   #
	//#   #
	//#####
	
	cout<<"Please enter box width: ";
	int width;
	cin>>width;
	
	cout<<"Please enter character: ";
	char border;
	cin>>border;
	
	cout<<"Please enter box height: ";
	int height;
	cin>>height;
	
	for(int d=0; d<width; d=d+1){
		cout<<border;
	}
	
	int y;
	for(int y=0; y<height; y=y+1){
		gotoxy(1,6+y);
		cout<<border;
		gotoxy(width,6+y);
		cout<<border;
	}
	cout<<endl;
	
	int x;
	for(int x=0; x<width; x=x+1){
		cout<<border;
	}
	

}
