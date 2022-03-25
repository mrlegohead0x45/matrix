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
requires ScalarValid<ScalarType>
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

} // namespace matrix

#endif // MATRIX_HPP_
