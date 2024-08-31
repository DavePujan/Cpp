#include <iostream>
using namespace std;

int main()
{
    int day;
    cin>>day;

    switch(day){

        case 1:
            cout<<"monday";
            break;
        case 2:
            cout<<"tuesay";
            break;
        case 3:
            cout<<"wed";
            break;
        case 4:
            cout<<"thurs";
            break;
        case 5:
            cout<<"fri";
            break;
        case 6:
            cout<<"saturday";
            break;
        case 7:
            cout<<"sunday";
            break;
        default:
            cout<<"Enter between 1 to 7";
    }
    return 0;
}