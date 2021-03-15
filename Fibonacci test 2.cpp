#include<iostream>
using namespace std;

unsigned long long int fib(long int n) {//this makes it go up to very big numbers (positive)
	
	long long int a = 0, b = 1, i = 0, fib;
	
	while(i <= n) {
		fib = a + b;
		b = a;
		a = fib;
		
		cout<<fib<<endl;
		++i;
	}//while loop
	
	return fib;
}

int main( ){
	
	bool positive = true;		
	int x;
	
	do {	
	cout<<"Please enter a postive number."<<endl;
	cin>>x;
	
	if(x < 0){
	cout<<"You entered an incorrect number."<<endl; 
	positive = false; //the program will end if negative   (no more loops)
	}//if
		
	else cout <<"The fibonacci of that number is: "<<fib(x) <<"\n"<< endl;

	}//do loop
	while(positive);
	
	return 0;
}


