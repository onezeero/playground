#include<random>
#include<iostream>
#include<cmath>

int main()
{
  double estimate_pi(n);
  double num_point_circle = 0;
  double num_point_total = 0;
  for (n) {
    double x = random.unifrom (0,1);
    double y = random.unifrom (0,1);
    double distance = x**2 + y**2;
        if (distance <= 1){
            num_point_circle += 1;
            num_point_total += 1;
          }
    double pi = 4 * num_point_circle/num_point_total;
    return pi
  }
}
