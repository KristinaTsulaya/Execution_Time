#include <iostream>
#include <vector>
#include <chrono>
#include <map>
#include "tets.h"


//class time_container {
//private:
//    std::map<std::string, std::chrono::duration<double>> map;
//    std::chrono::time_point<std::chrono::steady_clock> start;
//    size_t size;
//    bool flag;
//
//public:
//    time_container() : size(0), flag(true) {};
//
//    void log(const std::string& func_name, const std::chrono::time_point<std::chrono::steady_clock>& time) {
//        if (flag) {
//            start = time;
//            flag = false;
//        } else {
//            map.insert({func_name, time - start});
//            flag = true;
//            ++size;
//        }
//    }
//
//
//    void print_map(){
//        for(auto [key, value] : map)
//            std::cout << key << " " << value.count() << std::endl;
//    }
//
//
//};
//time_container timeContainer0;

//time_container timeContainer1;

class func{
public:
    void h() {
        std::cout <<"h()"<< std::endl;
    }
    void g(int x, int y) {
        std::cout << x + y << std::endl;

        time_container::log("h()", std::chrono::high_resolution_clock::now());
        h();
        time_container::log("h()", std::chrono::high_resolution_clock::now());
    }
};








int main() {


    func funk_;

    time_container::log("g()", std::chrono::high_resolution_clock::now());
    funk_.g(4, 5);
    time_container::log("g()", std::chrono::high_resolution_clock::now());

    time_container::print_map();

    /* auto g_lambda = []() {
        start = std::chrono::high_resolution_clock::now();
        g(x, y);
        end = std::chrono::high_resolution_clock::now();
        timeContainer.push(end - start);
    };
    auto h_lambda = []() {
        start = std::chrono::high_resolution_clock::now();
        h();
        end = std::chrono::high_resolution_clock::now();
        timeContainer.push(end - start);
    };
    g_lambda();
    h_lambda();*/

    return 0;
}
//template <typename T_1, typename T_2, typename T_3, typename T_4>
//void g(void(*f)(const T_1& val_1, const T_2& val_2, const T_3& val_3, const T_4& val_4)) {
//
//}


/*auto h_lambda = [](time_container& timeContainer) {
    start = std::chrono::high_resolution_clock::now();
    h();
    end = std::chrono::high_resolution_clock::now();
    timeContainer.push(end - start);
};
auto g_lambda = [](time_container& timeContainer, int x, int y) {
    start = std::chrono::high_resolution_clock::now();
    g(x, y);
    end = std::chrono::high_resolution_clock::now();
    timeContainer.push(end - start);
};*/

//void gl_init(std::chrono::duration<double> value){
//    gl_time = value;
//}