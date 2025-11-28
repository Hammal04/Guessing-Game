#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void Balance();
void main_manu();
void endp();
void deposite ();
void Withdraw ();
void Profit();
void Loss();
void Game ();

int choice ;
int Initial_amount = 100;
int profit = 00;
int loss = 00;



int main()
{
    cout << "====================" << endl;
    cout << "     Guess Game     " << endl;
    cout << "====================" << endl;
    main_manu();

    return 0;
}
void main_manu(){
    cout << "\n====================\n" << endl;
string options=(" 1 = Check balance  \n 2 = Deposit  \n 3 = Withdraw \n 4 = Profit \n 5 = Loss  \n 6 = Play game \n 7 = Exit"  );
    cout << options << endl;
    cout << "\nChoice a Number : ";
    cin >> choice ;

    while (true ){
    if (choice == 1){
        Balance();
    }
    else if (choice == 2){
        deposite();}
    else if (choice == 3){
        Withdraw();
    }
    else if (choice==4){
        Profit();
    }
    else if (choice==5){
        Loss();
    }
    else if (choice==6){
        Game();
    }
    else if (choice==7){
        cout << "\n====================\n" << endl;
        cout << " Exit... " << endl;
        cout << "\n====================\n" << endl;
    }
    else {
    cout << "\n====================\n" << endl;
    cout << "******* Invalid Input ******* ";}

    break;
}
}

void Balance(){
cout << "\n====================\n" << endl;
char key;
cout << "Your current balance is " << Initial_amount << endl ;
cout << "Do you want to go main manu ? (Y/N) :";
cin >> key;
      if (key == 'Y' || key == 'y' ){
           main_manu();
      }
      else{
       endp();}
}

void deposite(){
cout << "\n====================\n" << endl;
    char key;
    int dep_amt ;
    cout << "Enter an amount to Deposit : ";
    cin >> dep_amt ;
    if (cin.fail() || dep_amt < 1) {
        cout << "***** Invalid amount *****" << endl;}
    else {
        Initial_amount += dep_amt;
cout <<"Rs."<<dep_amt<<" Deposits successfully " << endl;
cout <<"Your current balance is = "<<Initial_amount<< endl;}
cout << "Do you want to go main manu ? (Y/N) :";
cin >> key;
      if (key == 'Y' || key == 'y' ){
           main_manu();
      }
      else{
        endp();}}

void Withdraw(){
cout << "\n====================\n" << endl;
    char key;
    int with_amt;
    cout << "Enter an amount to Withdraw : ";
    cin >> with_amt ;
     if (cin.fail() || with_amt < 1) {
        cout << "***** Invalid amount *****" << endl;}
     else if (with_amt > Initial_amount){
        cout << "***** Less balance *****" << endl;
     }
     else {
        Initial_amount -= with_amt;
    cout <<"Rs."<<with_amt<<" Withdraw successfully " << endl;
    cout <<"Your current balance is = "<<Initial_amount<< endl;}
    cout << "Do you want to go main manu ? (Y/N) :";
    cin >> key;
      if (key == 'Y' || key == 'y' ){
           main_manu();
      }
      else{
        endp();}}

    void Profit(){
    cout << "\n====================\n" << endl;
    char key;
    cout << "Your Profit is : " << profit << endl;
    cout << "Do you want to go main manu ? (Y/N) :";
    cin >> key;
      if (key == 'Y' || key == 'y' ){
           main_manu();
      }
      else{
        endp();}}
    void Loss(){
    cout << "\n====================\n" << endl;
    char key;
    cout << "Your Loss is : " << loss << endl;
    cout << "Do you want to go main manu ? (Y/N) :";
    cin >> key;
      if (key == 'Y' || key == 'y' ){
           main_manu();
      }
      else{
        endp();}
    }

    void Game(){
    cout << "\n====================\n" << endl;
    srand(time(0));
    int target = rand() % 10+ 1;
    char key;
    int bit_amt;
    cout << "Enter Your Bit amount : ";
    cin >> bit_amt;
    if(bit_amt <= Initial_amount && bit_amt>0){
    int total_amt= Initial_amount - bit_amt;
    Initial_amount= total_amt;
    loss =+bit_amt;
    int usr_chois;
    cout << "Enter Your Bit Number(1/10) : ";
    cin >> usr_chois;
    if (usr_chois == target ){
        int curr_amt = (target*bit_amt);
        int cur_amt = curr_amt+ Initial_amount;
        Initial_amount= Initial_amount+curr_amt;
        profit=+ curr_amt;
cout << "correct you won the bit \nYour current balance = " <<  cur_amt << endl;
}
     else{

        cout << "You lose the bit \ncorrect bit is : " << target << endl;
        cout << "Your balance = " << Initial_amount << endl;}}
     else if (bit_amt > Initial_amount){
        cout << "***** Less Balance *****" << endl;}
     else {
        cout << "***** Invalid Amount *****" << endl;
     }
        cout << "Do you want to go main manu ? (Y/N) :";
        cin >> key;
      if(key == 'Y'|| key == 'y'){
           main_manu();
      }
      else{
        endp();}}
  void endp(){
      cout << "Game is over" ;}

