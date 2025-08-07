// https://vjudge.net/problem/Gym-287306L

#include<iostream>
using namespace std;

int main(){
	char c; cin>>c;
	if(c>='0' and c<='9') cout << "IS DIGIT" ;
	else if(c>='A' and c<='Z'){
		cout << "ALPHA" <<endl;
		cout << "IS CAPITAL" ;
	}
	else if(c>='a' and c<='z'){
		cout << "ALPHA" << endl;
		cout << "IS SMALL";
	}
	return 0;
}