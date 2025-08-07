#include<iostream>
#include<tuple>
using namespace std;

int main() {
	tuple <int, string> person(20, "sahil");
	cout << get<1>(person) << endl;
	get<1>(person) = "karan";
	cout << get<1>(person) << endl;


	tuple <int, char, bool, float> thing;
	thing = make_tuple(23, 'H', true, 24.3);
	cout << get<0>(thing) << endl;
	cout << get<1>(thing) << endl;
	cout << get<2>(thing) << endl;
	cout << get<3>(thing) << endl;

	tuple<int, int> t1 = make_tuple(1, 2);
	tuple<int, int> t2 = make_tuple(3, 4);
	cout << get<0>(t1) << " " << get<1>(t1) << endl;
	cout << get<0>(t2) << " " << get<1>(t2) << endl;

	// cout << endl;
	t1.swap(t2);
	cout << get<0>(t1) << " " << get<1>(t1) << endl;
	cout << get<0>(t2) << " " << get<1>(t2) << endl;

	int x, y;
	tie(x, y) = t1;
	cout << x << " " << y << endl;

	//double concatenation
	tuple<int, char> t(20, 't');
	tuple<char, string> tt('r', "gello world");
	tuple <int, char,char, string> t3 = (tuple_cat(t, tt));

	cout << get<0>(t3) << " " << get<1>(t3) << " " << get<2>(t3) << get<3>(t3) << " "  << endl;
	auto t4 = tuple_cat(t1, t2);  //this will make you lazy and its not really apreciatable
	return 0 ;
}