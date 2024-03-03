#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>
#include "../../includes/node/node.h"
#include "../../includes/stack/MyStack.h"
#include "../../includes/queue/MyQueue.h"
#include "../../includes/airport_sim/airport_sim.h"

using namespace std;

bool test_stub(bool debug = false)
{
  if (debug){
    cout << "testB:: test-sub() entering test_sub" << endl;
  }
  return true;
}

bool test_stack(bool debug = false)
{
  if (debug){
    cout << "testB:: running test_stack" << endl;
  }

  Stack<int> s;
  for (int i = 0; i <= 9; i++){
    s.push(i);
  }
  cout << "s: " << s << endl;
  Stack<int> s2(s);
  cout << "s2: " << s2 << endl;

  for (;!s.empty();){
    cout << "{ " << s.pop() << " } " << s << endl;
  }

  cout << "assigning s back to s2: ";
  s = s2;
  cout << "s: " << s << endl;
  cout << "s2: " << s2 << endl;

  return true;
}

bool test_queue(bool debug = false) 
{
  if (debug){
    cout << "testB:: running test_queue" << endl;
  }

  Queue<int> q;
  for (int i = 0; i <= 9; i++){
    q.push(i);
  }
  cout << "q: " << q << endl;
  Queue<int> q2(q);
  cout << "q2: " << q2 << endl;

  for (;!q.empty();){
    cout << "{ " << q.pop() << " } " << q << endl;
  }

  cout << "assigning q back to q2: ";
  q = q2;
  cout << "q: " << q << endl;
  cout << "q2: " << q2 << endl;

  return true;
}

bool test_airport(bool debug = false)
{
  // Queue<int> q1;

  // for (int i = 0; i < 10; i++){
  //   q1.push(i * 100);
  // }

  // cout << "\nairport test: " << q1 << endl;

  airport_simulation a1;
  a1.run_simulation();

  return true;

}

// TEST(TEST_STUB, TestStub) {
  
//   //EXPECT_EQ(0, <your individual test functions are called here>);

//   EXPECT_EQ(1, test_stub(false));
// }

// TEST(TEST_STACK, TestStack) {

//   EXPECT_EQ(1, test_stack(false));

// }

// TEST(TEST_QUEUE, TestQueue) {

//   EXPECT_EQ(1, test_queue());

// }

TEST(TEST_AIPRORT, TestAirport) {

  EXPECT_EQ(1, test_airport());

}




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running testB.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}

