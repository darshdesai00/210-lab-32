// Lab 33 - Toll Plaza Simulation (branched from Lab 32)
#include <iostream>   // for cout
#include <deque>      // required for std::deque
#include "Car.h"      // Car class provided by instructor
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_LANES = 4;
const int INITIAL_SIZE = 2;

int main(){

    cout << "Initial queue:\n";

    deque<Car> lanes[NUM_LANES]; // created a array 4 lanes

    // filled each lane with 2 starting cars
    for (int i = 0; i < NUM_LANES; i++) {
    for (int j = 0; j < INITIAL_SIZE; j++) {
    lanes[i].push_back(Car());
    }
    }

    // print all lanes in correct format
    for (int i = 0; i < NUM_LANES; i++) {
    cout << "Lane " << (i + 1) << ":\n";

    if (lanes[i].empty()) {
    cout << "    (empty)\n";
    } else {
    for (auto &c : lanes[i]) {
    cout << "    ";
    c.print();
    }
    }
    }

    return 0;
}