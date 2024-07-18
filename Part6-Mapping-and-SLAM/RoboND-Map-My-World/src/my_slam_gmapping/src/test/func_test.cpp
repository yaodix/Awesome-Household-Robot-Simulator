

#include "../part_slam/utils/point.h"

using namespace GMapping;

const float kDeg2Rad = 0.01745329251994329576923690768489;
const float kRad2Deg = 57.295779513082320876798154814105;

int main() {
  std::cout << "hello" << std::endl;
  
  orientedpoint<double, double> p1(0,1, 90*kDeg2Rad);
  orientedpoint<double, double> p2(1,1,45*kDeg2Rad);


   orientedpoint<double, double> res = absoluteDifference(p1, p2);

  std::cout << res.x << " " << res.y << " " << res.theta*kRad2Deg << std::endl;

  return 0;
}