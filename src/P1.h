//
// Created by rudri on 10/11/2020.
//
#include <string>
#ifndef PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P1_H
#define PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P1_H

namespace utec{
/*
    template<typename T1>
    int count_char (const T1* string_, T1 character){
        int idx  = 0, count = 0;

        char zr ='a';
        while (zr != '\0'){
            zr = string_[idx];
            if (zr == character) count++;
            idx++;
        }
        return count;
    }
    */
    template<typename Container>
    std::size_t count_char(Container& cont, char const c)
    {
        size_t count = 0;
        for (auto const& elem : cont) {
            if (tolower(elem) == tolower(c)) { // Ignoramos las mayúsculas
                count++;
            }
        }
        return count;
    }

}

#endif //PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P1_H
