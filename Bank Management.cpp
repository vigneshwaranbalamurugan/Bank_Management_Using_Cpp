#include <iostream>
#include<string.h>
using namespace std;
class bank{
    char name[20][20]={"John","Doe","Git","Alexa","Reena"};
    char acno[10][10]={"20BI05","20BI15","20BI02","20BI03","20BI04"};
    int pin[5]={1234,5678,9876,1235,3452};
    char sno[10];
    int spin,ser;
    int balance[5]={10000,45000,34000,67000,87000};
    int withdraw;
    int upload;
    int amount;
    int z,i,found=0;
    void up(int amount,int i){
        balance[i]+=amount;
        cout<<"Current balance="<<balance[i]<<endl<<endl<<"THANK YOU!";
       
    }
    void bal(int i){
        cout<<"Owner Name="<<name[i]<<endl<<endl;
        cout<<"Account Number="<<acno[i]<<endl<<endl;
        cout<<"Current balance="<<balance[i]<<endl<<endl<<"THANK YOU!";
        
    }
    public:
    void get(){
        cout<<"Enter your account number:";
        cin>>sno;
        cout<<endl;
        for(i=0;i<5;i++){
        if((strcmp(sno,acno[i]))==0)
        {   
            found++;
            cout<<"Owner Name="<<name[i]<<endl<<endl;
            cout<<"Account Number="<<acno[i]<<endl<<endl;
            end:
            cout<<"Enter your pin:";
            cin>>spin;
            cout<<endl;
            {   
                if(spin==pin[i])
                {  
                   cas:
                   cout<<"To check balance enter 1//To widthdraw enter 2//To upload enter 3//OTHER WISE press any key to END:";
                   cin>>ser;
                   cout<<endl;
                   switch(ser){
                       case 1:
                       bal(i);
                       break;
                       case 2:
                       cout<<"Enter amount to WIDTHDRAW:";
                       cin>>amount;
                       cout<<endl;
                       widh(amount,i);
                       break;
                       case 3:
                       cout<<"Enter amount ADD:";
                       cin>>amount;
                       cout<<endl;
                       widh(amount,i);
                       break;
                       default:
                       cout<<"Invalid"<<endl<<endl;
                       cout<<"To Try again enter 1// Other wise enter anything:";
                       cin>>z;
                       cout<<endl<<endl;
                       if(z==1)
                       {
                         goto cas;  
                       }
                       else{
                           cout<<"THANKYOU";
                           break;
                       }
                      
                   }
                }
                else{
                    
                    cout<<"Pin is incorrect!.Try again"<<endl<<endl;
                    cout<<"To continue enter 1 otherwise enter anything:";;
                    cin>>z;
                    cout<<endl<<endl;
                    if(z==1){
                    goto end;}
                    else{cout<<"THANK YOU";
                        break;
                    }
                    
                }
            }
        }}
        if(found==0){
            printf("Account number not found");
        
        }
    }
    private:
    void widh(int amount,int i)
    {   if(amount<(balance[i]-1000)){
        balance[i]-=amount;
        cout<<"Collect your money"<<endl<<endl<<"Current balance="<<balance[i]<<endl<<endl<<"THANK YOU!";}
        else{
            cout<<"You didn't have sufficient balance";
            cout<<endl<<endl<<"Your balance is:"<<balance[i]<<endl<<endl<<"To Try again enter 1// Other wise enter anything:";
            cin>>z;
            if(z==1)
            {
                cout<<endl<<endl<<"Enter amount to WIDTHDRAW:";
                cin>>amount;
                widh(amount,i);
            }
            else{
                cout<<"THANK YOU";
            }
        }
    }
    
};
int main()
{
    bank account;
    int n;
    cout<<"If you want our service enter 1 otherwise enter any number:";
    cin>>n;
    cout<<endl;
    if(n==1){
    account.get();}
    else
    {
        cout<<"THANK YOU";
    }
    return 0;
}








