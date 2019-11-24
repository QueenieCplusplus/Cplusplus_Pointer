// 2019, 11/24, by Queenie
// array using for-loop & pointer (* &)

#include <iostream>
#include <utility>

void print_months() {

    int month[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (auto x : month) // month 陣列中每一個元素指派到 x 變數容器
        std::cout << x << '\n';

}

void increment() {

    char c[5] = {'q', 'u', 'e', 'e', 'n'};

    for (auto& x : c) // 將變數容器 x 指向某元素，則利用這容器盒子表面貼上一個 & 記號
        ++x;
        std::cout << c << '\n';
}

int main(){

    print_months();
    increment();
    return 0;

}