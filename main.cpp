# include <iostream>
# include <string>
using namespace std;

int main(){
 int sel_mov;
 int sel_rows,sel_cols;
 int sel_time;
 char another_seat;
 int num_seat;
 int i,j;
 char seats [6][11];
 const int tic_price_bnoon = 120; //before noon
 const int tic_price_anoon = 180; //after noon
 string mov1="Spider-man 3";
 string mov2="The Dark Knight Rises";

 cout<<"\t Welcome to Magda Cinema \n"<<"\t ----------------------- \n";
 cout<<"Available Movies\n"<<"1: "<<mov1 << endl <<"2: "<<mov2 << endl;
 cout<<"Select a movie \n";
 wrong: cin>>sel_mov;

if(sel_mov==2 || sel_mov==1){

 if (sel_mov==1)
  cout<<mov1<<" Selected \n";
 else
  cout<<mov2<<" Selected \n";

 for(i=1; i<=5; i++){
  for(j=1; j<=10.; j++)
  {
   cout<<"+ ";
   seats[i][j]='+';
  }
  cout<<endl;
 }
 i--;
 j--;
 cout<<"Number of rows is "<<i<<" and number of columns is "<<j<< endl ;
 for(num_seat=1; num_seat<=50; num_seat++){
  outrange: cout<<"Choose a seat by entering the number of rows then columns "<<endl;
  cin>>sel_rows>>sel_cols;
  if( (sel_rows>=1 && sel_rows<=5)&&(sel_cols>=1 && sel_cols<=10) ){
  seats [sel_rows][sel_cols]='*';

  for(i=1; i<=5; i++){
   for(j=1; j<=10; j++)
    {
    cout<<" "<<seats[i][j];
    }
  cout<<endl;
 }
 cout<<"Do you want another seat? "<<"Type \'Y\' or \'N\' "<<endl;
 cin>>another_seat;
 if(another_seat=='n' || another_seat=='N')
 break;
 }
 else{
    cout<<"Choose a seat in range \n"<<"Try angain \n";
    goto outrange;
 }
 }
 cout<<"Available times \n";
 cout<<"1. 12pm - 2pm for: "<< tic_price_bnoon<<"LE"<<endl;
 cout<<"2. 2pm - 4pm for: "<< tic_price_bnoon<<"LE"<<endl;
 cout<<"3. 5pm - 7pm for: "<< tic_price_anoon<<"LE"<<endl;
 cout<<"4. 8pm - 10pm for: "<< tic_price_anoon<<"LE"<<endl;
 cout<<"Select the party you what \'1, 2, 3, 4\' \n";
 w_party: cin>>sel_time;
if(sel_time==1 || sel_time==2 || sel_time==3 || sel_time==4 ){
  if(sel_time==1 || sel_time==2){
   cout<<"Your total number of seats is : "<<num_seat <<endl;
   cout<<"Each seat is "<<tic_price_bnoon<<" LE"<<endl;
   cout<<"Your bill is "<<num_seat<<"*"<<tic_price_bnoon<<" = "<< num_seat*tic_price_bnoon<<" LE"<<endl;

  }
 else{
cout<<"Your total number of seats is : "<<num_seat <<endl;
cout<<"Each seat is "<<tic_price_anoon<<" LE"<<endl;
cout<<"Your bill is "<<num_seat<<"*"<<tic_price_anoon<<" = "<< num_seat*tic_price_anoon<<" LE"<<endl;
 }
}
else{
 cout<<"Make sure you selected the right party \n"<<"Try again \n";
 goto w_party;

}



cout<<"Thank you for choosing Magda Cinema \n";


}
else {
   cout<<"Make sure you selected the right movie \n"<<"Try again \n";
   goto wrong;
}

return 0;
}