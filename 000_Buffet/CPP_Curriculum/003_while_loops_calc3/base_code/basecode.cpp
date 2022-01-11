// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"enter a name you would like to output: ";
	
	string name;
	getline (cin,name);
	
	cout<<"how many times would you like to print it out?"<<endl;
	
	int y;
	cin>>y;
	
	cout<<"_______________________________"<<endl;
	
	int x=1;
	
	while(true){
		cout<<name<<endl;
	
			if(x==y){
				break;
			}
		x= x+1;
	}
	
	int t = 0;
	char w = 't';
	while(true){
		cout<<"You have been gnomed!";
		
		cin>> w;
		if(w == 'q'){
			cout<<"HELP";
			break;
		}
		
		if(t==100){
			break;
		}
		t= t+1;
	}
		
}
