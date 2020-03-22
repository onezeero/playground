#include<random>
#include<iostream>
#include<cmath>

int main() {
  double num_point_circle = 0;
  double num_point_total = 0;
  while(true) {
    double x = random.unifrom (0,1);
    double y = random.unifrom (0,1);
    double distance = x*x+y*y;
        if (distance <= 1){
            num_point_circle += 1;
            num_point_total += 1;
          }
    double pi = 4 * num_point_circle/num_point_total;
    cout<<pi<<endl;
  }
}
