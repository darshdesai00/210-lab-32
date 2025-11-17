// Lab 33 - Toll Plaza Simulation (branched from Lab 32)
#include <iostream>   // for cout
#include <deque>      // required for std::deque
#include "Car.h"      // Car class provided by instructor
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_LANES = 4;
const int INITIAL_SIZE = 2;

int main() {

    srand(time(0)); // seed random

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


    // reintroducing simulation logic (20 time steps)
    for (int t = 1; t <= 20; t++) {

    cout << "\nTime: " << t << "\n";

    // one operation PER LANE
    for (int lane = 0; lane < NUM_LANES; lane++) {

    int r = rand() % 100; // 0–99

    // 50% pay, 50% join
    if (r < 50) {

    // PAY if lane not empty
    if (!lanes[lane].empty()) {
    Car paying = lanes[lane].front();
    lanes[lane].pop_front();
    cout << "Lane: " << (lane + 1) << " Paid: ";
    paying.print();
    } else {

    // lane empty
    Car incoming;
    lanes[lane].push_back(incoming);
    cout << "Lane: " << (lane + 1) << " Joined: ";
    incoming.print();
    }
    }
    else {
    // JOIN new car
    Car incoming;
    lanes[lane].push_back(incoming);
    cout << "Lane: " << (lane + 1) << " Joined: ";
    incoming.print();
    }
    } 
    // print the plaza operations
    for (int i = 0; i < NUM_LANES; i++) {

    cout << "Lane " << (i + 1) << " Queue:\n";

    if (lanes[i].empty()) {
    cout << "    empty\n";
    } else {
    for (auto &c : lanes[i]) {
    cout << "    ";
    c.print();
    }
    }
    } // end queue-print loop
    } // end 20-step loop
    
    return 0;
}
