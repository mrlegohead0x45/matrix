// Copyright (c) 2022, mrlegohead0x45
// SPDX-License-Identifier: MIT

#include "shape.hpp"

#include <cstddef>

namespace matrix {

using std::size_t;

Shape::Shape(size_t rows, size_t columns) : m_rows(rows), m_columns(columns){};

size_t Shape::getColumns() const { return this->m_columns; }

size_t Shape::getRows() const { return this->m_rows; }

bool operator==(const Shape &lhs, const Shape &rhs) {
    return lhs.getRows() == rhs.getRows() &&
           lhs.getColumns() == rhs.getColumns();
}
bool operator!=(const Shape &lhs, const Shape &rhs) { return !(lhs == rhs); }

} // namespace matrix
