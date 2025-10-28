#include <stdio.h>
#include "hostel.h"

Hostel hostels[] = {
    {1, 10, 10, 0},
    {2, 10, 10, 0},
    {3, 10, 10, 0}
};
int hostelCount = 3;

void showHostelStatus() {
    printf("\n--- Hostel Info ---\n");
    for (int i = 0; i < hostelCount; i++) {
        printf("Hostel %d -> Total:%d | Available:%d | Occupied:%d\n",
               hostels[i].hostelNo,
               hostels[i].totalRooms,
               hostels[i].availableRooms,
               hostels[i].occupiedRooms);
    }
}

int getAvailableRoom(int hostelNo) {
    for (int i = 0; i < hostelCount; i++) {
        if (hostels[i].hostelNo == hostelNo && hostels[i].availableRooms > 0) {
            hostels[i].availableRooms--;
            hostels[i].occupiedRooms++;
            return hostels[i].occupiedRooms; 
        }
    }
    return -1;
}

void updateRoomStatus(int hostelNo, int roomNo, int status) {
    for (int i = 0; i < hostelCount; i++) {
        if (hostels[i].hostelNo == hostelNo) {
            if (status == 1) { // allocated
                hostels[i].availableRooms--;
                hostels[i].occupiedRooms++;
            } else { // deallocated
                hostels[i].availableRooms++;
                hostels[i].occupiedRooms--;
            }
        }
    }
}
