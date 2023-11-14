//#include<iostream>
//using namespace std;
//template<class T1, class T2>
//class sample{
//    T1 a;
//    T2 b;
//    public:
//        void getdata(T1 x,T2 y)
//        {
//            a=x; b=y;
//        }
//        void putdata()
//        {
//            cout<<a<<b;
//        }
//};
//int main(){
//    sample<int ,string> ob1;
//    ob1.getdata(30,"John");
//    ob1.putdata();
//    
//    sample<double,int> ob2;
//    ob2.getdata(30.25,17);
//    ob2.putdata();
//    return 0;
//}
//============================================================================
#include<iostream>
using namespace std;
template<class T1, class T2>
class sample
{
    T1 a;
    T2 b;
    public:
        void getdata(T1 x, T2 y)
        {
            a = x; b = y;
        }
        void putdata()
        {
            cout<<a<<b;
        }
};
int main()
{
    sample<int,int> ob1;
    ob1.getdata(30,40);
    ob1.putdata();
    
//    sample<double,int>ob2;
//    ob2.getdata(30.25,17);
//    ob2.putdata();
    return 0;
}
//#include <iostream>
//#include<list>
//using
