// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"please enter the first number: ";
	
	int x = 0;
	cin>>x;
	
	cout<<"please enter your second number: ";
	
	int y = 0;
	cin>>y;
	
	cout<<"please enter your operation(+,-,*,/): ";
	
	char joe;
	cin>>joe;
	
	cout<<x<<joe<<y<<'='<<endl;
	
	if(joe == '+'){
		cout<<x + y;
	}
	else if(joe == '-'){
		cout<<x - y;
	}
	else if(joe == '*'){
		cout<<x * y;
	}
	else if(joe == '/'){
		cout<<x / y;
	}
	else{
		cout<<"I do not understand the operation, try again";
	}
}

