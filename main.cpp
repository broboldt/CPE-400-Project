/*
	File Name: main.cpp
	Written by Brodie Boldt
	Start date: 11/19/18
	Last edit made: 11/19/18
	Version: 0.1
*/

#include <iostream>
#include <vector>
#include <string>

#include "node.h"

using namespace std;

int main ()
{
	Node nad;
	
	cout << "failState: " << nad.getFailState() << endl;
	cout << "visited: " << nad.getVisited() << endl;
	cout << "start: " << nad.getStart() << endl;
	cout << "end: " << nad.getEnd() << endl;
	cout << "probVal: " << nad.getProbVal() << endl;
	cout << "numConnections: " << nad.getNumConnections() << endl;
	cout << "currentNodeWeight: " << nad.getCurrentNodeWeight() << endl;
	//cout << "connectingNodes: " << nad.getConnectingNodes() << endl;
	cout << "nodeID: " << nad.getNodeID() << endl;

	
	return 0;
}
