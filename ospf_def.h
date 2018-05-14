/*****************************************************************************************************************
 * Defines all  structures and function decleartion  used in current project 
 * 
 * Done by Jayesh J 
 *
 * ****************************************************************************************************************/



/* Structure Defination */
typedef struct neigh {
	int  id ; /* uniqually Identifies a neighbour */
	struct node * head;
        struct neigh * next;
	struct neigh * prev;
}neigh;

typedef struct node {
	char addr[16];
	int cost ;
	struct neigh *  parent ;
	struct node * next;
	struct node * prev;
}

/*********************************************************/




