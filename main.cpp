#include <iostream>
#include <iomanip>
#include <string>
#include "includes/linked_list_functions/linkedlistfunctionsTemplated.h"
#include "includes/node/node.h"
#include "includes/stack/MyStack.h"
#include "includes/queue/MyQueue.h"


using namespace std;

int main(int argv, char** argc) {
    // cout << "\n\n"
    //      << endl;

    // cout << "\n\n\n=====================" << endl;

    // test stack fxns
    // cout << "Testing big 3:\n\n";
    // Stack<int> s1;
    // s1.push(5);
    // s1.push(10);
    // s1.push(15);

    // cout << "s1: " << &s1 << "\n" << s1 << "\n\n";

    // Stack<int> s2(s1);
    // cout << "s2: " << &s2 << "\n" << s2 << "\n\n";

    // s2.push(20);
    // s1.pop();
    // s1.pop();
    // cout << "s1: " << &s1 << " | " << s1 << "\ns2: " 
    //      << &s2 << " | " << s2 << "\n\n";
    
    // Stack<int> s3(s1);
    // s1 = s2;
    // s2 = s3;
    // cout << "s1: " << &s1 << " | " << s1 << "\n";
    // cout << "s2: " << &s2 << " | " << s2 << "\n\n";

    // cout << "Testing Stack functions\n\n";
    // cout << "Top should be 15: " << s1.top() << endl;
    // cout << "empty should be 0: " << s1.empty() << endl;
    // cout << "popped 15: " << s1.pop() << " | " << s1 << endl;
    // cout << "size should be 2: " << s1.size() << "\n\n";
    // s1.pop();
    // s1.pop();
    // cout << "empty should be 1: " << s1.empty() << "\n\n";

    // test front, back, size, print_pointers fxns for queue
    // Queue<int> q1;
    // Queue<int> q2(q1);

    // cout << &q1 << " | " << &q2 << "\n\n";
    // q1.push(5);
    // q2.push(2);
    // cout << q1 << "\n" << q2 << "\n\n";
    // for (int i = 0; i < 5; i++)
    // {
    //     q1.push(i * 10);
    // }
    // cout << &q1 << "\n" << q1 << "\n\n";

    // cout << "front: " << q1.front() << endl;
    // cout << "back: " << q1.back() << endl;
    // cout << "size: " << q1.size() << endl;
    // cout << "print:\n";
    // q1.print_pointers();
    // cout << "\n\n";

    // test queue big 3
    // Queue<int> q1;
    // for (int i = 0; i < 5; i++)
    // {
    //     q1.push(i * 10);
    // }
    // cout << &q1 << "\n" << q1 << "\n\n";

    // Queue<int> q2(q1);
    // q2.pop();

    // cout << &q1 << "\n" << q1 << "\n\n";
    // cout << &q2 << "\n" << q2 << "\n\n";

    // q1 = q2;

    // cout << &q1 << "\n" << q1 << "\n\n";


    // sample int linked list
    // node<int> d(20);
    // node<int> c(15, &d, NULL);
    // node<int> b(10, &c, NULL);
    // node<int> a(5, &b, NULL);
    // node<int>* head1 = &a;

    // sample string linked list
    // node<string> dd("four");
    // node<string> cc("three", &dd, NULL);
    // node<string> bb("two", &cc, NULL);
    // node<string> aa("one", &bb, NULL);
    // node<string>* head2 = &aa;


    // test _print_list (and backwards)
    // cout << "Testing _print_list:\n";
    // _print_list(head1);
    // cout << endl;
    // cout << "Testing _print_list_backwards:\n";
    // _print_list_backwards(head1);
    // cout << endl;

    // test _search_list
    // node<int>* target1 = _search_list(head1, 15);
    // cout << &c << " " << target1 << endl;
    // cout << c << " " << *target1 << endl;

    // string s = "five";
    // _print_list(head2);
    // cout << endl;
    // node<string>* target2 = _search_list(head2, s);
    // if (target2 == NULL){
    //     cout << "\ntarget is NULL\n";
    // }
    // else {
    //     cout << &dd << " " << target2 << endl;
    //     cout << dd << " " << *target2 << endl;
    // }

    // testing _insert_head
    // cout << "Original:\n";
    // _print_list(head1);
    // head1 = _insert_head(head1, 450);
    // cout << "\nNew head should be 450:\n";
    // _print_list(head1);
    // cout << endl << *head1 << endl;
    // cout << "if empty list:\n";
    // node<int>* list1;
    // list1 = _insert_head(list1, 87);
    // _print_list(list1);

    // test _insert_after
    // cout << "Original:\n";
    // _print_list(head1);
    // cout << "\n\nUpdated:\n";
    // node<int>* after = &c;
    // node<int>* inserted = _insert_after(head1, after, 17);
    // _print_list(head1);
    // cout << "\nInserted node value: " << *inserted << endl;
    // cout << "\n\nTesting insert after just head. Original:\n";
    // node<int> newHead(28);
    // node<int>* headptr;
    // headptr = &newHead;
    // _print_list(headptr);
    // node<int>* inserted1 = _insert_after(headptr, headptr->_next, 99);
    // cout << "\nUpdated:\n";
    // _print_list(headptr);
    // cout << "\nInserted node should be 99: " << *inserted1 << endl;
    // test empty list
    // node<int>* testHead;
    // node<int>* testAfter;
    // node<int>* emptyTest = _insert_after(testHead, testAfter, 32);
    // cout << "list should only have 32:\n";
    // _print_list(emptyTest);

    // testing _insert_before
    // cout << "Original:\n";
    // _print_list(head1);
    // node<int>* before;
    // before = &c;
    // node<int>* inserted = _insert_before(head1, before, 13);
    // cout << "\nUpdated should have 13 between 10 and 15:\n";
    // _print_list(head1);
    // cout << endl;

    // testing _previous_node
    // cout << "Should be 10:\n";
    // node<int>* priorNode = _previous_node(head1, &c);
    // cout << *priorNode << endl;

    // testing _delete_node
    // create dyanmic linked list
    // node<int>* node3 = new node<int>(9);
    // node<int>* node2 = new node<int>(6, node3);
    // node<int>* node1 = new node<int>(3, node2);
    // cout << "\nOriginal:\n";
    // _print_list(node1);
    // int val = _delete_node(node1, node1);
    // cout << "\n\nDeleted " << val << "\n\n";
    // cout << "\nUpdated: expected 6 | 9\n";
    // _print_list(node1);
    // delete node2;
    // delete node3;
    // cout << "\nOriginal list:\n";
    // _print_list(head1);
    // node<int>* toDelete;
    // toDelete = &b;
    // int oldVal = _delete_node(head1, toDelete);
    // cout << "\nExpected 10: " << oldVal;
    // cout << "\nNew list:\n";
    // _print_list(head1);
    // cout << endl;

    // testing _copy_list
    // create dyanmic linked list
    // node<int>* node3 = new node<int>(9);
    // node<int>* node2 = new node<int>(6, node3);
    // node<int>* node1 = new node<int>(3, node2);
    // cout << "Original:\n";
    // cout << node1 << " | " << node2 << " | " << node3 << endl;
    // node<int>* cpyNode;
    // cpyNode = _copy_list(node1);
    // cout << "\n\nCopy:\n";
    // cout << cpyNode << " | " << cpyNode->_next << 
    //     " | " << cpyNode->_next->_next << endl;
    // cout << "\nOriginal values:\n";
    // _print_list(node1);
    // cout << "\nCopy values:\n";
    // _print_list(cpyNode);
    // cout << "\n\n";

    // testing _copy_list src to dest
    // create dyanmic linked list
    // node<int>* node3 = new node<int>(9);
    // node<int>* node2 = new node<int>(6, node3);
    // node<int>* node1 = new node<int>(3, node2);
    // cout << "Original:\n";
    // cout << node1 << " | " << node2 << " | " << node3 << endl;
    // node<int> tempHead(28);
    // node<int>* newHead = &tempHead;
    // node<int>* lastNode;

    // cout << "head: " << newHead << " | last: " << lastNode << "\n\n";

    // lastNode = _copy_list(newHead, node1);
    // cout << "\n\nCopy:\n";
    // cout << newHead << " | "
    //      << newHead->_next << " | "
    //      << newHead->_next->_next << "\n\n";
    // cout << "\nOriginal values:\n";
    // _print_list(node1);
    // cout << "\nCopy values:\n";
    // _print_list(newHead);
    // cout << "\n\n";

    // testing _clear_list
    // node<int>* node3 = new node<int>(9);
    // node<int>* node2 = new node<int>(6, node3);
    // node<int>* node1 = new node<int>(3, node2);
    // cout << "Original:\n";
    // _print_list(node1);
    // _clear_list(node1);
    // cout << "\n\nAfter clearing:\n";
    // _print_list(node1);

    // testing _at
    // node<int>* node3 = new node<int>(9);
    // node<int>* node2 = new node<int>(6, node3);
    // node<int>* node1 = new node<int>(3, node2);
    // cout << "Expected 9: " << _at(node1, 2) << endl;

    return 0;
}
