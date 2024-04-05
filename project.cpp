/* Rock - Paper  - scissors Game 
Group Leader = Satani Smit
        members : vaghani Krish 
                : Rakhasiya Brijesh 
*/

#include<iostream>
#include<ctime>

using namespace std;


class rps{
  char player , computer ;
  public:

char  getuserchoice()
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
  return  player ;
}

char getcomputerchoice()
{
   srand(time(0));
   int num =rand()%3 +1;   //random function choose one number in range of (0,1,2)
   switch(num)
   {
    case 1: 
     return 'r' ;
    case 2:
     return 'p' ;
    case 3:
     return 's' ;
   }
   return 0 ;
}
 void showChoice(char choice){

	switch(choice){
		case 'r': std::cout << "Rock\n";
				  break;
		case 'p': std::cout << "Paper\n";
				  break;
		case 's': std::cout << "Scissors\n";
				  break;
	}
}
void compare()
   {
       switch(player)
       {
       case 'r':
         if(computer=='r')
         {
             cout<<endl<<"Tie this round..";
         }
         else if(computer=='p')
         {
             cout<<endl<<"Computer win this round.";  c++;
         }
          else if(computer=='s')
         {
             cout<<endl<<"You win this round.";    u++;
         }
         break;
        case 'p':
         if(computer=='p')
         {
             cout<<endl<<"Tie this round..";
         }
         else if(computer=='s')
         {
             cout<<endl<<"Computer win this round.";  c++;
         }
          else if(computer=='r')
         {
             cout<<endl<<"You win this round.";   u++;
         }
         break;
          case 's':
         if(computer=='s')
         {
             cout<<endl<<"Tie this round..";
         }
         else if(computer=='r')
         {
             cout<<endl<<"Computer win this round.";   c++;
         }
          else if(computer=='p')
         {
             cout<<endl<<"You win this round.";  u++;
         }
         break;
       }
 
};
int main()
{

  char player , computer ;
  
   rps p;
  player  = p.getuserchoice();
  cout << "Your Choice : " ;
  p.showChoice(player);

  computer = p.getcomputerchoice();
  cout << "Computer's Choice : " ;
  p.showChoice(computer);

  p.compare();
  return 0;
}


