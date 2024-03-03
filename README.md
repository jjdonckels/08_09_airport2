
# Work Report

## Name: <ins> James Donckels </ins>

## Features:

- Not Implemented:
  - none

<br><br>

- Implemented:
  - linked list functions
  - Stack class
  - Queue class
  - Airport simulation

<br><br>

- Partly implemented:
  - none

<br><br>

- Bugs
  - implemented features are bug free

<br><br>

# Reflections:

Airport Simulation

Tested with the following values:
- time to take off: 15
- time to land: 5
- probability of landing: 0.1
- probability of takeoff: 0.08
- fuel: time to crash: 20
- total simulation time: 1000 - 1000000

Analysis:
- Number of landing planes always greater than number of planes that take off since landing planes get priority
- Average time to land is pretty consistent around 8-9 seconds as the simulation time increases from 1000 up to 100000 and more
- Average time to take off increases significantly with duration of simulation as all the landing planes get priority before any planes can take off, meaning takeoff queue builds up a lot and when the simulation ends there are a lot of planes left in the takeoff queue but always few to no planes left in the landing queue

Overall, with the amount of planes waiting to take off and the wait times for taking off increasing more and more as the duration of the simulation increases, it appears that more than one runway would be useful to keep traffic buildup from happening. More runways would decrease wait times for takeoff as landing wait times aren't really affected throughout the simulation. Having a second runway exclusively for takeoffs would be much more efficient and there would be no traffic buildup, very short wait times always, and no planes would crash. 

# **output**
<pre>
<br/><br/><br/><br/>
## Delete this line and paste the output of your basic test and then testB here
</pre>


<br/><br/>

# basic_test.cpp output: 
----------running basic_test.cpp---------


[==========] Running 3 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 3 tests from TEST_FUNCTIONS
[ RUN      ] TEST_FUNCTIONS.TestLinkedListFunctions
[100]->[90]->[80]->[70]->[60]->[50]->[40]->[30]->[20]->[10]->

======= testing insert =======================


----------- A node at the middle: 50


testing prev and next links: 
found 50: [50]->
after: 50: [40]->


insert_after(): 
[100]->[90]->[80]->[70]->[60]->[50]->[45]->[40]->[30]->[20]->[10]->[45]-> was inserted


insert_before()
[100]->[90]->[80]->[70]->[60]->[55]->[50]->[45]->[40]->[30]->[20]->[10]->[55]-> was inserted


======= testing delete =======================
/n/n------------- deleting the last element: 
about to delete [10]->
deleted 10: 
[100]->[90]->[80]->[70]->[60]->[55]->[50]->[45]->[40]->[30]->[20]->[       OK ] TEST_FUNCTIONS.TestLinkedListFunctions (0 ms)
[ RUN      ] TEST_FUNCTIONS.TestQueue
queue: Queue:Head->[0]->|||

queue: Queue:Head->[0]->[10]->|||

queue: Queue:Head->[0]->[10]->[20]->|||

queue: Queue:Head->[0]->[10]->[20]->[30]->|||

queue: Queue:Head->[0]->[10]->[20]->[30]->[40]->|||

queue: Queue:Head->[0]->[10]->[20]->[30]->[40]->[50]->|||

queue: Queue:Head->[0]->[10]->[20]->[30]->[40]->[50]->[60]->|||

queue: Queue:Head->[0]->[10]->[20]->[30]->[40]->[50]->[60]->[70]->|||

queue: Queue:Head->[0]->[10]->[20]->[30]->[40]->[50]->[60]->[70]->[80]->|||

queue: Queue:Head->[0]->[10]->[20]->[30]->[40]->[50]->[60]->[70]->[80]->[90]->|||



it->>0
it->>10
it->>20
it->>30
it->>40
it->>50
it->>60
it->>70
it->>80
it->>90


popping queue: [   0]: Queue:Head->[10]->[20]->[30]->[40]->[50]->[60]->[70]->[80]->[90]->|||

popping queue: [  10]: Queue:Head->[20]->[30]->[40]->[50]->[60]->[70]->[80]->[90]->|||

popping queue: [  20]: Queue:Head->[30]->[40]->[50]->[60]->[70]->[80]->[90]->|||

popping queue: [  30]: Queue:Head->[40]->[50]->[60]->[70]->[80]->[90]->|||

popping queue: [  40]: Queue:Head->[50]->[60]->[70]->[80]->[90]->|||

popping queue: [  50]: Queue:Head->[60]->[70]->[80]->[90]->|||

popping queue: [  60]: Queue:Head->[70]->[80]->[90]->|||

popping queue: [  70]: Queue:Head->[80]->[90]->|||

popping queue: [  80]: Queue:Head->[90]->|||

popping queue: [  90]: Queue:Head->|||



Iterator is_null(): true

----------------------- 

[       OK ] TEST_FUNCTIONS.TestQueue (0 ms)
[ RUN      ] TEST_FUNCTIONS.TestStack
stack: Stack:Head->[0]->|||

stack: Stack:Head->[10]->[0]->|||

stack: Stack:Head->[20]->[10]->[0]->|||

stack: Stack:Head->[30]->[20]->[10]->[0]->|||

stack: Stack:Head->[40]->[30]->[20]->[10]->[0]->|||

stack: Stack:Head->[50]->[40]->[30]->[20]->[10]->[0]->|||

stack: Stack:Head->[60]->[50]->[40]->[30]->[20]->[10]->[0]->|||

stack: Stack:Head->[70]->[60]->[50]->[40]->[30]->[20]->[10]->[0]->|||

stack: Stack:Head->[80]->[70]->[60]->[50]->[40]->[30]->[20]->[10]->[0]->|||

stack: Stack:Head->[90]->[80]->[70]->[60]->[50]->[40]->[30]->[20]->[10]->[0]->|||



it->>90
it->>80
it->>70
it->>60
it->>50
it->>40
it->>30
it->>20
it->>10
it->>0


popping stack: [  90]: Stack:Head->[80]->[70]->[60]->[50]->[40]->[30]->[20]->[10]->[0]->|||

popping stack: [  80]: Stack:Head->[70]->[60]->[50]->[40]->[30]->[20]->[10]->[0]->|||

popping stack: [  70]: Stack:Head->[60]->[50]->[40]->[30]->[20]->[10]->[0]->|||

popping stack: [  60]: Stack:Head->[50]->[40]->[30]->[20]->[10]->[0]->|||

popping stack: [  50]: Stack:Head->[40]->[30]->[20]->[10]->[0]->|||

popping stack: [  40]: Stack:Head->[30]->[20]->[10]->[0]->|||

popping stack: [  30]: Stack:Head->[20]->[10]->[0]->|||

popping stack: [  20]: Stack:Head->[10]->[0]->|||

popping stack: [  10]: Stack:Head->[0]->|||

popping stack: [   0]: Stack:Head->|||



Iterator is_null(): true

----------------------- 

[       OK ] TEST_FUNCTIONS.TestStack (0 ms)
[----------] 3 tests from TEST_FUNCTIONS (1 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 1 test suite ran. (1 ms total)
[  PASSED  ] 3 tests.
<pre>
<br/><br/><br/><br/>
</pre>
# testB.cpp output:

----------running testB.cpp---------


[==========] Running 4 tests from 4 test suites.
[----------] Global test environment set-up.
[----------] 1 test from TEST_STUB
[ RUN      ] TEST_STUB.TestStub
[       OK ] TEST_STUB.TestStub (0 ms)
[----------] 1 test from TEST_STUB (0 ms total)

[----------] 1 test from TEST_STACK
[ RUN      ] TEST_STACK.TestStack
s: Stack:Head->[9]->[8]->[7]->[6]->[5]->[4]->[3]->[2]->[1]->[0]->|||

s2: Stack:Head->[9]->[8]->[7]->[6]->[5]->[4]->[3]->[2]->[1]->[0]->|||

{ 9 } Stack:Head->[8]->[7]->[6]->[5]->[4]->[3]->[2]->[1]->[0]->|||

{ 8 } Stack:Head->[7]->[6]->[5]->[4]->[3]->[2]->[1]->[0]->|||

{ 7 } Stack:Head->[6]->[5]->[4]->[3]->[2]->[1]->[0]->|||

{ 6 } Stack:Head->[5]->[4]->[3]->[2]->[1]->[0]->|||

{ 5 } Stack:Head->[4]->[3]->[2]->[1]->[0]->|||

{ 4 } Stack:Head->[3]->[2]->[1]->[0]->|||

{ 3 } Stack:Head->[2]->[1]->[0]->|||

{ 2 } Stack:Head->[1]->[0]->|||

{ 1 } Stack:Head->[0]->|||

{ 0 } Stack:Head->|||

assigning s back to s2: s: Stack:Head->[9]->[8]->[7]->[6]->[5]->[4]->[3]->[2]->[1]->[0]->|||

s2: Stack:Head->[9]->[8]->[7]->[6]->[5]->[4]->[3]->[2]->[1]->[0]->|||

[       OK ] TEST_STACK.TestStack (0 ms)
[----------] 1 test from TEST_STACK (0 ms total)

[----------] 1 test from TEST_QUEUE
[ RUN      ] TEST_QUEUE.TestQueue
q: Queue:Head->[0]->[1]->[2]->[3]->[4]->[5]->[6]->[7]->[8]->[9]->|||

q2: Queue:Head->[0]->[1]->[2]->[3]->[4]->[5]->[6]->[7]->[8]->[9]->|||

{ 0 } Queue:Head->[1]->[2]->[3]->[4]->[5]->[6]->[7]->[8]->[9]->|||

{ 1 } Queue:Head->[2]->[3]->[4]->[5]->[6]->[7]->[8]->[9]->|||

{ 2 } Queue:Head->[3]->[4]->[5]->[6]->[7]->[8]->[9]->|||

{ 3 } Queue:Head->[4]->[5]->[6]->[7]->[8]->[9]->|||

{ 4 } Queue:Head->[5]->[6]->[7]->[8]->[9]->|||

{ 5 } Queue:Head->[6]->[7]->[8]->[9]->|||

{ 6 } Queue:Head->[7]->[8]->[9]->|||

{ 7 } Queue:Head->[8]->[9]->|||

{ 8 } Queue:Head->[9]->|||

{ 9 } Queue:Head->|||

assigning q back to q2: q: Queue:Head->[0]->[1]->[2]->[3]->[4]->[5]->[6]->[7]->[8]->[9]->|||

q2: Queue:Head->[0]->[1]->[2]->[3]->[4]->[5]->[6]->[7]->[8]->[9]->|||

[       OK ] TEST_QUEUE.TestQueue (0 ms)
[----------] 1 test from TEST_QUEUE (0 ms total)

[----------] 1 test from TEST_AIPRORT
[ RUN      ] TEST_AIPRORT.TestAirport

============================================
time to take off        : 15
time to land            : 5
probability of landing  : 0.10
probability of takeoff  : 0.08
fuel: time to crash     : 20
total simulation time   : 1440

. . . . . . . . . . . . . . . . . . . . . . . .
128 landed
54 took off
0 planes crashed. :(
Average waiting time to land: 8.836
Average waiting time to take off: 419.667
planes in landing queue : 1
planes in take off queue: 62
============================================
[       OK ] TEST_AIPRORT.TestAirport (0 ms)
[----------] 1 test from TEST_AIPRORT (0 ms total)

[----------] Global test environment tear-down
[==========] 4 tests from 4 test suites ran. (0 ms total)
[  PASSED  ] 4 tests.

<pre>
<br/><br/><br/><br/>
</pre>


