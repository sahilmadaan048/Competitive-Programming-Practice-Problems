// https://vjudge.net/problem/Gym-287306T

#include<iostream>
using namespace std;
typedef long long ll;
typedef double db;

int main(){
	db a; cin >> a;
	int temp = a;
	db deci = a-temp;
	if(deci == 0.0){
		cout << "int "<< temp;
	}
	else{
		cout << "float " << temp << " " << deci;
	}
}