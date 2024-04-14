#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:
    Management()
    {
        mainMenu();
    }
};


class Details
{
    public:

         static string name , gender;
         int phoneNo;
         int age;
         string add;
         static int cId;
         char arr[100];

         void information()
         {
            cout<<"\nEnter the customer ID :";
            cin>>cId;
            cout<<"\nEnter the name :";
            cin>>name;
            cout<<"\nEnter the age :";
            cin>>age;
            cout<<"\n Address :";
            cin>>add;
            cout<<"\n Gender :";
            cin>>gender;
            cout<<"Your details are saved with us\n"<<endl;
         }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
       static int choice;
       int choice1;
       int back;
       static float charges;

       void trains()
       {
        string trainN[]={"Delhi","Chennai","Lucknow","Mumbai","Indore","Ranchi"};

        for(int a =0;a<6;a++)
        {
           cout<<(a+1)<<".train to"<<trainN[a]<<endl;

        }
        cout<<"\nWelcome to the Indian Railway!"<<endl;
        cout<<"Press the number of the city of which you want to book the Train :";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"____________Welcome to Delhi Railway_________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the trains \n"<<endl;

                cout<<"1. DEL -1806"<<endl;
                cout<<"\t18-09-2023  10:55AM 16hrs Rs. 2300"<<endl;
                

                cout<<"2. DEL -7598"<<endl;
                cout<<"\t19-09-2023  7:30PM 19hrs Rs. 1800"<<endl;

                cout<<"3. DEL -9638"<<endl;
                cout<<"\t20-09-2023  8:00AM 13hrs Rs. 2800"<<endl;

                cout<<"\nSelect the train you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                   charges =2300;
                   cout<<"\nYou have successfully booked the train DEL -  1806"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                  charges =1800;
                   cout<<"\nYou have successfully booked the train DEL -  7598"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;  
                }
                else if(choice1==3)
                {
                  charges =2800;
                   cout<<"\nYou have successfully booked the train DEL -  9638"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;  
                }
                else 
                {
                    cout<<"Invalid input , shifting to the previous menu"<<endl;
                    trains();
                }
                cout<<"press any key to go back to the main menu :"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();

                }

            }
            case 2: 
            {
              cout<<"____________Welcome to Chennai Railway_________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the trains \n"<<endl;

                cout<<"1. CHEN -5890"<<endl;
                cout<<"\t17-09-2023  11:00PM 22hrs Rs. 1845"<<endl;
                

                cout<<"2. CHEN -7598"<<endl;
                cout<<"\t19-09-2023  5:40AM 19hrs Rs. 1950"<<endl;

                cout<<"3. CHEN -9638"<<endl;
                cout<<"\t21-09-2023  9:40AM 20hrs Rs. 2105"<<endl;

                cout<<"\nSelect the train you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                   charges =1845;
                   cout<<"\nYou have successfully booked the train CHEN -  5890"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                  charges =1950;
                   cout<<"\nYou have successfully booked the train CHEN -  7598"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;  
                }
                else if(choice1==3)
                {
                  charges =2105;
                   cout<<"\nYou have successfully booked the train CHNE -  9638"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;  
                }
                else 
                {
                    cout<<"Invalid input , shifting to the previous menu"<<endl;
                    trains();
                }
                cout<<"press any key to go back to the main menu :"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();

                }

  
            }

            case 3:
            {
                cout<<"____________Welcome to Lucknow Railway_________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the trains \n"<<endl;

                cout<<"1. LUCK -1255"<<endl;
                cout<<"\t27-09-2023  14:30AM 09hrs Rs. 1500"<<endl;
                

                

                cout<<"2. LUCK -8973"<<endl;
                cout<<"\t30-09-2023  9:35PM 13hrs Rs. 1769"<<endl;

                cout<<"\nSelect the train you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                   charges =1500;
                   cout<<"\nYou have successfully booked the train LUCK -  1255"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                  charges =1769;
                   cout<<"\nYou have successfully booked the train LUCK -  8973"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;  
                }
                
                else 
                {
                    cout<<"Invalid input , shifting to the previous menu"<<endl;
                    trains();
                }
                cout<<"press any key to go back to the main menu :"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();

                }

            }
            case 4:
            {
                cout<<"____________Welcome to Mumbai Railway_________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the trains \n"<<endl;

                cout<<"1. MUM - 2597"<<endl;
                cout<<"\t15-09-2023  7:55PM 29hrs Rs. 4798"<<endl;
                

                

                cout<<"\nSelect the train you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                   charges =4798;
                   cout<<"\nYou have successfully booked the train MUM -  2597"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;
                }
                
                else 
                {
                    cout<<"Invalid input , shifting to the previous menu"<<endl;
                    trains();
                }
                cout<<"press any key to go back to the main menu :"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();

                }

            }
            case 5:
            {
         
               cout<<"____________Welcome to Indore Railway_________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the trains \n"<<endl;

                cout<<"1. IND -9863"<<endl;
                cout<<"\t17-09-2023  15:40 23hrs Rs. 5506"<<endl;
                

                cout<<"2. IND -8972"<<endl;
                cout<<"\t23-09-2023  11:55PM 20hrs Rs. 6395"<<endl;

                cout<<"\nSelect the train you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                   charges =5506;
                   cout<<"\nYou have successfully booked the train IND -  9863"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                  charges =6395;
                   cout<<"\nYou have successfully booked the train IND -  8972"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;  
                }
                
                else 
                {
                    cout<<"Invalid input , shifting to the previous menu"<<endl;
                    trains();
                }
                cout<<"press any key to go back to the main menu :"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();

                }


            }
            case 6:
            {
               cout<<"____________Welcome to Ranchi Railway_________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the trains \n"<<endl;

                cout<<"1. RAN -5465"<<endl;
                cout<<"\t26-09-2023  5:25PM 28hrs Rs. 3598"<<endl;
                

                cout<<"2. RAN -2898"<<endl;
                cout<<"\t28-09-2023  3:56PM 30hrs Rs. 3368"<<endl;

                cout<<"3. RAN -4687"<<endl;
                cout<<"\t30-09-2023  4:30PM 32hrs Rs. 3156"<<endl;

                cout<<"\nSelect the train you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                   charges =3598;
                   cout<<"\nYou have successfully booked the train RAN -  5465"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                  charges =3368;
                   cout<<"\nYou have successfully booked the train RAN -  2898"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;  
                }
                else if(choice1==3)
                {
                  charges =3156;
                   cout<<"\nYou have successfully booked the train RAN -  4687"<<endl;
                   cout<<"You can go back to menu and take the ticket"<<endl;  
                }
                else 
                {
                    cout<<"Invalid input , shifting to the previous menu"<<endl;
                    trains();
                }
                cout<<"press any key to go back to the main menu :"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();

                }



            }
            default :
            {
                cout<<"invalid input, shifting you to the main menu ! "<<endl;
                mainMenu();
                break; 
            }
        }
       }
};
float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
    public:

    void Bill(){
        string destination=" ";
        ofstream outf("records.txt");
        {
            outf<<" ________________Indian Railway____________"<<endl;
            outf<<"__________________Ticket____________________"<<endl;
            outf<<"____________________________________________"<<endl;

            outf<<"Customer ID:"<<Details::cId<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if(registration::choice==1)
            {
                destination ="Delhi";
            }
            else if(registration::choice==2)
            {
                destination ="Chennai";
            }
            else if(registration::choice==3)
            {
                destination ="Lucknow";
            }
            else if(registration::choice==4)
            {
                destination ="Mumbai";
            }
            else if(registration::choice==5)
            {
                destination ="Indore";
            }
            else if(registration::choice==6)
            {
                destination ="Ranchi";
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Reservation Charges :\t\t"<<registration::charges<<endl;

        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)

            {
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof())
              {
                 ifs.getline(arr,100);
                 cout<<arr<<endl;

              }
            
        }
        ifs.close();
    }
};



void mainMenu()
{
    int lchoice;
    int schoice;
    int back;
    
    cout<<"\t                INDIAN RAILWAY\n"<<endl;
    cout<<"\t________________Main Menu____________"<<endl;

    cout<<"\t_____________________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t\t|" <<endl;

    cout<<"\t|\t Press 1 to add the Customer Details       \t|"<<endl;
    cout<<"\t|\t Press 2 for Ticket Reservation            \t|"<<endl;
    cout<<"\t|\t Press 3 for Tickets and Charges            \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                            \t|"<<endl;
    cout<<"\t\t\t\t\t\t\t\t|" <<endl;
    cout<<"\t____________________________________________________"<<endl;


    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
       case 1:
       {
        cout<<"_________________Customers_________________\n"<<endl;
        d.information();
        cout<<"Press any to go back to Main menu ";
        cin>>back;

        if (back==1)
        {
          mainMenu();
        }
          else
          {
            mainMenu();
          }
             break;
       }


       case 2:
       {
        cout<<"______Book a Ticket using this system_________________\n"<<endl;
        r.trains();
        break;
       }

       case 3:
       cout<<"________GET YOUR TICKET___________\n"<<endl;
       t.Bill();

       cout<<"Your ticket is printed, you can collect it \n"<<endl;
       cout<<"press 1 to display your ticket ";

       cin>>back;

       if (back==1)
       {
         t.dispBill();
         cout<<"Press any key to go back to main menu :";
         cin>>back;
         if(back==1)
         {
            mainMenu();
         }
         else
         {
             mainMenu();
         }
         break;

       }

       case 4:
       {
        cout<<"\n\n\t___________Thank-you__________"<<endl;
        break;
       }
       default:
       {
        cout<<"Invalid input, Please try again!\n"<<endl;
        mainMenu();
        break;
       }

    }
  


}



int main()
{
    Management Mobj;
    return 0;
}