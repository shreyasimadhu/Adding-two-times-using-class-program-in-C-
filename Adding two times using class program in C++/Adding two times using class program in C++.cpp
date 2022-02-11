#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
 
public:
    void getTime(void);
    void putTime(void);
    void addTime(Time T1,Time T2);
};
 
void Time::getTime(void)
{
    cout <<"Enter time : " << endl;
    cout << "Hours ? = ";    
    cin>>hours;
    cout << "Minutes ? = ";  
    cin>>minutes;
    cout << "Seconds ? = ";  
    cin>>seconds;
}
 
void Time::putTime(void)
{
    cout << endl;
    cout << "When Time After Add is : ";
    cout << hours<<" Hours "<<minutes<<" Minute "<<seconds <<" Seceond "<<endl;
}
 
void Time::addTime(Time T1,Time T2)
{
     
    this->seconds=T1.seconds+T2.seconds;
    this->minutes=T1.minutes+T2.minutes + this->seconds/60;
    this->hours= T1.hours+T2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}
 
 
int main()
{
    Time ob1,ob2,ob3;
    ob1.getTime();
    ob2.getTime();
    ob3.addTime(ob1,ob2);
    ob3.putTime();
    return 0;
}
