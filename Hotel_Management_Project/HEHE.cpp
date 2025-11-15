#include<iostream>
using namespace std;

int main(){

    int Quant,room_data;

    int Choice;
    // Quantity
    int Qroom=0, Q1BHK=0,Q2BHK=0,Q3BHK=0;
    int Qpasta=0,Qnoodles=0,Qshake=0,Qpaneer=0,Qburger=0;
    // Food items sold
    int Sroom=0;
    int Spasta=0,Snoodles=0,Sburger=0,Sshake=0,Spaneer=0;
    // Total price of items
    int total_room=0;
    int total_pasta=0,total_noodles=0,total_burger=0,total_shake=0,total_paneer=0;
    
    cout<<"\n\t Quantity of an item";
    cout<<"\n Rooms available: ";
    cin>>Qroom;
    cout<<"1BHK \n2BHK \n3BHK"<<endl;
    cout<<"Enter room choice (eg.1,2,3) ";
    cin>>room_data;
    if (room_data=1)
    {
       cout<<"Oppted 1BHK"<<endl;
    }
    
    else if (room_data=2)
    {
        
        cout<<"Oppted 2BHK"<<endl;
    }
    else if (room_data=3)
    {
        cout<<"Oppted 3BHK"<<endl;
    }
    else{
        cout<<"Entered Incorrect Choice"<<endl;
    }
    cout<<"";
    cout<<"Quantity of Pasta: ";
    cin>>Qpasta;
    cout<<"Quantity of noodles: ";
    cin>>Qnoodles;
    cout<<"Quantity of burger: ";
    cin>>Qburger;
    cout<<"Quantity of paneer: ";
    cin>>Qpaneer;
    cout<<"Quantity of shake: ";
    cin>>Qshake;
    
    // Menu option 
    cout<<"\n\t\t\t Please select an item from menu options: ";
    cout<<"\n\n1)Rooms";
    cout<<"\n2)  **************Food Menu************** "<<endl <<"**********Chinese***********";
    cout<<"\n3)  Pasta";
    cout<<"\n4)  noodles";
    cout<<"\n5)  Burger";
    cout<<"\n6)  *************Drinks and Beverages*************";
    cout<<"\n7)  Coca Cola";
    cout<<"\n8)  Milk Shake";
    cout<<"\n9)  Choclate Shake";
    cout<<"\n10)  Hot Coffee";
    cout<<"\n11)  Cold Coffee";
    cout<<"\n12)  Paneer";                 
    cout<<"\n13)  Info about Sales and Collection";
    cout<<"\n14)  Exit";
   
    cout<<"\n\n Enter your choice: ";
    cin>>Choice;

    switch (Choice)
    {
        // Rooms 
    case 1:
        cout<<"\n\n Enter number of room you want: ";
        cin>>Quant;
        cout<<"\n1 1BHk)";
        if (Qroom-Sroom >= Quant)
        {
            Sroom=Sroom+Quant;
            total_room = total_room+Quant*1200;
            cout<<"\n\n\t\t"<<Quant<<" rooms have been alloted to you !";
        }
        else {
            cout<<"\n\tOnly "<<Qroom-Sroom<<" Rooms remaining in hotel";
        }
        break;
        //  Pasta condition
        case 2:
        cout<<"\n\n Enter plate of Pasta Quantity: ";
        cin>>Quant;
        if (Qpasta-Spasta >= Quant)
        {
            Spasta=Spasta+Quant;
            total_pasta = total_pasta+Quant*200;
            cout<<"\n\n\t\t"<<Quant<<"Pasta is the order!";
        }
        else {
            cout<<"\n\tOnly "<<Qpasta-Spasta<<" Pasta remaining in hotel";
        }
        break;
        // Noodles
        case 3:
        cout<<"\n\n Enter number of plate of Noodles you want: ";
        cin>>Quant;
        if (Qnoodles-Snoodles >= Quant)
        {
            Snoodles=Snoodles+Quant;
            total_noodles  = total_noodles+Quant*90;
            cout<<"\n\n\t\t"<<Quant<<"Noodles is the order!";
        }
        else {
            cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Noodles remaining in hotel";
        }
        break;
        // Burger
        case 4:
        cout<<"\n\n Enter number of Burger you want: ";
        cin>>Quant;
        if (Qburger-Sburger >= Quant)
        {
            Sburger=Sburger+Quant;
            total_burger  = total_burger+Quant*80;
            cout<<"\n\n\t\t"<<Quant<<"Burger is the order!";
        }
        else {
            cout<<"\n\tOnly "<<Qburger-Sburger<<" Burger remaining in hotel";
        }
        break;
        // Shake
        case 5:
        cout<<"\n\n Enter number of Shake you want ";
        cin>>Quant;
        if (Qshake-Sshake>= Quant)
        {
            Sshake=Sshake+Quant;
            total_shake  = total_shake+Quant*120;
            cout<<"\n\n\t\t"<<Quant<<"Shake is the order!";
        }
        else {
            cout<<"\n\tOnly "<<Qshake-Sshake<<" Shake remaining in hotel";
        }
        break;
        // Paneer
        case 6:
        cout<<"\n\n Enter number of plate of Paneer you want ";
        cin>>Quant;
        if (Qpaneer-Spaneer>= Quant)
        {
            Spaneer=Spaneer>= Quant;
            total_paneer  = total_paneer+Quant*120;
            cout<<"\n\n\t\t"<<Quant<<" Paneer is the order!";
        }
        else {
            cout<<"\n\tOnly "<<Qpaneer-Spaneer<<" Paneer remaining in hotel";
        }
        break;
          
    default:
        break;
    }

}

