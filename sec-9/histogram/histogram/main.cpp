//
//  main.cpp
//  histogram
//
//  Created by Jean Pascal Cyusa Shyaka on 4/7/22.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "\n\t====== THE HISTOGRAM APP =====\n\n";
    
    int num_items {};
    cout << "How many data items do you have? "; cin >> num_items;
    
    vector<int> data {}; 
    
    for (int i {1}; i<=num_items; ++i) {
        int data_item {};
        cout << "\nEnter data item " << i << ": "; cin >> data_item;
        data.push_back(data_item);
    }
    
    cout << "\n\tHistogram\n\n";

    for (auto val : data) {
        for (int i {1}; i<=val; ++i) {
            if (i % 5==0) {
                cout << "*";
            } else {
                cout << "-";
            }
        }
    cout << endl;
    }
    
    
    return 0;
}
