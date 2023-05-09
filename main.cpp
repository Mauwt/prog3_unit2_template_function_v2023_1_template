#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include "P1.h"
#include "P2.h"
#include "P3.h"
int main() {
        int arr[] = {11, 12, 13, 14, 20, 23};
        auto total = calcular_total(arr);
        std::cout << total << std::endl;

        std::array arr1 = {11u, 12u, 13u, 14u, 20u, 23u};
        auto total1 = calcular_total(arr1);
        std::cout << total1 << std::endl;

        std::vector vec = {11.5, 12.5, 13.0, 14.0, 20.0, 23.0};
        auto total2 = calcular_total(vec);
        std::cout << total2 << std::endl;

        std::deque deq = {11.5f, 12.5f, 13.0f, 14.0f, 20.0f, 23.0f};
        auto total3 = calcular_total(arr);
        std::cout << total3 << std::endl;
}
