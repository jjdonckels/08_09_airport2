#include <iostream>
#include <iomanip>
#include <string>
#include "includes/linked_list_functions/linkedlistfunctionsTemplated.h"
#include "includes/node/node.h"


using namespace std;

int main(int argv, char** argc) {
    // cout << "\n\n"
    //      << endl;

    // cout << "\n\n\n=====================" << endl;

    // sample int linked list
    node<int> d(20);
    node<int> c(15, &d, NULL);
    node<int> b(10, &c, NULL);
    node<int> a(5, &b, NULL);
    node<int>* head1 = &a;

    // sample string linked list
    node<string> dd("four");
    node<string> cc("three", &dd, NULL);
    node<string> bb("two", &cc, NULL);
    node<string> aa("one", &bb, NULL);
    node<string>* head2 = &aa;


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
    cout << "Should be 10:\n";
    node<int>* priorNode = _previous_node(head1, &c);
    cout << *priorNode << endl;
    


    return 0;
}
