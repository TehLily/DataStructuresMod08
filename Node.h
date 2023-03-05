/***************************************************************
* Name : DMVPQueueEllison - Node.h
* Author: Lily Ellison
* Created : 03/03/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: VS 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : Header for element class for an app that uses
*               creates a priority queue from a vector.          
*            Input: None
*            Ouput: None
* Academic Honesty: I attest that this is my original work.
* I have not used unauthorized source code, either modified or
* unmodified. I have not given other fellow student(s) access
* to my program.
***************************************************************/

#include <iostream>
using namespace std;
#pragma once

class Node {
    
public:
    Node(int = 0, int = 0);
    int customer;
    int priority;
};

