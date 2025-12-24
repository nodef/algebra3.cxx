#include <algebra3.h>
#include <iostream>


int main() {
  vec2 v1(3.0, 4.0);
  vec2 v2(1.0, 2.0);

  // Vector addition
  vec2 v3 = v1 + v2;
  std::cout << "v1 + v2 = (" << v3[VX] << ", " << v3[VY] << ")\n";

  // Vector subtraction
  vec2 v4 = v1 - v2;
  std::cout << "v1 - v2 = (" << v4[VX] << ", " << v4[VY] << ")\n";

  // Vector normalization
  v1.normalize();
  std::cout << "Normalized v1 = (" << v1[VX] << ", " << v1[VY] << ")\n";

  return 0;
}
