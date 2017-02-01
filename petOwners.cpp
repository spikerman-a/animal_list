//
//  petOwners.cpp
//  animals
//
//  Created by Alyxandra Spikerman on 12/5/16.
//  Copyright © 2016 Embedded Design. All rights reserved.
//

#include "petOwners.h"
#include <iostream>
using namespace std;

/*
 display function: displays the inputted directory
 */
void petOwners::display(struct directory* head){
    struct directory* current = head;
    
    while (current != NULL) {
        cout << current->owner << " is the owner of a(n) " << current->petType << endl;
        current = current->next;
    }
}

/*
 display function: displays the inputted directory
 addData function: adds new node to inputted directory and
 returns the updated directory
 */
struct directory* petOwners::addData(struct directory* head, string oName, string pet){
    newNode = new struct directory;
    newNode->owner = oName;
    newNode->petType = pet;
    
    //adds a node to the beginning of the linked list
    if (head == NULL) {
        head = newNode;
        newNode->next = NULL;
    } else {
        newNode->next = head;
        head = newNode;
    }
    return head;
}


