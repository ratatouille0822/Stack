#include "SeqStack.h"

// 初始化栈
SeqStack Init_seqstack()
{
	SEQSTACK* temp = (SEQSTACK*)malloc(sizeof(void*));
	//*temp->array = (void*)malloc(sizeof(void*));
	temp->size= 0;

	return (void*)temp;
}
//入栈
int  Push_SeqStack(SeqStack stack,void* data)
{
	if (NULL == stack || NULL == data)
	{
		perror("Empty ---------100\n");
		return -1;
	}
	SEQSTACK* temp = (SEQSTACK*)stack;
	temp->array[temp->size] = data;
	temp->size += 1;
	return 1;
}
//出栈 
int  Pop_SeqStack(SeqStack stack)
{
	if (NULL == stack)
	{
		perror("Empty ---------200\n");
		return -1;
	}
	SEQSTACK* temp = (SEQSTACK*)stack;
	temp->array[temp->size - 1] = NULL;
	temp->size - 1;
	return 0;
}
//获取栈顶
void * GetTop_SeqStack(SeqStack stack)
{
	if (NULL == stack)
	{
		perror("Empty ---------200\n");
		return -1;
	}
	SEQSTACK* temp = (SEQSTACK*)stack;

	return (void*)&(temp->array[temp->size - 1]);
	
}
//栈是否为空
int  IsEmpty_SeqStack(SeqStack stack)
{
	if (NULL == stack)
	{
		perror("Empty ---------200\n");
		return -1;
	}
	SEQSTACK* temp = (SEQSTACK*)stack;
	return  temp->size == 0 ? 1 : -1;
}
//栈中元素的个数
int GetSize_SeqStack(SeqStack stack)
{
	if (NULL == stack)
	{
		perror("Empty ---------200\n");
		return -1;
	}
	SEQSTACK* temp = (SEQSTACK*)stack;

	return temp->size;
;
}

int Print_SeqStack(SeqStack stack, void(*PrintData)(void*))
{
	if (NULL == stack)
	{
		perror("Empty ---------200\n");
		return -1;
	}
	SEQSTACK* temp = (SEQSTACK*)stack;

	while (temp->size != 0)
	{
		GetTop_SeqStack(temp);
		PrintData(temp->array);
		Pop_SeqStack(temp);
	}

	return 0;
}
//销毁栈
void Destroy_SeqStack(SeqStack stack)
{
	free(stack);
}
// TODO: 添加要在此处预编译的标头










