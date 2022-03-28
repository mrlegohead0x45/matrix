// Copyright (c) 2022, mrlegohead0x45
// SPDX-License-Identifier: MIT

#include "matrix.hpp"

#include "concept.hpp"
#include "shape.hpp"

#include <cstddef>
#include <vector>

namespace matrix {

using std::vector, std::size_t;

template <typename ScalarType>
requires ValidScalarType<ScalarType> Matrix<ScalarType>::Matrix(Shape shape)
    : m_shape(shape) {
    // allocate enough space for a matrix of this shape
    this->m_columns.reserve(this->getShape().getColumns());
    this->m_rows.reserve(this->getShape().getRows());
};

template <typename ScalarType>
requires ValidScalarType<ScalarType> Matrix<ScalarType>::Matrix(size_t rows,
                                                                size_t columns)
    : m_shape(rows, columns) {
    this->m_columns.reserve(this->getShape().getColumns());
    this->m_rows.reserve(this->getShape().getRows());
}

template <typename ScalarType>
requires ValidScalarType<ScalarType> Matrix<ScalarType>
Matrix<ScalarType>::getColumns()
const {
    // this should return the first column top-down as a vector, then the second etc
    // or think of it as rotating 90 degrees clockwise then reflecting left to right

    Matrix columns(this->getRows());
    // left to right
    for (size_t col_idx = 0; col_idx < this->getShape().getColumns();
         col_idx++) {
        // top to bottom
        for (size_t row_idx = 0; row_idx < this->getShape().getRows();
             row_idx++) {
            columns[col_idx][row_idx] = this->getRows()[row_idx][col_idx];
        }
    }
    return columns;
}

template <typename ScalarType>
requires ValidScalarType<ScalarType> vector<vector<ScalarType>>
Matrix<ScalarType>::getRows()
const { return this->m_rows; }

template <typename ScalarType>
requires ValidScalarType<ScalarType> Shape Matrix<ScalarType>::getShape()
const { return this->m_shape; }

} // namespace matrix
