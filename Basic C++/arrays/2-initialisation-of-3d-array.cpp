#include <iostream>
using namespace std;

int main()
{
    int arr[2][2][2],i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                cin>> arr[i][j][k];
            }cout<<endl;
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
               cout<< arr[i][j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}