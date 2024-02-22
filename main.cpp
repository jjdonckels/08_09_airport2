#include <iostream>
#include <iomanip>
#include "includes/linked_list_functions/linkedlistfunctionsTemplated.h"
#include "includes/node/node.h"


using namespace std;

int main(int argv, char** argc) {
    // cout << "\n\n"
    //      << endl;

    // cout << "\n\n\n=====================" << endl;

    // test linked list
    node<int> d(20);
    node<int> c(15, &d, NULL);
    node<int> b(10, &c, NULL);
    node<int> a(5, &b, NULL);

    node<int>* head = &a;

    cout << "Testing _print_list:\n";

    _print_list(head);

    cout << endl;

    return 0;
}
