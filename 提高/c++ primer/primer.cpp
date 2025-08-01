#include<iostream>
#include <iterator>
#include <ostream>
#include <typeinfo>

#include<cstring>

/*
 *1
int main(){
    int vaule{0},sum{0};
    while(std::cin>>vaule){
        sum+=vaule;
    }
    std::cout<<sum<<std::endl;
}
*/


/* 
 *2
int main(){
    int value1=0,value2=0;
    if(std::cin>>value1){
        int count=1;
        while(std::cin>>value2){
            if(value2==value1){
                ++count;
            }else{
                std::cout<<value1<<"输入了"<<count<<"次"<<std::endl;
                value1=value2;
                count=1;
            }
        }
        std::cout<<value1<<"输入了"<<count<<"次"<<std::endl;
    }
} 
*/

/*
 *3 
 int main(){
    class demo1{
        public:
        int a;
        double b;
        float c;
    };
    demo1 d1;
    std::cin>>d1;
} */

/* 
变量初始化≠变量赋值
int a;  初始化
int a=10;a=12;  赋值
变量定义有且只有一次，变量声明可以有多次
int a;  定义
extern a; 声明
 */

/*
 *4
 int main(){
    int* a,b;
    // int* a,*b
    int c,*d; 
    std::cout<<typeid(a).name()<<std::endl;
    std::cout<<typeid(b).name()<<std::endl;
    std::cout<<typeid(c).name()<<std::endl;
    std::cout<<typeid(d).name()<<std::endl;
} */

/* 
 *5
 int main(){
    int a=0; //普通变量
    int* b=&a; //b存储变量a的地址 指向a
    int &c=a;
    int* &d=b; //d为指针b起别名，跟b指向同一个位置，即指向指针的引用
} */

/* 
 *6
//auto推导
int main(){
    int a=10;
    // const int c=10;
    int* const  b1=&a;  
    const int* const b2=&a;
    auto d=b1;   //顶层const被忽略
    auto e=b2; //顶层const被忽略，底层const被保留
    const auto f=b1;  //如果希望顶层const保留，需要auto前加const
} */

/* 
 *7
//decltype推导
int main(){
    int a=10;
    int *b=&a;
    int& c=a;
    decltype(a) a1;


    decltype(b) b1;   //int*
    decltype(*b) b2=a; //int &

    decltype(a) b5;      //int 
    decltype(&a) b3;   //int *
    decltype((a)) b4=a; //int &

    decltype(c) b6=a;   //int &
} */

//多维数组，所谓多维数组，就是存储数组的数组
int main(){
    int a[3][4]{1,2,3,4,
                4,5,6,7,
                7,8,9,10,};
}
