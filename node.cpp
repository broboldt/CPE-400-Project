/*
	File Name: node.cpp
	Written by Brodie Boldt
	Start date: 11/15/18

	Edit dates:
		11/19/18 -	
		
		11/27/18 -	changed setConnecting function to
					use a for loop
					
		11/30/18 - 	changed probVal from false to 0.0 as it is not a bool
		
		12/01/18 -	commented out getConnectingNodes and setConnectingnodes
					since connectingNodes is now public
	
	Version: 0.94
*/

#include <iostream>
#include <vector>
#include <string>

#include "node.h"

using namespace std;

/* Constructors */
// Default
Node::Node()
{
	failState 			= true;	// false means the node has a failure
	visited 			= false;
	start 				= false;
	end 				= false;
	probVal 			= 0.0;
	numConnections 		= 0;
	currentNodeWeight 	= 2147483647;	// highest 32-bit integer value
	// connectingNodes does not need to be initialized
	nodeID 					= "0";
}


// Destructor, nothing needs to be deleted, so it is left empty
Node::~Node() {
	
}


/* Start getter functions */
bool Node::getFailState() const {
	return failState;
}

bool Node::getVisited() const {
	return visited;
}

bool Node::getStart() const {
	return start;
}

bool Node::getEnd() const {
	return end;
}

float Node::getProbVal() const {
	return probVal;
}

int Node::getNumConnections() const {
	return numConnections;
}

int Node::getCurrentNodeWeight() const {
	return currentNodeWeight;
}


// not necessary since connectingNodes was made public in the header for easier access
/*
vector <nodeConnection> Node::getConnectingNodes() const {
	return connectingNodes;
}
*/



string Node::getNodeID() const {
	return nodeID;
}
/* End getter functions */


/* Start setter functions */
void Node::setFailState(bool newState){
	failState = newState;
}

void Node::setVisited(bool newVisited) {
	visited = newVisited;
}

void Node::setStart(bool newStart) {
	start = newStart;
}

void Node::setEnd(bool newEnd) {
	end = newEnd;
}

void Node::setProbVal(float newProbVal) {
	probVal = newProbVal;
}

void Node::setNumConnections(int newNumConnections) {
	numConnections = newNumConnections;
}

void Node::setCurrentNodeWeight(int newCurrentNodeWeight) {
	currentNodeWeight = newCurrentNodeWeight;
}


// not necessary since connectingNodes was made public in the header for easier access
/*
void Node::setConnectingNodes(vector <nodeConnection> newConnectingNodes) {
	for (int i = 0; i < newConnectingNodes.size(); i++)
	{
		connectingNodes.push_back( newConnectingNodes[i] );
	}
}
*/


void Node::setNodeID(string newStringID) {
	nodeID = newStringID;
}
/* End setter functions */
