#ifndef HUBO_SOCKETCAN_H
#define HUBO_SOCKETCAN_H

typedef int hubo_can_t ;

extern hubo_can_t hubo_socket[4];

int sendCan(hubo_can_t, struct can_frame *f);
void openAllCAN(int vCan);
int readCan(int skt, struct can_frame *f, double timeoD);

#endif //HUBO_SOCKETCAN_H