//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P2_H
#define PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P2_H
#include <iostream>
#include <string>
#include <vector>

namespace utec{


    /*template<typename Container, std::size_t N>
    auto split(const Container(& input)[N], char delimiter)
    -> std::vector<std::string>
    {
        std::vector<std::string> output;
        auto start = input.begin();
        auto end = input.begin();
        while (end != input.end()) {
            if (*end == delimiter) {
                output.emplace_back(start, end);
                start = end + 1;
            }
            ++end;
        }
        output.emplace_back(start, end);
        return output;
    }*/
    template<typename T>
    std::vector<std::string> split( const T& str, char delimeter){
        std::vector<std::string> output;

        std::size_t len = 0;
        for (auto const& c: str) len++;

        std::string token;
        for (int i = 0; i < len; i ++){
            if (str[i] != delimeter) {
                token += str[i];
            }
            else if (str[i] == delimeter) {
                output.push_back(token);
                token = "";
            }
        }

        return output;
    }

}

#endif //PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P2_H
