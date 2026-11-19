#include <iostream>
using namespace std;
int main()
{
  double gross_salary, tax, net_salary, pension, base_salary, bonus,bonus_payment;
  int hours,choice,penality_rate,non_worked_hour;
  cout << "enter your base salary:";
  cin >> base_salary;
  cout << "enter your working hours per week:";
  cin >> hours;
  cout << "enter your over time bonus per hour:";
    cin >> bonus;
  penality_rate=(40-hours)*base_salary/40;
    if (hours >= 40){
      gross_salary = base_salary + bonus * (hours - 40);
    }
    else if(hours<40 && hours>=0){
      gross_salary=base_salary-penality_rate;
    }
  
    if (gross_salary <= 3500)
    {
      tax = 0;
    }
    else if (gross_salary <= 10000)
    {
      tax = 0.01 * gross_salary;
    }
    else if (gross_salary <= 25000)
    {
      tax = 0.15 * gross_salary;
    }
    else if (gross_salary <= 50)
    {
      tax = 0.2 * gross_salary;
    }
    else if (gross_salary <= 100000)
    {
      tax = 0.25 * gross_salary;
    }
    else
    {
      tax = 0.3 * gross_salary;
    }
  pension = 0.07 * gross_salary;
  bonus_payment=bonus*(hours-40);
  net_salary = gross_salary - tax - pension;
  cout<<"\n salary menu:"<<endl;
  cout<<"1.bonus"<<endl;
  cout<<"2.gross salary"<<endl;
  cout<<"3.net salary"<<endl;
  cout<<"4.pension"<<endl;
  cout<<"5.tax"<<endl;
  cout<<"6.display all:"<<endl;
  cout<<"enter your choice";
  cin>>choice;
  switch(choice){
    case 1:
    cout<<"bonus:"<<bonus<<endl;
    break;
    case 2:
    cout << "gross salary:" << gross_salary << endl;
    break;
    case 3:
    cout << "net salary:" << net_salary << endl;
    break;
    case 4:
   cout << "pension:" << pension << endl;
   break;
   case 5:
  cout << "tax:" << tax << endl;
  break;
  case 6:
   cout<<"bonus:"<<bonus<<endl;
   cout << "gross salary:" << gross_salary << endl;
    cout << "net salary:" << net_salary << endl;
     cout << "pension:" << pension << endl; 
   cout << "tax:" << tax << endl;
   default:
   cout<<"invalid input!";
  }
}
