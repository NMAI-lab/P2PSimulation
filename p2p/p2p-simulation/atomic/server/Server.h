/*******************************************************************
*
*  DESCRIPTION: Atomic Model :
*  Server : maintains a mock-up Server for the whole network and responds to queries
*
*  AUTHOR: Alan
*
*
*******************************************************************/
/*handle duplicate inclusion of this header*/
#ifndef __DB_H
#define __DB_H
#define VERBOSE true

/** include files **/
#include "atomic.h"  // class Atomic
#include "..\complexmessages.h" // functions to manage "coded" messages between components
#include "..\..\lib\graph-c++.h" // classes to handle the graph (network)
#include "DBGraph.h"
#include "SGraph.h"
#include <queue>
#include<map>

//#include "EventQueue.h"
//#include <queue> //STL for queue template class
//#include <set>
/** declarations **/
class Server: public Atomic
{
public:


	Server( const string &name = "Server" ) ;	 // Default constructor

	~Server();					// Destructor

	virtual string className() const
		{return "Server";};


protected:
	Model &initFunction()
		{
		return *this;
		};

	Model &externalFunction( const ExternalMessage & );

	Model &internalFunction( const InternalMessage & );

	Model &outputFunction( const InternalMessage & );

private:

	/**************** PORTS *********************************************/
    const Port &peer_in ; // for getting peer id in : a peerid coming in means the peer receives the query associated with the id
	const Port &query_in; // for updating the routing table (adding a query / msg id association)


//	const Port &publish;




	//outputs
	Port &queryhit ; // queryhit : docid + msgid
	/*******************************************************************/

	// table to associate message Ids to peers (conceptually for routing responses back to the peer that originated the query).
	map<int,int > routingTable;

	//GraphInt* querydoc; // graph of query - document associations (what query matches what document)
	DBGraph* peerdoc; // graph of peer-document associations (who stores what) + doc-doc links.
	SGraph* serverdoc;//graph of query - document associations (what query matches what document) + doc - doc links.
	SGraph* datadoc;
	queue<long> QueryhitQ; //queue of queryhits that need to be output

	bool routing;
	int to_peer; //the peer that the next output is meant for
	int nextOutput; // next output

	//map<float, Time> a time stamp for the last seen message for a given id : the idea is that after a while we're not routing the message anymore and can forget about which nodes the message has visited.

	//Time lastpurge // stores the time of the last purge. If this occured more than <purgeinterval> ago we should re-purge the routingtable of old messages



};	// class Server


#endif    //__DB_H
