// Copyright (c) 2022, mrlegohead0x45
// SPDX-License-Identifier: MIT

#ifndef EXCEPTIONS_HPP_
#define EXCEPTIONS_HPP_

#include <stdexcept>

namespace matrix {

class MatrixException : public std::runtime_error {};
class ShapeException : public MatrixException {};

} // namespace matrix

#endif // EXCEPTIONS_HPP_
