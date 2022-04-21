//
//  main.cpp
//  defaultArguments
//
//  Created by Jean Pascal Cyusa Shyaka on 4/20/22.
//

#include <iostream>
#include <iomanip>

using namespace std;

// function prototypes
double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix) {
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}



int main() {
    double cost {};
    cost = calc_cost(100.0, 0.08, 4.25);
    
    cout << fixed << setprecision(2);
    
    cout << " Cost is " << cost << endl;          // will use 100.0 + 0.08 + 4.25
    
    cost = calc_cost(100.0, 0.08);
    cout << " Cost is " << cost << endl;          // will use 100.0 + 0.08 + 3.5
    
    cost = calc_cost(200.0);
    cout << " Cost is " << cost << endl;          // use 200.0 + defaults
    
    cost = calc_cost();
    cout << " Cost is " << cost << endl;          // use defaults
    
    greeting("Glen Jones", "Dr.");
    greeting("Pascal Cyusa", "Prof.", "P.h.D");
    greeting("Mario Cyubahiro", "Mast");
    greeting("Marie Hosée");




    cout << endl;
    return 0;
}
