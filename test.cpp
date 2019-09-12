#include<iostream>  
#include"test.h"
using namespace std; 
  

/*three options
 - state1,state2 = state_trans(state1,state2,action)
 - global state = state_trans(state1,state2,action)
 - global state = state_trans(globalstate,action)
*/

// main function - 
// where the execution of program begins 
int main() 
{ 
    // prints hello world 
    test t = test();
    t.setState(test::FILLED_NEW);
 
    printf("Hello World, state is %d\n",t.getState());
 
    return 0; 
}