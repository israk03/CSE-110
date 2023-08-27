/* Write a C program that finds the root of the following
quadratic equation: ax^2 + bx + c = 0 */

#include<stdio.h>
#include<math.h>

int main() {
  float a, b, c, discri, root1, root2;

  // Get the coefficients of the quadratic equation from the user.
  printf("Enter the coefficients a, b, and c: ");
  scanf("%f %f %f", &a, &b, &c);

  // Calculate the discriminant.
  discri = b * b - 4 * a * c;

  // Find the roots of the quadratic equation based on the value of the discriminant.
  switch (discri > 0) {
    case 1:
      // Two real roots.
      root1 = (-b + sqrt(discri)) / (2 * a);
      root2 = (-b - sqrt(discri)) / (2 * a);
      printf("The roots are %.2f and %.2f.\n", root1, root2);
      break;
    case 0:
      // One repeated real root.
      root1 = root2 = -b / (2 * a);
      printf("The root is %.2f.\n", root1);
      break;
    default:
      // Two complex roots.
      root1 = root2 = -b / (2 * a);
      int imaginary = sqrt(-discri) / (2 * a);
      printf("The roots are %.2f + %.2fi and %.2f - %.2fi.\n", root1, imaginary, root2, imaginary);
      break;
  }

  return 0;
}
