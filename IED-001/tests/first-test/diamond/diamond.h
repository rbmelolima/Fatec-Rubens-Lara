#ifndef DIAMOND_H_INCLUDED
#define DIAMOND_H_INCLUDED

#include <math.h>

class Diamond {
private:
  float larger_diagonal;
  float smaller_diagonal;

public:
  Diamond() {
    larger_diagonal = 0;
    smaller_diagonal = 0;
  }

  void init (float init_larger_diagonal, float init_smaller_diagonal) {
    if(init_larger_diagonal <= 0 || init_smaller_diagonal <= 0) {
      throw "Error: diagonal cannot be less than or equal to 0";
    }

    larger_diagonal = init_larger_diagonal;
    smaller_diagonal = init_smaller_diagonal;
  }

  float side() {
    double sum = pow((larger_diagonal / 2), 2) + pow((smaller_diagonal / 2), 2);
    return sqrt(sum);
  }

  float perimeter() {
    return 4 * side();
  }

   float area() {
    return (larger_diagonal * smaller_diagonal) / 2;
  }
};

#endif // DIAMOND_H_INCLUDED
