#include <iostream>   // for cout
#include <deque>      // required for std::deque
#include "Car.h"      // Car class provided by instructor
#include <cstdlib>
#include <ctime>

using namespace std;

const int INITIAL_SIZE = 2;

int main(){

    cout << "Begining The Toll Booth Simulation\n";

    deque<Car> lane; // added a makeshift lane for the toll

    for (int i = 0; i < INITIAL_SIZE; i++) { // added INITIAL_SIZE cars
        lane.push_back(Car());

    }

    // print initial queue
    cout << "Initial queue:\n";
    for (auto &c : lane) {
        cout << "    ";
        c.print();     
    }
    cout << endl; 

    cout << "Front car: " ; // access front and back
    lane.front().print();
    
    cout << "Back car: ";
    lane.back().print();
    cout << endl;

    return 0;

    // start simulation
    srand(time(0)); // seed randome generator
    int timetep = 1;

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
           car incoming;
           lane.push_back
           cout << " joined lane: ";
           incoming.print();
        }

        // below prints the updated queue
        cout << "Queue:\n";
        if (lane.empty()){
            cout << " Empty ";
        } else {
        }

        }




        
        
        
    }
}    




