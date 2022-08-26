//
// Created by Кристина Цулая on 02.08.2022.
//

#pragma once
#include <map>
#include <chrono>
#include <iostream>

namespace time_container {
    void init();
    void log(const std::string& func_name, const std::chrono::time_point<std::chrono::steady_clock>& time);
    void print_map();
}