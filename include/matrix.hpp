// Copyright (c) 2022, mrlegohead0x45
// SPDX-License-Identifier: MIT

#ifndef MATRIX_HPP_
#define MATRIX_HPP_

#include "concept.hpp"
#include "shape.hpp"

#include <cstddef>
#include <initializer_list>
#include <vector>

namespace matrix {

using std::vector, std::initializer_list, std::size_t;

template <typename ScalarType>
requires ValidScalarType<ScalarType>
class Matrix {
  private:
    vector<vector<ScalarType>> m_rows;
    Shape m_shape;

  public:
    Matrix<ScalarType> getColumns() const;
    vector<vector<ScalarType>> getRows() const;
    Shape getShape() const;

    Matrix() = default;              // Matrix m
    Matrix(Shape);                   // Matrix m(Shape(2, 2))
    Matrix(size_t, size_t);          // Matrix m(2, 2)
    Matrix(initializer_list<Shape>); // Matrix m{Shape(2, 2)}
    // Matrix(initializer_list<Matrix>); // Matrix m{Matrix()}
    Matrix(vector<vector<ScalarType>>); // Matrix m({{1, 2, 3}, {4, 5, 6}})
    Matrix(
        initializer_list<vector<ScalarType>>); // Matrix m{{1, 2, 3}, {4, 5, 6}}
};

template <typename ScalarType>
bool operator==(const Matrix<ScalarType> &, const Matrix<ScalarType> &);
template <typename ScalarType>
bool operator!=(const Matrix<ScalarType> &, const Matrix<ScalarType> &);

template <typename ScalarType>
Matrix<ScalarType> operator+(const Matrix<ScalarType> &,
                             const Matrix<ScalarType> &);
template <typename ScalarType>
Matrix<ScalarType> operator+(const Matrix<ScalarType> &,
                             const ScalarType &);

template <typename ScalarType>
Matrix<ScalarType> operator-(const Matrix<ScalarType> &,
                             const Matrix<ScalarType> &);
template <typename ScalarType>
Matrix<ScalarType> operator-(const Matrix<ScalarType> &,
                             const ScalarType &);
// matrix multiplication
template <typename ScalarType>
Matrix<ScalarType> operator*(const Matrix<ScalarType> &,
                             const Matrix<ScalarType> &);
// multiplication by scalar
template <typename ScalarType>
Matrix<ScalarType> operator*(const Matrix<ScalarType> &, const ScalarType &);

} // namespace matrix

#endif // MATRIX_HPP_
