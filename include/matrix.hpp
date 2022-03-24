#ifndef MATRIX_HPP_
#define MATRIX_HPP_

#include "shape.hpp"

#include <cstddef>
#include <initializer_list>
#include <vector>

using std::vector, std::initializer_list, std::size_t;

template <typename ItemType> class Matrix {
  private:
    vector<vector<ItemType>> m_rows;
    Shape m_shape;

  public:
    Matrix<ItemType> getColumns() const;
    vector<vector<ItemType>> getRows() const;
    Shape getShape() const;

    Matrix() = default;              // Matrix m
    Matrix(Shape);                   // Matrix m(Shape(2, 2))
    Matrix(size_t, size_t);          // Matrix m(2, 2)
    Matrix(initializer_list<Shape>); // Matrix m{Shape(2, 2)}
    // Matrix(initializer_list<Matrix>); // Matrix m{Matrix()}
    Matrix(vector<vector<ItemType>>); // Matrix m({{1, 2, 3}, {4, 5, 6}})
    Matrix(
        initializer_list<vector<ItemType>>); // Matrix m{{1, 2, 3}, {4, 5, 6}}
};

#endif // MATRIX_HPP_
