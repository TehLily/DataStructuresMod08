/***************************************************************
* Name : DMVPQueueEllison - Node.cpp
* Author: Lily Ellison
* Created : 03/03/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: VS 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : Element class for an app that creates a 
*               priority queue of customers from a vector.
*            Input: Customers numbers and priorties to be 
*                   assigned to elements
*            Ouput: Returns requested info (customer numbers 
*                   and priorities)
* Academic Honesty: I attest that this is my original work.
* I have not used unauthorized source code, either modified or
* unmodified. I have not given other fellow student(s) access
* to my program.
***************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Node.h"

Node::Node(int c, int p) {  //constructor
    customer = c;
    priority = p;
}
