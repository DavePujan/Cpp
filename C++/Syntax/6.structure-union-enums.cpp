#include <iostream>
using namespace std;

struct employee
{
    //struct allocates memory as the sum of all the datatypes it is storing like 4+1+4 =9 , so total 9 bytes memory will be allocated to this structure.
    /* data */
    int id; //4
    char favChar; //1
    float salary; //4
};

union money
{
    //in case of union it will only allocates memory how much the maxest bytes will be take by the datatype. means in our case from the 1,4,4 --> 4 is the maxest memory which is used by the datatype so only 4 bytes of the memory will be allocated to this union.

    // so from this three you can only use only one because the memory will be shared among them.
    /* data */
    int rice;
    char car;
    float pounds;
};

typedef struct student
{
    /* data */
    int sid;
    int name;
} st; // we can give alias to our structure like this


int main()
{
    struct employee harry;
    harry.id = 1;
    harry.favChar = 'c';
    harry.salary = 12000;

    cout<<harry.salary<<endl;

    st pujan;
    pujan.sid = 34;
    pujan.name= 'pujan';

    union money m1;
    m1.rice =34;
    m1.car = 'c';
    cout<<m1.rice<<endl;

    enum Meal{ breakfast, lunch, dinner};
    cout<<breakfast<<" "<<lunch<<" "<<dinner<<endl;
    return 0;
}