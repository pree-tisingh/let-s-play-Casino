#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<cstdlib>
#include<math.h>
void condition();
using namespace std;
int main()
{
    string s = "\n *********************************************************************************************"
                      "\n CCCCCC    AAAAAA   SSSSSS  IIIIII  N     N  OOOOOO "
                      "\n C         A    A   S         I     N     N  O     O"
                      "\n C         AAAAAA   SSSSSS    I     N N   N  O     O"
                      "\n C         A    A        S    I     N  N  N  O     O"
                      "\n CCCCCC    A    A   SSSSSS  IIIIII  N   N N  OOOOOO "
               "\n **********************************************************************************************\n" ;
     for(int i=0;i<s.size();i++)
     {
         Sleep(8);
         cout<<s[i];
     }

     string str;
     int amount;
     char con;
     cout<<"HELLO Champ!!!!\n ";
     cout<<" Enter your Name: ";
     getline(cin,str);
     cout<<endl;
     cout<<"Enter the Amount in $: ";
     cin>>amount;
     cout<<endl;

     do
     {
         condition();
         int bet;
         int ball;
         int press;
         aga2:
         cout<<" Enter the Bet Amount in $ :  ";
         cin>>bet;
         cout<<endl;
         if(bet>amount)
         {
             cout<<"INVALID";
             cout<<endl;
             goto aga2;
         }
         aga3:
         ball = 1+rand()% 10;
         cout<<"Heyyyy Buddy!!!!!!\n";
         cout<<"GUESS the number between 1 to 10: ";
         cin>>press;
         if(press==ball)
         {
             cout<<"Hurahhhhhh!!!!!!! \n";
             cout<<"YOU WIN THIS GAME......";
             cout<<endl;
             amount = amount+(bet*10);
             cout<<"You win :  "<<(bet*10)<<"$";
             cout<<endl;
             cout<<"************************************************************\n";

         }
         else if(press>10)
         {
            cout<<"INVALID NUMBER";
            cout<<endl;
            cout<<"************************************************************\n";
             goto aga3;

         }
         else if(press!=ball)
         {
            cout<<"SORRY!!!!!\n";
            cout<<"you lose this GAME.....";
            cout<<endl;
            amount = amount-bet;
            cout<<"You lose: "<<bet<<"$";
            cout<<endl;
            cout<<"************************************************************\n";
         }


       cout<<"\n***************************************************************************\n";
       cout<<"you want to play again y/n ??..  ";
       cin>>con;
       cout<<endl;
       system("cls");
       if(amount==0)
       {
           cout<<"you have not an enough amount ";
           cout<<endl;
           break;
       }
     }while(con!='n');
     cout<<"====================================================================================\n";
     cout<<"Dear "<<str<<" your total Amount is =  "<<amount<<endl;
     cout<"\n=======================================================================================\n";
}

     void condition()
     {
         cout<<"\n**********************************************************************************"
                "\n Guess the number between 1 to 10"
                "\n if you guess the right number you will get the 10 times of your bet amount"
                "\n if you guess the wrong number you will lose your bet amount"
                "\n**********************************************************************************\n";
     }

