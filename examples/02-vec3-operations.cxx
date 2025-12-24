#include <algebra3.h>
#include <iostream>


int main() {
  vec3 v1(1.0, 0.0, 0.0);
  vec3 v2(0.0, 1.0, 0.0);

  // Dot product
  double dot = v1 * v2;
  std::cout << "Dot product of v1 and v2: " << dot << "\n";

  // Cross product
  vec3 cross = v1 ^ v2;
  std::cout << "Cross product of v1 and v2: (" << cross[VX] << ", " << cross[VY] << ", " << cross[VZ] << ")\n";

  return 0;
}
