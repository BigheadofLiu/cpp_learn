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
                std::cout<<value1<<"������"<<count<<"��"<<std::endl;
                value1=value2;
                count=1;
            }
        }
        std::cout<<value1<<"������"<<count<<"��"<<std::endl;
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
������ʼ���ٱ�����ֵ
int a;  ��ʼ��
int a=10;a=12;  ��ֵ
������������ֻ��һ�Σ��������������ж��
int a;  ����
extern a; ����
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
    int a=0; //��ͨ����
    int* b=&a; //b�洢����a�ĵ�ַ ָ��a
    int &c=a;
    int* &d=b; //dΪָ��b���������bָ��ͬһ��λ�ã���ָ��ָ�������
} */

/* 
 *6
//auto�Ƶ�
int main(){
    int a=10;
    // const int c=10;
    int* const  b1=&a;  
    const int* const b2=&a;
    auto d=b1;   //����const������
    auto e=b2; //����const�����ԣ��ײ�const������
    const auto f=b1;  //���ϣ������const��������Ҫautoǰ��const
} */

/* 
 *7
//decltype�Ƶ�
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

//��ά���飬��ν��ά���飬���Ǵ洢���������
int main(){
    int a[3][4]{1,2,3,4,
                4,5,6,7,
                7,8,9,10,};
}
