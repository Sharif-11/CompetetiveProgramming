#include<iostream>
using namespace std;
class trapezoid
{    public:
      double area;
     trapezoid(int h,int a,int b)
     {
        area=h*(a+b)/2.00;
     }
     void show()
     {
         cout<<"Area of the trapezoid is: "<<area<<endl;
     }


};
int main()
{
    trapezoid t1(2,3,4);
    t1.show();
}
