// https://vjudge.net/problem/Gym-287306R

#include<iostream>
using namespace std;
typedef long long ll;
typedef double db;

int main(){
	db a;
	cin  >> a;
	if(a>=0 and a<=25){
		cout << "Interval [0,25]";
	}
	else if(a>25 and a<=50){
		cout << "Interval (25,50]";
	}
	else if(a>50 and a<=75){
		cout << "Interval (50,75]";
	}
	else if(a>75 and a<=100){
		cout << "Interval (75,100]";
	}
	else cout << "Out of Intervals";
	return 0 ;
} 