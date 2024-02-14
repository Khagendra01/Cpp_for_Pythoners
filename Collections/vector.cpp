#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> intvector;

    for (int i=0; i<50; i++){
        intvector.push_back(i*i);
    }

    intvector.pop_back();

    intvector[40] = 300;

    intvector.clear();

    return 0;
}