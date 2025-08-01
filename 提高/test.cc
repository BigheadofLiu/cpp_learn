#include <iostream>
#include <ostream>
#include <stdlib.h>
/*if 0
int main(){
int a=0; //普通常量

const int b=2;
int const c=3; //两者等价

const int* d=&b;  //常量指针 指针的指向可以变   指向的值不可以变  const修饰指针指向的值
int* const e=&a;  //指针常量 指针的指向不可以变 指向的值可以变（所以需要指向变量） const修饰指针变量（指向）

}
end 0*/

/*1

end 1*/


/*if 1
int main(){
    //指针数组 存储指针的数组
    int a=10, b=20,c=30,d=40;

    int* p1[3]={&a,&b,&c}; 
    for(int i=0;i<3;i++){
        std::cout<<*p1[i]<<std::endl;
    }

    //数组指针 指向数组的指针
    int aa[3]{10,20,30};
    int (*p2)[3]=&aa;
    // 
    // for(int i=0;i<3;i++){
    //     std::cout<<*p2<<std::endl;
    //     p2++;
    // }
    // 错误：p2 是指向一个长度为 3 的 int 数组的指针。
    // p2++ 会使 p2 指向下一块“长度为 3 的 int 数组”，但这块内存并不存在
    // 
     for(int i=0;i<3;i++){
        // std::cout<<*p2[i]<<std::endl; *p2[i]的写法又错
        std::cout<<(*p2)[i]<<std::endl;
    }
}
end 1*/




