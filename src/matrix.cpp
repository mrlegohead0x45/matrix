#include "matrix.hpp"

#include "shape.hpp"

#include <cstddef>
#include <vector>

using std::vector, std::size_t;

template <typename ItemType>
Matrix<ItemType>::Matrix(Shape shape) : m_shape(shape) {
    // allocate enough space for a matrix of this shape
    this->m_columns.reserve(this->getShape().getColumns());
    this->m_rows.reserve(this->getShape().getRows());
};

template <typename ItemType>
Matrix<ItemType>::Matrix(size_t rows, size_t columns) : m_shape(rows, columns) {
    this->m_columns.reserve(this->getShape().getColumns());
    this->m_rows.reserve(this->getShape().getRows());
}

template <typename ItemType>
vector<ItemType> Matrix<ItemType>::getColumns() const {
    return this->m_columns;
}

template <typename ItemType>
vector<ItemType> Matrix<ItemType>::getRows() const {
    return this->m_rows;
}

template <typename ItemType> Shape Matrix<ItemType>::getShape() const {
    return this->m_shape;
}
