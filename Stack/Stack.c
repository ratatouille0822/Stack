#include <stdio.h>
#include "SeqStack.h"

typedef struct UserData
{
	char name[128];
	int id;
}UserData;

void PrintUserData(void* data)
{
	UserData* temp = (UserData*)data;
	printf("%s %d\n", temp->name, temp->id);
}

int main()
{
	SeqStack stack = Init_seqstack();
	
	UserData p1 = { "Zhang, Fei", 1 };
	UserData p2 = { "Guan, Yu", 2 };
	UserData p3 = { "Liu, Bei", 3 };

	Push_SeqStack(stack, &p1);
	Push_SeqStack(stack, &p2);
	Push_SeqStack(stack, &p3);

	Print_SeqStack(stack, PrintUserData);

	return 0;

	

	


}
