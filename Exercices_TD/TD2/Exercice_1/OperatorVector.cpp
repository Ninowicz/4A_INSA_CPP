#include "OperatorVector.h"

using namespace std;


    
ostream& operator<<(ostream& os, const vector<int>& v){
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]\n";
    return os;  
}