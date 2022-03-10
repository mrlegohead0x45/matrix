#include "matrix.hpp"

template <typename ItemType>
Matrix<ItemType>::Matrix(const Shape shape) : m_shape(shape) {
    // allocate enough space for a matrix of this shape
    this->m_columns.reserve(this->getShape().getColumns());
    this->m_rows.reserve(this->getShape().getRows());
};
