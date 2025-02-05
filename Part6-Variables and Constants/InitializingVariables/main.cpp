#include <iostream>

using namespace std;

int main()
{
    int width_room {0};
    int height_room {0};
    
    cout << "Enter the width of the room: ";
    cin  >> width_room ;
    
    cout << "Enter the height of the room: ";
    cin  >> height_room ;
    
    cout << "The area of the room is " << width_room * height_room << endl; 
}