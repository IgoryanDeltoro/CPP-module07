#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T_arr, typename Func>
void iter(T_arr *arr, const size_t len, Func f) {
    size_t i = 0;
    for (; i < len; i++) {
        f(arr[i]);
    }
}

#endif