#include "general.h"

template <class TYPE> class Node
{
/*
Notes:
This Node class will be a general Node object to be used in many different data structures. 
TYPE is the type of the data stored in the Node.
*/

    void addItem(TYPE dataItem) // add a pointer to the vector to point to data.
    {
        this->Data = dataItem;
    }
    Node * removePointer(Node search) // remove a pointer from the vector. returns a nullptr if the item is not in the vector. 
    {
        // search for the Node in the vector
        // remove the Node from vector if the Node is in the list
        // return nullptr if the Node is not in the vector

    }


private:

    TYPE data; // This is the data that is stored in the Node. 
    vector<NODE *> nodePointers // This vector will hold different numbers of items depending on the data structure being used. 


};