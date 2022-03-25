#include "shape.hpp"

#include <cstddef>

namespace matrix {

using std::size_t;

Shape::Shape(size_t rows, size_t columns) : m_rows(rows), m_columns(columns){};

size_t Shape::getColumns() const { return this->m_columns; }

size_t Shape::getRows() const { return this->m_rows; }

} // namespace matrix
