#include<iostream>
using namespace std;

class student
{
   public:
       int height;


};
int main()
{
    int n,h,i;
    cout<<"Enter student number: ";cin>>n;
    student st[n];
    double sum=0;
    for(i=0;i<n;i++)
        {
            cin>>st[i].height;
            sum+=st[i].height;
        }
        cout<<"The average height of student is: "<<sum/n<<endl;




}
