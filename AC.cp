#line 1 "C:/Users/Kapouchima/Desktop/TAC/AC.c"
#line 1 "c:/users/kapouchima/desktop/tac/memorymanager/memorymanager.h"





typedef struct
{
 char Address;
}Memory;

void MemoryManager_Init(Memory *sys);
void MemoryManager_Write(Memory *sys,unsigned int Address,char *dat, char len);
void MemoryManager_Read(Memory *sys,unsigned int Address,char *dat,char len);
#line 1 "c:/users/kapouchima/desktop/tac/usermanager/usermanager.h"



typedef struct
{
 char UUID[14];
 char Flags[2];
 char Dataset[16];
 unsigned int Loc;
}User;

void UserManager_Init(User *);
void UserManager_Delete(User *);
void UserManager_Load(char *,User *);
unsigned int UserManager_GetNewLoc();
void UserManager_Save(User *);
unsigned int UserManager_Search(char *);
char UserManager_Equal(User *,User *);
char UserManager_Compare(User *,char *);
#line 1 "c:/users/kapouchima/desktop/tac/signaling/signaling.h"
#line 30 "c:/users/kapouchima/desktop/tac/signaling/signaling.h"
typedef struct
{
 char SignalCode;
 unsigned long Time;
 char Expired;
 char Fired;
}Signal;

typedef struct
{
 Signal SignalQueue[ 30 ];
 unsigned long SystemEPOCH;
}SignalingSystem;

void SignalingSystem_SystemEPOCH(SignalingSystem *);
void SignalingSystem_AddSignal(SignalingSystem *,unsigned long ,char );
char SignalingSystem_CheckSignal(SignalingSystem * ,char );
void SignalingSystem_ClearSignal(SignalingSystem *,char);
void SignalingSystem_ClearAllSignals(SignalingSystem * ,char );
void SignalingSystem_Task(SignalingSystem *);
void SignalingSystem_Init(SignalingSystem *);
#line 1 "c:/users/kapouchima/desktop/tac/doormanager/doormanager.h"
#line 1 "c:/users/kapouchima/desktop/tac/doormanager/../signaling/signaling.h"
#line 13 "c:/users/kapouchima/desktop/tac/doormanager/doormanager.h"
typedef struct{
 char Type;
 char CarPassTime;
 char OpenTime;
 char CloseTime;
 char AutoCloseTime;
 char InvalidTime;
 char IRMode;
 char State;
 SignalingSystem SigSys;
 unsigned long ClosingStartTime;
}Door;


void DoorManager_Init(Door *);
void DoorManager_Task(Door *);
void DoorManager_CarEntered(Door *);
#line 1 "c:/users/kapouchima/desktop/tac/readermanager/readermanager.h"










typedef struct
{
 char TimeOutCounter;
 char BufferCounter;
 char Buffer[ 20 ];
 char TagInfo[ 12 ];
 char TagExists;
}Reader;


void ReaderManager_Init(Reader *);
void ReaderManager_DataRecieved(Reader *, char);
void ReaderManager_Task(Reader *);
void ReaderManager_TimeOutEPOCH(Reader *);
#line 8 "C:/Users/Kapouchima/Desktop/TAC/AC.c"
void main() {

}
