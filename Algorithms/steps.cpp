#include <iostream>

using namespace std;


int countSteps(int nSteps)
{
        static int nPoss = 0;

        if(nSteps<1){
                nPoss += 0;
                return nPoss;
        }
        if(nSteps == 1){
                nPoss += 1;
        }
        if(nSteps == 2){
                nPoss += 2;
        }
        if(nSteps == 3 || nPoss == 0){
                nPoss += 3;
        }

        cout<< "nPoss" << nPoss << endl;
        cout << "nSteps" << nSteps <<endl;
        countSteps(nSteps-3);

        return nPoss;
}

int main()
{
        int numSteps = 0;
        cout << "Please enter the number of steps:";
        cin >> numSteps;
        int numPoss= countSteps(numSteps);
        cout << "Total Number of possibilities:" << numPoss <<endl;
}
