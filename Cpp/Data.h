//
//  Data.h
//  Cpp
//
//  Created by Rodrigo Pessoa on 2017-01-30.
//  Copyright © 2017 Rpessoa. All rights reserved.
//

#ifndef Data_h
#define Data_h
#include <unordered_map>
#include <string>
using namespace std;

class Data {
    unordered_map<string, int>map{
        {"Code1", 12},
        {"Code2", 34},
        {"Code3", 90},
        {"Code7", 76}
    };
public:
    
    unordered_map<string, int> getData();
};

#endif /* Data_h */
