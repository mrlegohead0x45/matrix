#ifndef MATRIX_HPP_
#define MATRIX_HPP_

#include "shape.hpp"

#include <initializer_list>
#include <vector>

using std::vector, std::initializer_list;

template <typename T> class Matrix {
  private:
    vector<T> columns, rows;
    const Shape m_shape;

  public:
    vector<T> getColumns() const;
    vector<T> getRows() const;
    Shape getShape() const;

    Matrix() = default;
    Matrix(const Shape);
    Matrix(initializer_list<Matrix>);
    Matrix(vector<vector<T>>);
};

#endif // MATRIX_HPP_
