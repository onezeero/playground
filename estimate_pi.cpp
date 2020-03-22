#include<iostream>
#include<cmath>
using namespace std;

int main() {
  double num_point_circle = 0;
  double num_point_total = 0;
  while(true) {
	double x = ((double) rand() / (RAND_MAX));
	double y = ((double) rand() / (RAND_MAX));
    double distance = x*x+y*y;
        if (distance <= 1){
            num_point_circle += 1;
          }
        num_point_total += 1;
    double pi = 4 * num_point_circle/num_point_total;
    cout<<pi<<endl;
  }
}
