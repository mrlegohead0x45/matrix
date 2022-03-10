#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include <cstddef>

using std::size_t;

class Shape {
  private:
    const size_t rows, columns;

  public:
    size_t getRows() const;
    size_t getColumns() const;
};

#endif // SHAPE_HPP_
