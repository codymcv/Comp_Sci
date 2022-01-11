// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	cout<<"choose a snowflake symbol: ";
	char snow;
	cin>>snow;
	
	for(int i=0; i<5; i++){
		gotoxy(10,4+i);
		cout<<snow;
		sleep(1);
		cout<<endl;
		gotoxy(10,4+i);
		cout<<"  ";
		
	}

}
