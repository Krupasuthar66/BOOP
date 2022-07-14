//  Develop Program using Run time Polymorphism.

#include <iostream>

using namespace std;

class Account
{
    protected:
        int acc_no;
    public:
        Account(int ac)
        {
            acc_no=ac;
        }
        virtual void display()
        {
            
        }
};
class Saving: public Account
{
  int sav_amount;
  public:
  Saving(int ac, int s_am): Account(ac)
  {
      sav_amount = s_am;
  }
  void display();
};
void Saving :: display()
{
    cout<<"The Saving Account Number:"<<acc_no<<endl;
    cout<<"The Saving Account Amount:"<<sav_amount<<endl;
}
class Current: public Account
{
  int cur_amount;
   public:
   Current(int ac, int c_amt):Account(ac)
   {
       cur_amount=c_amt;
   }
   void display();
};
void Current :: display()
{
    cout<<"The Current Account Number:"<<acc_no<<endl;
    cout<<"The Current Account Amount:"<<cur_amount<<endl;
}
int main()
{
    Saving sav(1,25000);
    Current cur(2, 50000);
    Account *acc;
    acc = &sav;
    acc -> display();
    acc = &cur;
    acc -> display();
    return 0;
}


///   OUTPUT

The Saving Account Number:1
The Saving Account Amount:25000
The Current Account Number:2
The Current Account Amount:50000
