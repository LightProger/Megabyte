#include <stdio.h>
#include <math.h>

int main() {
  int k;
  double raz, p2, p10;
  scanf("%i", &k);
  p2 = k * pow(2, 30);
  p10 = k * pow(10, 9);
  raz = p2 - p10;
  printf("%.0lf", raz);
  printf("\n");
  return 0;
}
