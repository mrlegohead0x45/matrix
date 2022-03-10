#include "matrix.hpp"

#include <vector>

using std::vector;

template <typename ItemType>
Matrix<ItemType>::Matrix(const Shape shape) : m_shape(shape) {
    // allocate enough space for a matrix of this shape
    this->m_columns.reserve(this->getShape().getColumns());
    this->m_rows.reserve(this->getShape().getRows());
};

template <typename ItemType>
vector<ItemType> Matrix<ItemType>::getColumns() const {
    return this->m_columns;
}

template <typename ItemType>
vector<ItemType> Matrix<ItemType>::getRows() const {
    return this->m_rows;
}
