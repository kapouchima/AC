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
#line 5 "C:/Users/Kapouchima/Desktop/TAC/AC.c"
void main() {

}
