#ifndef MATRIX_HPP_
#define MATRIX_HPP_

#include "shape.hpp"

#include <initializer_list>
#include <vector>

using std::vector, std::initializer_list;

template <typename ItemType> class Matrix {
  private:
    vector<ItemType> columns, rows;
    const Shape m_shape;

  public:
    vector<ItemType> getColumns() const;
    vector<ItemType> getRows() const;
    Shape getShape() const;

    Matrix() = default;
    Matrix(const Shape);
    Matrix(initializer_list<Matrix>);
    Matrix(vector<vector<ItemType>>);
};

#endif // MATRIX_HPP_
