// 2019, 11/24, by Queenie

#include <string>

void copy_array() {
    str waterSign[3] = {"scorpio", "pisces", "cancer"};
    str earthSign[3] = {"taurus", "", "capricorn", "virgo"};
    //被複製的副本容器如下
    str ＭercuryRetrogradeThisYear[3]; 

    // 從舊的容器複製元素到新容器
    for (auto i=0; i<3; i++)
        ＭercuryRetrogradeThisYear[i] = waterSign[i];

}

int main(){

    copy_array();
    return 0;

}