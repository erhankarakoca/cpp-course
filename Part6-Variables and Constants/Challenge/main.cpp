#include <iostream>

using namespace std;

int main()
{
   
    cout<< "Welcome to Erhan's Carpet Cleaning Service"<<endl;
    cout<< "==========================================="<<endl;

   
    
    cout<<"Please give the details:"<< endl;
    cout<<"How many small room is going to be cleaned ? : ";;
    
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout<<"How many large room is going to be cleaned ? : ";;
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    cout<< "==========================================="<<endl;

    cout<<"Estimate for carpet cleaning service"<<endl;
    
    const int price_small_room {25};
    cout<< "Charge is for small room: $"<< price_small_room <<endl;
   
    const int price_large_room {35};
    cout<< "Charge is for large room: $"<< price_large_room <<endl;
    
    
    const int tax_rate {6};
    cout<< "Tax rate is %"<< tax_rate <<endl;
        
    double cleaning_cost {0};
    cleaning_cost = price_small_room*number_of_small_rooms + price_large_room*number_of_large_rooms ;
    cout<< "Cleaning cost is " << cleaning_cost <<endl; 
    
    double tax {0};
    tax = cleaning_cost * tax_rate / 100;
    cout<< "Tax is " << tax <<endl; 
    cout<< "==========================================="<<endl;
    cout<< "Total cost is " << cleaning_cost + tax <<endl; 
    
    
    const int validity {30};
    cout<< "Estimates are valid for "<< validity<<" days"  <<endl;
    return 0;
}