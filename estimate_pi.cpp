#include<random>
#include<iostream>
#include<cmath>

int main() {
	int n;
	cin >> n;
	long double num_point_circle = 0;
	long double num_point_total = 0;

	for(int i=0;i<n;i++) {
		long double x = ((long double) rand() / (RAND_MAX));
		long double y = ((long double) rand() / (RAND_MAX));
		long double distance = x*x+y*y;

		if (distance <= 1){
			num_point_circle += 1;
		}
		num_point_total += 1;
	}

	long double pi = 4 * num_point_circle/num_point_total;
	cout<<pi<<endl;
}
