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

    // print data of each line
    cout << "Current Line Status:\n";
    for (int i = 0; i < NUM_LANES; i++) {
        cout << "Lane " << (i + 1) << ":\n";
        for (auto &c : lanes) {
            cout << "    ";
            c.print();    
        }
    }

    // Test accessing front and back of lane 1
    cout << "\nTesting the front/back of Lane 1:\n";; 
    lanes[0].front().print();
    lanes[0].back().print();
    
    // add another car to lane 2
    cout << "\nAdding a second car to Lane 2\n";
    lanes[1].push_back(Car());

    cout << "Lane 2 now has:\n";
    for (auto &c : lanes[1]) {
        cout << "    ";
        c.print();
    }
    

    // Remove the front car from Lane 3
    cout << "\nRemoving front car from Lane 3...\n";
    if (!lanes[2].empty()) {
    Car leaving = lanes[2].front();
    lanes[2].pop_front();
    cout << "Removed: ";
    leaving.print();
    }
    
   