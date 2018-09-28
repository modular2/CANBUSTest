#include "mbed.h"

DigitalOut myled(D8);
CAN can1(PD_0, PD_1,500000);
int main() {
     CANMessage msg;
    while(1) {
   if(can1.read(msg)) {
            printf("Message received:id=%d,type=%d,%d\n", msg.id,msg.type,msg.data[0]);
            myled = !myled;

    }
    }
}