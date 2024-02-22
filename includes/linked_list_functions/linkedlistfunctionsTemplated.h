#ifndef LINKEDLISTFUNCTIONSTEMPLATED_H
#define LINKEDLISTFUNCTIONSTEMPLATED_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <assert.h>
#include "../node/node.h"

//Linked List General Functions:
template <typename T>
void _print_list(node<T>* head){
    node<T>* temp;
    temp = head;
    assert(temp != NULL);
    while (temp != NULL){
        cout << *temp;
        temp = temp->_next;
    }
    cout << "NULL";
}

//recursive fun! :)
template <typename T>
void _print_list_backwards(node<T> *head){
    // base case
    if (head == NULL){
        return;
    }
    else {
        _print_list_backwards(head->_next);
        cout << *head;
    }
}

//return ptr to key or NULL
template <typename T>
node<T>* _search_list(node<T>* head,
                            T key){
    node<T>* temp;
    temp = head;
    assert(temp != NULL);
    while (temp != NULL){
        if (temp->_item == key){
            return temp;
        }
        temp = temp->_next;
    }
    return NULL;
}

//insert additional node at head of list
template <typename T>
node<T>* _insert_head(node<T> *&head,
                            T insert_this){
    node<T>* newNode = new node<T>(insert_this, head); // old head is _next
    // update head
    head = newNode;
    
    return head;
}

//insert after ptr: insert head if marker null
template <typename T>
node<T>* _insert_after(node<T>*& head,
                                node<T> *after_this,
                                T insert_this){
    // case for empty list
    if (head == NULL){
        return _insert_head(head, insert_this);
    }
    else if (after_this == NULL){
        // create new node after head
        node<T>* newNode = new node<T>(insert_this);
        // connect head to newNode
        head->_next = newNode;
        return newNode;
    }
    else {
        // case if list has at least two nodes
        // create new node connected to node after after_this
        node<T>* newNode = new node<T>(insert_this, after_this->_next);
        after_this->_next = newNode;
        return newNode;
    }
}

//insert before ptr: insert head if marker null
template <typename T>
node<T>* _insert_before(node<T>*& head,
                                node<T>* before_this,
                                T insert_this){
    // case for inserting at head of list
    if (head == NULL || before_this == head || before_this == NULL){
        return _insert_head(head, insert_this);
    }
    else {
        // case for inserting not at head
        node<T>* newNode = new node<T>(insert_this, before_this);
        // loop up to before_this to find front node to connect to newNode
        node<T>* prevNode;
        prevNode = head;
        while (prevNode->_next != before_this){
            prevNode = prevNode->_next;
        }
        // connect prevNode to newNode
        prevNode->_next = newNode;
        return newNode;
    }
}

// //ptr to previous node
// template <typename T>
// node<T>* _previous_node(node<T>* prev_to_this);

// //delete, return item
// template <typename T>
// T _delete_node(node<T>*& head, node<T>* delete_this);

// //duplicate the list...
// template <typename T>
// node<T>* _copy_list(node<T>* head);

// //duplicate the list, return pointer to last node in dest... 
// //     use this function in your queue big three 
// template <typename T>
// node<T> *_copy_list(node<T> *&dest, node<T> *src);



// //delete all the nodes
// template <typename T>
// void _clear_list(node<T>*& head);

// //_item at this position
// template <typename T>
// T& _at(node<T>* head, int pos);

#endif