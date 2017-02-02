//
//  main.cpp
//  Cpp
//
//  Created by Rodrigo Pessoa on 2017-01-14.
//  Copyright © 2017 Rpessoa. All rights reserved.
//

#include <iostream>
#include <string>
#include <unordered_map>
#include "Data.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    string input;
    int check = 0;  //temporary variable used to check if item is not found and exit the program
    
    Data dataM;
    
    unordered_map<string, int>dataMap = dataM.getData();
    
    dataMap.insert({{"Code4", 43},{"Code5", 76}});  //including two more elements for testing
    
    cout<<"\n##################################################"<<endl;
    cout<<"##### Welcome to the Data calculator V0.0.1! #####"<<endl;
    cout<<"##################################################"<<endl;
    
    while (check != 1) {
        cout << "Input code" << endl;
        cin >> input;
        unordered_map<string, int>::const_iterator got = dataMap.find(input);
        
        if ( got == dataMap.end() ) {
        check = 1;  //if check equals 1 the program will exit
        cout << "not found"<<endl;
        }
        else {
        cout << got->first << " is " << got->second<<endl;
        }
    }
    
    cout << endl;
    
    return 0;
};

