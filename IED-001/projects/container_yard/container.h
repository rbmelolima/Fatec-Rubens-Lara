#ifndef CONTAINER_H_INCLUDED
#define CONTAINER_H_INCLUDED

class Container {
  public:
    unsigned int code;
    unsigned int dimension;
    float height;

    void clean() {
      code = 0;
      dimension = 0;
      height = 0;
    }
};

#endif // CONTAINER_H_INCLUDED
