#include <ctl.h>
#include <msp430.h>

//read timer while it is running
short readTA(void){
  //temporary variables for last to TAR's
  int t1=TA1R,t2;
  do{
    //shift values
    t2=t1;
    //get new value
    t1=TA1R;
  //loop until we get the same value twice
  }while(t1!=t2);
  //return timer value
  return t1;
}
