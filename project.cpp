/* Group Leader = Satani Smit
        members : vaghani Krish 
                : Rakhasiya Brijesh 
*/
#include<iostream>
#include<ctime>

using namespace std;
// Rock - Paper  - scissors Game 

class rps{
  char player , computer ;
  public:

void  userchoice()
{
  cout<<"Welcome";
  cout << "Rock-Paper-Scissors Game!" << endl ;

  do{
    cout << "Choose one of the following" << endl;
    cout << "***********************************" << endl;
    cout << " 'r' for rock " << endl ;
    cout << " 'p' for paper " << endl;
    cout << " 's' for scissors " << endl;
    cin >> player ;
  }while(player !='r' && player !='p' && player !='s');

}

void computerchoice()
{
   srand(time(0));
   int num=rand()%3 +1;   //random function choose one number in range of (0,1,2)
   switch(num)
   {
    case 1: 
       computer='r';
    case 2:
     computer='p';
    case 3:
     computer='s';
   }
}
 void showuserchoice()
 {
  cout<<"Your Choice :"<<player;
 }
   void showcomchoice()
   {
    cout<<"Computer Choice: "<<computer;
   }
};
int main()
{
  
   rps p;
 p.userchoice();
  p.showuserchoice();
  p.computerchoice();
  p.computerchoice();

  return 0;
}


