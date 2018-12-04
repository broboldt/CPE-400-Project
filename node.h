/*
	File Name: node.h
	Written by Brodie Boldt
	Start date: 11/15/18
	
	Edit dates:
		11/19/18 -	
		
		11/27/18 -	made vector public for easier access
		
		11/30/18 -	commented out getConnectingNodes() since the vector is now public
		
		12/01/18 -	Jared added ifndef/define
		
		12/03/18 -	final pass before submission
					removed commented functions that were not necessary
					added more descriptions to some private variables
					upgrade to 1.0
	
	Version: 1.0
*/

#ifndef NODE_H_
#define NODE_H_

#include <iostream>
#include <vector>
#include <string>

using namespace std;
//using std::vector;
//using std::string;

struct nodeConnection;

class Node
{
	public:
		/* Constructors */
        // Default
        Node();
        
        // Destructor
        ~Node();
		
		// getters
		bool getFailState() const;
		bool getVisited() const;
		bool getStart() const;
		bool getEnd() const;
		float getProbVal() const;
		int getNumConnections() const;
		int getCurrentNodeWeight() const;
		string getNodeID() const;
		
		// setters
		void setFailState(bool);
		void setVisited(bool);
		void setStart(bool);
		void setEnd(bool);
		void setProbVal(float);
		void setNumConnections(int);
		void setCurrentNodeWeight(int);
		void setNodeID(string);
		
		// variables
		vector <nodeConnection> connectingNodes;

	private:
		bool failState;			// false means the node has a failure
		bool visited;
		bool start;				// inidcates if this specific node is the starting one
		bool end;				// indicates if this specific node is the ending one
		float probVal;			// probability value of the node failing
		int numConnections;		// amount of connections that the node has
		int currentNodeWeight;
		string nodeID;

};

struct nodeConnection
{
	Node *nextNode;
	string id;
	int weight;
};

#endif
