#include <algebra3.h>
#include <iostream>


int main() {
  mat3 m(1.0); // Identity matrix
  vec3 v(1.0, 2.0, 3.0);

  // Matrix-vector multiplication
  vec3 result = m * v;
  std::cout << "Result of matrix-vector multiplication: (" << result[VX] << ", " << result[VY] << ", " << result[VZ] << ")\n";

  return 0;
}
