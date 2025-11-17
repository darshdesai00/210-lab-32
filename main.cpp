// Lab 33 - Toll Plaza Simulation (branched from Lab 32)
#include <iostream>   // for cout
#include <deque>      // required for std::deque
#include "Car.h"      // Car class provided by instructor
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_LANES = 4;

int main(){

    cout << "Testing multi-lane plaza structure\n\n";

    deque<Car> lanes[NUM_LANES]; // created a array 4 lanes

    cout << "Adding test cars to each lane...\n";
    for (int i = 0; i < NUM_LANES; i++) { // added INITIAL_SIZE cars
        lanes[i].push_back(Car()); // pushes a test car

    }

    // print initial queue
    cout << "Initial queue:\n";
    for (int i = 0; i < NUM_LANES; i++) {
    cout << "Lane " << (i + 1) << ":\n";
    for (auto &c : lanes) {
        cout << "    ";
        c.print();     
    }
    }

    cout << "Front car: " ; // access front and back
    lane.front().print();
    
    cout << "Back car: ";
    lane.back().print();
    cout << endl;

    // start simulation
    srand(time(0)); // seed randome generator
    int timeStep = 1;

    // loop structure
    while (!lane.empty()){
        cout << "\nTime: " << timeStep << " Operation: ";

        // random 0-99 
        int r = rand() % 100; 

        if (r < 55) {
        // below the car is paying and leaves the front of the line (55%)
           Car paying = lane.front(); 
           lane.pop_front();
           cout << "Payment Complete: ";
           paying.print();
        } else {
        // below a new car joins (45%)
           Car incoming;
           lane.push_back(incoming);
           cout << " joined lane: ";
           incoming.print();
        }

        // below prints the updated queue
        cout << "Queue:\n";
        if (lane.empty()){
            cout << " Empty ";
        } 
        else {
            for (auto &c : lane) {
                cout << "   ";
                c.print();
            }
        }

        timeStep++;
    }

    return 0;
}
