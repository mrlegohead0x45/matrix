#ifndef CONCEPT_HPP_
#define CONCEPT_HPP_

#include <concepts>

/*
    the clang-format comments below are to ensure the * stays in the middle
    as otherwise clang-format thinks it's a pointer and forces it right
*/

namespace matrix {

template <typename T>
concept IntLike = requires(T a) { // clang-format off
    { a * a } -> std::convertible_to<int>; // clang-format on
    { a + a } -> std::convertible_to<int>;
    { a - a } -> std::convertible_to<int>;
    { a / a } -> std::convertible_to<int>;
}
&&std::convertible_to<T, int>;

template <typename ScalarType>
concept ScalarValid =
    IntLike<ScalarType> && std::equality_comparable<ScalarType>;

} // namespace matrix

#endif
