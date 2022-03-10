#ifndef MATRIX_HPP_
#define MATRIX_HPP_

#include <vector>

using std::vector;

template <typename T> class Matrix {
  private:
    vector<T> columns, rows;

  public:
    vector<T> getColumns() const;
    vector<T> getRows() const;
};

#endif // MATRIX_HPP_
