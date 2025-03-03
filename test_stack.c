#include "stack.h"
#include <assert.h>

// An example test
void test_single_element() {
    clear();
    push(24);
    assert(pop() == 24);
    assert(empty());
}
void test_push_pop() {
    clear();
    push(10);
    push(20);
    push(30);
    assert(pop() == 30);
    assert(pop() == 20);
    assert(pop() == 10);
    assert(empty());
}

void test_empty() {
    clear();
    assert(empty());
    push(10);
    assert(!empty());
    pop();
    assert(empty());
}
void test_copy_to_array() {
    clear();
    push(1);
    push(2);
    push(3);
    int arr[3];
    copy_to_array(arr, 3);
    assert(arr[0] == 3);
    assert(arr[1] == 2);
    assert(arr[2] == 1);
}

// XXX You can find what each function does in stack.h

// TODO Write more tests below
// Since your tests depend on functions written by your row's other teams,
// you cannot run your tests until they are done!

// Remember to call your tests in main()
int main() {
    test_single_element();

    test_push_pop();
    test_empty();
    test_copy_to_array();
    // Keep this call here so that you don't leak the nodes left over from
    // the last test
    clear();
}
