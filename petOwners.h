//
//  petOwners.h
//  animals
//
//  Created by Alyxandra Spikerman on 12/5/16.
//  Copyright © 2016 Embedded Design. All rights reserved.
//

#ifndef petOwners_h
#define petOwners_h

#include <stdio.h>
#include <iostream>

using namespace std;

/*
 Declares new struct directory and it's two data points:
 @param owner: string value of owner name
 @param petType: string value of pet type
 @param next: pointer to next node in struct
 */
struct directory {
    string owner;
    string petType;
    struct directory* next;
};

/*
 Declares new class petOwners 
 @param newNode: struct directory* value for new nodes

 display function: displays the inputted directory 
 addData function: adds new node to inputted directory and 
    returns the updated directory 
 */
class petOwners {
private:
    struct directory* newNode;
public:
    void display(struct directory*);
    struct directory* addData(struct directory*, string, string);
};

#endif
