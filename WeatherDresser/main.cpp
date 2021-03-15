#include<iostream>
using namespace std;

int main(){

int answer;
int answer2;
int temp;
int month[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

do{
  cout<<"**************************************************************************\n"<<endl;
  cout<<"Hello. Welcome to Weather Dresser. This app will recommend how to dress throughout the year for NEW YORK CITY."<<endl;
  cout<<"Choose an option: "<<endl;
  cout<<"[1] Enter the temperature. (Farenheit)"<<endl;
  cout<<"[2] Enter the month."<<endl;
  cout<<"[3] Exit program."<<endl;
  cin>>answer;

  switch(answer){
    case 1:{
      cout<<"\tTemperature: ";
      cin>>temp;

      if( temp < -20 || temp > 120 )
        cout<<"ERROR: Invalid temperature. Please enter between -20 to 120 degrees Farenheit."<<endl;

      else{
        
        if( -20 <= temp && temp <= 35)
        cout<<"A heavy jacket or coat is highly encouraged. A scarf, gloves and knitted hat is also recommended to keep from the cold. A thermal can be worn as a substitute instead of a sweater. Also, thick pants that cover the entire legs and boots. "<<endl;

        else if( 35 < temp && temp <= 50)
        cout<<"A light bubble jacket is highly encouraged. A scarf can be used to protect the neck. Sweat/Track suits are comfort clothes that can keep you warm. Also, pants that cover the legs or leggings."<<endl;

        else if( 50 < temp && temp <= 70)
        cout<<"A sweater is encouraged for most but some may find a t-shirt sufficient. Shorts/Skirts/Leggings are okay to wear. Also, dresses with a light jacket are still fine."<<endl;

        else
          cout<<"T-shirts, blouses, dresses are fine. Shorts/Skirts/Leggings are okay. A jacket/coat aren't necessary and advised against, especially if temperature is above 80. "<<endl;
        
      }// else
    } break;

  case 2:{
    cout<<"Enter a number for the month to get tips on how to dress with Jan = 1 and Dec = 12."<<endl;
    cin>>answer2;
    
    if( answer2 < 1 || answer2 > 12 )
        cout<<"ERROR: Invalid month. Please enter between 1 to 12 for the desired month."<<endl;

      else{
         if( answer2 == month[11] || answer2 == month[0] || answer2 == month[1] || answer2 == month[2]) 
        cout<<"A heavy jacket or coat is highly encouraged. A scarf, gloves and knitted hat is also recommended to keep from the cold. A thermal can be worn as a substitute instead of a sweater. Also, thick pants that cover the entire legs and boots. "<<endl;

       
        else if( answer2 == month[10] || answer2 == month[3] || answer2 == month[4])
        cout<<"A light bubble jacket is highly encouraged. A scarf can be used to protect the neck. Sweat/Track suits are comfort clothes that can keep you warm. Also, pants that cover the legs or leggings."<<endl;

        else if( answer2 == month[8] && answer2 == month[9])
        cout<<"A sweater is encouraged for most but some may find a t-shirt sufficient. Shorts/Skirts/Leggings are okay to wear. Also, dresses with a light jacket are still fine."<<endl;

        else
          cout<<"T-shirts, blouses, dresses are fine. Shorts/Skirts/Leggings are okay. A jacket/coat aren't necessary and advised against, especially if temperature is above 80. "<<endl;
        
      }// else
  } break;

  case 3:{
    cout<<"Thank you for using weather dresser."<<endl;
  } break;

  default: cout<<"Invalid option - please try again \n"; break;
  }//switch

}//do
while(answer != 3);

return 0;
} //main
