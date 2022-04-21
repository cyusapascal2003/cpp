//
//  main.cpp
//  arrays&Functions
//
//  Created by Jean Pascal Cyusa Shyaka on 4/21/22.
//

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


using namespace std;

// function prototypes
void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[], size_t size) {        // const
    for (size_t i{0}; i<size; i++)
        cout << setw(3) << arr[i] << " ";
    cout << endl;
}

// set each array element to value

void set_array(int arr[], size_t size, int value) {
    for (size_t i{0}; i<size; i++)
        arr[i] = value;
}



int main() {
    int my_scores [] {100,98,34,76,89};
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
    
    
    cout << endl;
    return 0;
}
