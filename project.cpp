/* Group Leader = Satani Smit
        members : vaghani Krish 
                : Rakhasiya Brijesh 
*/
#include<iostream>
using namespace std;
// Rock - Paper  - scissors Game 
char  getuserchoice();
int main()
{
  char player , computer ;

  player = getuserchoice();

  return 0;
}

char getuserchoice()
{
  char player ;
  cout << "Rock-Paper-Scissors Game!" << endl ;

  do{
    cout << "Choose one of the following" << endl;
    cout << "***********************************" << endl;
    cout << " 'r' for rock " << endl ;
    cout << " 'p' for paper " << endl;
    cout << " 's' for scissors " << endl;
    cin >> player ;
  }while(player !='r' && player !='p' && player !='s');

  return player ;
}