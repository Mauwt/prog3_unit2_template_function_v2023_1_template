//
// Created by rudri on 10/11/2020.
//
#include <type_traits>
#ifndef PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P3_H
#define PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P3_H

template<typename T, size_t N>
auto calcular_total(T(&arr)[N]) {
    double total{0};
    for (size_t i = 0; i < N; ++i) {
        total += arr[i];
    }
    return total;
}
template<typename T>
auto calcular_total(const T& arr) {
    double total = 0;
    for(const auto& val:arr){
        total += val;
    }

    return total;
}
#endif //PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P3_H
