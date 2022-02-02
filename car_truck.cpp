//Qsn-8
#include<iostream>
using namespace std;
class truck;
class car
{
private:
    int speed;
public:
    void maxx(truck &t1);
    car(){cout<<"Enter speed of car: ";cin>>speed;}

};
class truck
{
      int speed;
  public:
    friend void car::maxx(truck &t1);
    truck(){cout<<"Enter speed of truck: ";cin>>speed;}
};
void car::maxx(truck &t1)
{
    if(t1.speed>speed)
    cout<<"Speed of the truck is greater than car\n";
    else cout<<"Speed of the car is greater than truck\n";

}
int main()
{
       car c1;
       truck t1;
       c1.maxx(t1);
}
