# Cplusplus_Pointer
指標的運用

本 code base 會運用 for 迴圈、 array 陣列、pointer 指標。

宣告指標的方式：

    // 陣列下限(lower bound)為 0，則代表這個元素為字元的陣列 v 
    // 陣列大小為 v[0], v[1], v[2], v[3]
    char v[4]
    
    // 指向char型別的指標（意思是指標指向之處。）
    char* p; 
    
    // *p 為 指標p 所指向的物件
    char x = *p;
    
在運算式中，前置式一元 ops 稱為 prefix unary，符號標記為 * ，為某樣東西的內容，也可以說是鑰匙，而前置式一元 ops 的符號標記為 &，為某樣東西的位址。

示意圖：

        p: p 是字元，加上 * 鑰匙，才有作用的變數，做為指向方向的功能。 
        
        v: ｜_0_｜_1_｜_2_｜_3_｜
        
＆ 代表取址，當宣告 char* p = &v[3] 時

        
        p: p 是字元，加上 * 鑰匙，才有作用的變數，做為指向方向的功能。 
        、
          、
            、
              、
                、
                  、
                    、
                      、
        v: ｜_0_｜_1_｜_2_｜_3_｜

範例：

    void increment() {

        char c[5] = {'q', 'u', 'e', 'e', 'n'};

        for (auto& x : c) // 將變數容器 x 指向某元素，則利用這容器盒子表面貼上一個 & 記號
            ++x;
            std::cout << c << '\n';
    }

    int main(){

        increment();
        return 0;

    }
    
Problem shall be resolved:

    'auto' type specifier is a C++11 extension [-Wc++11-extensions]

