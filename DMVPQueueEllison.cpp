/***************************************************************
* Name : DMVPQueueEllison - VSPriorityQEllison.cpp
* Author: Lily Ellison
* Created : 03/03/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: VS 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : An app thatcreates a priority queue of 
*               customers from a vector.
*            Input: Customer numbers and prioritys as elements
*            Ouput: Displays the vectors of customer numbers 
*                   and the info removed from queue
* Academic Honesty: I attest that this is my original work.
* I have not used unauthorized source code, either modified or
* unmodified. I have not given other fellow student(s) access
* to my program.
***************************************************************/


#include <iostream>
#include <queue>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>
#include <time.h>
#include <cstdlib>
#include "Node.h"
using namespace std;

int main() {
    vector<Node> custN; //Vector for customer and priorty info to be added to Priority Queue
    vector<int> people; //Vector for creating people and randomizing them
    int vecSize = 100;  //number of people
    vector<int>::iterator it;  //allows interation through the people vector for displaying it
    int customer;  
    int priority;
    Node e;
    srand(time(0));  //seeds random number generator for priorities

    for (int i = 0; i < vecSize; i++) {  //creates vector of customers
        customer = i;  //numbered 0 - 99
        people.push_back(customer);  //adds each to vector
    }

    cout << "Ordered vector: ";
    for (it = people.begin(); it != people.end(); ++it) {  //displays each item in vector
        cout << " " << *it;
    }

    cout << endl;

    random_shuffle(people.begin(), people.end());  //randomizes the order of the customer numbers in the vector
    
    cout << "Random vector: ";
    for (it = people.begin(); it != people.end(); ++it) {  //displays the randomized vector
        cout << " " << *it;
    }

    cout << endl;

    for (int i = 0; i < vecSize; i++) {  
        e.customer = people.at(i);  //creates Nodes, stored in a vector, to be transfered to the priority queue
        e.priority = priority = rand() % 5 + 1;  //random priority between 1 and 5
        custN.push_back(e);  //adds to vector
    }
        
    auto cmp = [](Node a, Node b) {  //creates a custom way to sort Nodes by comparing priorities
        return a.priority > b.priority;  //creates a list that will print from smallest number in priority field to largest
    };

    priority_queue<Node, vector<Node>, decltype(cmp)> custQ(cmp);  //creates priority queue, organized by priority value instead of customer number
    for (Node x : custN) custQ.push(x);  //adds each item to queue
    while (!custQ.empty()) {
        cout << "Customer number: " << custQ.top().customer << " Priority: " << custQ.top().priority << endl;  //displays Node information
        custQ.pop();  //removes the top so the next Node will display
    }
    cout << endl;
    
    return 0;
}
