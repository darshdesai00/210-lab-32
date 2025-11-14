#include <iostream>   // for cout
#include <deque>      // required for std::deque
#include "Car.h"      // Car class provided by instructor
#include <cstdlib>
#include <ctime>
using namespace std;

const int INITIAL_SIZE = 2

int main(){
    cout << "Begining The Toll Booth Simulation\n";

    deque<Car> lane; // added a makeshift lane for the toll

    for (int i - 0; i < INITIAL_SIZE;) { // added INITIAL_SIZE cars
        lane.pushback(Car());

    }

    // print initial queue
    cout << "Initial queue:\n";
    for (auto &c : lane) {
        cout << "    ";
        c.print();     
    }

    cout << "Front car: " ; // access front and back
    lane.front().print();
    
    cout << "Back car: ";
    lane.back().print

    return 0;
}    




