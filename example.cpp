#include <iostream>
#include "matrix.h"

using namespace std;

int main(){

	double A[]= {2,1,1,4,-6,0,-2,7,2};
	matrix<double> P(3,3,A);
	cout<<P<<endl;
	cout<<inverse(P)<<endl;

	cout<<rank(P)<<endl;

	double B[]={1,2,3};
	matrix<double> Q=diag(B,3);
	Q.swap(1,2);
	cout<<det(Q);

	return 0;
}
