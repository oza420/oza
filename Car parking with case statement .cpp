#include<iostream>
#include<vector>
#include<windows.h>
#include<fstream>
#include<time.h>
using namespace std;
 time_t t1 = time(NULL);
class vehicle
{
    string pltno;
    int type;

public:
    void addVehicle();
    void deleteVehicle();
    void printvehicle(vehicle v);
    void show();


};
vector<vehicle> veh(10);
int static totalvehicle=0,CAR=0,BIKE=0,Amount=0,i=0;

fstream file;

void vehicle::addVehicle()
{

      vehicle *v = new vehicle;
      cout<<"Enter vehicle type(1 for Car/2 for Bike) : ";
      cin>>v->type;
      cout<<"Enter vehicle number : ";
      cin>>v->pltno;

      veh.at(i).pltno=v->pltno;
      veh.at(i).type=v->type;
      i++;
      totalvehicle++;

      if(v->type == 1)
      {
          CAR++;
          Amount += 50;
      }
      else
        {
        BIKE++;
        Amount += 20;
        }
     	cout<<"Time In:";	
				printf("%s", ctime(&t1));
        cout<<"\nVehicle added successfully"<<endl;
        
}
  void vehicle:: deleteVehicle()
  {
  
      string pno;
      int typ;
     

      cout<<"Enter vehicle type(1 for Car/2 for Bike) : ";
      cin>>typ;
      cout<<"Enter vehicle number : ";
      cin>>pno;
      	cout<<"Time Out:";	
				printf("%s", ctime(&t1));
				 for(int j=0;j<=i;j++)
      {
      	 if(veh.at(j).type== 1)
              {
                  CAR--;
             }
              else
              {
                  BIKE--;
              }

   }
}
void vehicle::printvehicle(vehicle v)
  {
    cout<<v.type<<"\t\t\t"<<v.pltno<<"\t\t\t"<< endl;
  }

  void vehicle::show()
  {
      cout<<"Vehicle Type\t\tVehicle Number"<<endl;
      for(int j=0;j<i;j++)
      {
          printvehicle(veh[j]);
      }
  }
 void totalveh()
  {
      cout<<"Total number of vehicle parked : "<< totalvehicle<<endl;
      cout<<"Total number of CAR parked : "<< CAR<<endl;
      cout<<"Total number of BIKE parked : "<<  BIKE<<endl;

  }

  void totalamount()
  {
      cout<<"Total Collection : "<<Amount<<endl;
  }
 int main()
  {
    int choice;
    char ans;
    system ( "cls" ) ;

  while (1)
  {
     system ( "cls" ) ;
 
     cout<<"                 VEHICLE PARKING  SYSTEM                 "<<endl;
     cout<<"1. Entry of  a vehicle"<<endl
         <<"2. Total vehicles parked"<<endl
         <<"3. Exit of vehicle"<<endl
         <<"4. Total Amount collected "<<endl
         <<"5. Display List "<<endl
         <<"6. Exit form  menu "<<endl
         <<"Enter your Choice : ";
         cin>>choice;

         switch(choice)
         {
             case 1: system ( "cls" ) ;
                     cout<<"Add : "<<endl;
                     veh.at(i).addVehicle();
                     break;

           case 2: system ( "cls" ) ;
                     totalveh();
                     break;

             case 3: system ( "cls" ) ;
                     cout<<"Departure : "<<endl;
                     veh.at(i).deleteVehicle();
                     break;

             case 4: system ( "cls" ) ;
                     totalamount();
                     break;

             case 5: system ( "cls" ) ;
                     veh.at(i).show();
                     break;
             case 6: exit(0);
         }

         cout<<"\nDo you want to continue, press y/n : "<<endl;
         cin>>ans;
         if(ans=='n')
         {
             break;
         }
         else
         {
             continue;
         }
  }

  return 0;
  }

