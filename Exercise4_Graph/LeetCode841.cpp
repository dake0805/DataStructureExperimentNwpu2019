//
// Created by zy on 5/15/2019.
//

#include "LeetCode841.h"

LeetCode841::LeetCode841()
{
    int initRoomSize;
    int initRoomKeyNum;
    cout << "input room size and key number" << endl;
    cin >> initRoomSize >> initRoomKeyNum;
    roomSize = initRoomSize;
    roomKeyNum = initRoomKeyNum;
    rooms = new int *[roomSize];
    for (int i = 0; i < roomSize; i++)
    {
        rooms[i] = new int[roomKeyNum];
    }
}


bool LeetCode841::canVisitAllRooms()
{
    visitedRoom = new bool[roomSize]{false};
    visitRooms(0);
    for (int i = 0; i < roomSize; i++)
    {
        if (!visitedRoom[i])
            return false;
    }
    return true;
}


void LeetCode841::visitRooms(int room)
{
    if (visitedRoom[room])
        return;
    else
    {
        visitedRoom[room] = true;
        for (int i = 0; i < roomKeyNum; i++)
        {
            visitRooms(rooms[room][i]);
        }
    }
}


void LeetCode841::getData()
{
    for (int i = 0; i < roomSize; i++)
    {
        for (int j = 0; j < roomKeyNum; j++)
        {
            cin >> rooms[i][j];
        }
    }
}

void LeetCode841::RunApplication1()
{
    getData();
    bool answer = canVisitAllRooms();
    if (answer)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

LeetCode841::~LeetCode841()
{
    delete rooms;
    delete visitedRoom;
}
