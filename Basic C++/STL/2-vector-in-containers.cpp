#include <iostream>
using namespace std;

void explainVector(){

    vector<int> v;  // create {}

    v.push_back(1); // {} --> {1}
    v.emplace_back(2); // {1 } --> {1,2} (faster than push_back)

    //same as for pairs
    vector< pair<int,int> > vec;
    vec.push_back({1,2}); // you have to add {} for pairs in pushback
    vec.emplace_back(1,2);  // it will assume that you have to add 1and 2 inside vector without {}.

    //vector<int> v(size,instance);
    vector<int> v(5,100);  //{100,100,100,100,100}

    //to copy any vector to any another vector do this
    vector<int> v2(v);

    // to access the vector do this
    cout<< v[0] << "or" << v.at(1) <<endl;
     
     //now know about iterator from video.
}

int main()
{
    
    return 0;
}