#include<iostream>
#include<string>
using namespace std;
class bank
{
    private:
    string depositername;
    int accountnumber;
    string accounttype;
    double balance;

    public:
    bank(string name,int accnum,string acctype,double initialbalance=0.0)
    {
      depositername=name;
      accountnumber=accnum;
      accounttype=acctype;
      balance=initialbalance;
    }

    void deposit(double amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout << "deposited amount = "<< amount <<endl;
            cout << 
        }
    }


}
