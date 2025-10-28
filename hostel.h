#ifndef HOSTEL_H
#define HOSTEL_H

typedef struct {
    int hostelNo;
    int totalRooms;
    int availableRooms;
    int occupiedRooms;
} Hostel;

void showHostelStatus();
int getAvailableRoom(int hostelNo);
void updateRoomStatus(int hostelNo, int roomNo, int status);

#endif
