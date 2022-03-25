#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include <cstddef>

namespace matrix {

using std::size_t;

class Shape {
  private:
    const size_t m_rows    = 0;
    const size_t m_columns = 0;

  public:
    size_t getRows() const;
    size_t getColumns() const;

    Shape() = default;
    Shape(size_t, size_t);
};

} // namespace matrix

#endif // SHAPE_HPP_
