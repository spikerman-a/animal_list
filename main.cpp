//
//  main.cpp
//  animals
//
//  Created by Alyxandra Spikerman on 12/3/16.
//  Copyright © 2016 Embedded Design. All rights reserved.
//

#include <iostream>
#include "petOwners.h"

using namespace std;

int main() {
	//declares main variables
    struct directory* head;
    head = new struct directory;
    head = NULL; //sets the original struct value (i.e. as NULL)
    string owner;
    string pet;
    petOwners allOwners;
	
	int keepGoing = 1; //variable for adding as many data nodes as wanted
	
	while(keepGoing){ //while keepGoing == 1
		cout << "Please give the owner's name: ";
		cin >> owner;
		cout << "Please give the pet type: ";
		cin >> pet;
		head = allOwners.addData(head, owner, pet);
		cout << "Would you like to add another? (1 for yes, 0 for no) ";
		cin >> keepGoing;
	}
	//displays final, updated linked list
	allOwners.display(head);
    
    return 0;
}
