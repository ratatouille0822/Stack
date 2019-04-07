#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SEQSTACK_SIZE 1024
typedef struct seqstack
{
	void *array[SEQSTACK_SIZE];
	int size;

}SEQSTACK;

typedef void * SeqStack;

// 初始化栈
SeqStack Init_seqstack();
//入栈
int  Push_SeqStack(SeqStack stack, void* data);
//出栈 
int  Pop_SeqStack(SeqStack stack);
//获取栈顶
void * GetTop_SeqStack(SeqStack stack);
//栈是否为空
int  IsEmpty_SeqStack(SeqStack stack);
//栈中元素的个数
int GetSize_SeqStack(SeqStack stack);
//销毁栈
void Destroy_SeqStack(SeqStack stack);
// TODO: 添加要在此处预编译的标头

int Print_SeqStack(SeqStack stack, void(*PrintData)(void*));
