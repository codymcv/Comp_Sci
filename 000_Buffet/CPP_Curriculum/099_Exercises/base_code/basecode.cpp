// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x=5;
	
	while(x<=25){
		cout<<x<<endl;
		x=x+1;
	}
	
	cout<<"---------"<<endl;
	
	for(int i = 5; i<=25; i =i+1){
		cout<<i<<endl;
	}
	
	cout<<"---------"<<endl;
	
	int y=15;
	
	while(true){
		cout<<y<<endl;
		
		if(y==5){
			break;
		}
		
		y=y-1;
	}
	
	cout<<"--------"<<endl;
	
	for(int t = 15; t>=5; t = t-1){
		cout<<t<<endl;
	}

}
