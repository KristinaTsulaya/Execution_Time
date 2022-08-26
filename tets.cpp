#include "time_container.h"

namespace time_container{

    std::map<std::string, std::chrono::duration<double>> map;
    std::chrono::time_point<std::chrono::steady_clock> start;
//    size_t size;
    bool flag;

    void init(){
//        size = 0;
        flag = true ;
    }

    void log(const std::string &func_name, const std::chrono::time_point<std::chrono::steady_clock> &time) {
        if (map.empty() && !flag && (time - start).count() <= 0 ){
            init();
        }

        if (flag) {
            start = time;
            flag = false;
        } else {
            map.insert({func_name, time - start});
            flag = true;
            std::cout << map.size() << std::endl;
//                ++size;
        }
    }
    void print_map(){
        for(const auto& [key, value] : map)
            std::cout << key << " " << value.count() << std::endl;
    }
}
