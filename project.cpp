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
 void chooseWinner(char player, char computer){

	switch(player){
		case 'r': 	if(computer == 'r'){
						cout << "It's a tie!\n";
					}
					else if(computer == 'p'){
						cout << "You lose!\n";
					}
					else{
						cout << "You win!\n";
					}
					break;
		case 'p': 	if(computer == 'r'){
						cout << "You win!\n";
					}
					else if(computer == 'p'){
						cout << "It's a tie!\n";
					}
					else{
						cout << "You lose!\n";
					}
					break;
		case 's': 	if(computer == 'r'){
						cout << "You lose!\n";
					}
					else if(computer == 'p'){
						cout << "You win!\n";
					}
					else{
						cout << "It's a tie!\n";
					}
					break;
	}
}
};
int main()
{
	up :
  char player , computer ;
  
   rps p;
  player  = p.getuserchoice();
  cout << "Your Choice : " ;
  p.showChoice(player);

  computer = p.getcomputerchoice();
  cout << "Computer's Choice : " ;
  p.showChoice(computer);

  p.chooseWinner(player,computer);

   r :
  char c ;
  cout << "Do You Want to Exit ? (press Y/N)" ;
  cin >> c ;

  if(c=='y' || c=='Y')
  {
      cout << "*************** Game Over ************" << endl;
  }
  else if (c=='n' || c=='N'){
  goto up;
  }
  else {
    cout << "InValid ReEnter ..." << endl;
    goto r;
  }

  return 0;

}