// https://youkn0wwho.academy/topic-list/functions

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int a, b; cin >> a >> b;
// 	cout << "floor " << a << " / " << b << " = " << floor(a/b) << '\n';
// 	cout << "ceil " << a <<  " / "<< b << " = " << ceil(a/b) << '\n';
// 	cout << "round " << a << " / " << b <<" = " << round(a/b) << '\n' ;

// 	return 0 ;
// }

#include <iostream>
#include <cmath> // For floor, ceil, and round functions

int main() {
    int A, B;
    std::cin >> A >> B;

    double result = static_cast<double>(A) / B;

    // Printing the floor, ceil, and round results
    std::cout << "floor " << A << " / " << B << " = " << std::floor(result) << std::endl;
    std::cout << "ceil " << A << " / " << B << " = " << std::ceil(result) << std::endl;
    std::cout << "round " << A << " / " << B << " = " << std::round(result) << std::endl;

    return 0;
}
