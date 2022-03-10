#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include <cstddef>

using std::size_t;

class Shape {
  private:
    const size_t m_rows, m_columns;

  public:
    size_t getRows() const;
    size_t getColumns() const;

    Shape() = default;
    Shape(size_t rows, size_t columns);
};

#endif // SHAPE_HPP_
