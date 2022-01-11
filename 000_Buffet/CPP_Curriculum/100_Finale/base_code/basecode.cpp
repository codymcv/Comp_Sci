// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	char text;
	cout<<"Type in any message to put together the scene:)";
	cout<<endl;
	gotoxy(10,5);
	cin>>text;

	cout<<"    "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	
	
	cout<<"      * "<<endl;
	cout<<"     ***"<<endl;
	cout<<"    *****"<<endl;
	cout<<"   *******"<<endl;
	cout<<"  *********"<<endl;
	cout<<" ***********"<<endl;
	cout<<"      |"<<endl;
	
	for(int a=0; a<4; a++){
		gotoxy(10,6+a);
		cout<<"^"<<endl;
		sleep(1);
	}
	
	for(int b=0; b<6; b++){
		gotoxy(11,6+b);
		cout<<"^"<<endl;
		sleep(1);
	}
	
	
}
