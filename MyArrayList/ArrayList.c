#include<stdio.h>
#include<stdbool.h>//提供bool数据类型 
#include<stdlib.h>//提供malloc函数 

//本程序完成了顺序表数据结构以及部分算法 

//创建一个结构体用来描述顺序表数据结构 
typedef struct Array {

	int* pArr;//存放顺序表首元素地址的指针变量 
	int length;//存放顺序表的长度 
	int cnt;//有效元素个数 

} ArrayList, pArrayList;

bool init(ArrayList* pArray, int len);
bool append(ArrayList* pArray, int num);
bool insert(ArrayList* pArray, int pos, int num);
bool delete_Arr(ArrayList* pArray, int pos, int* num);
bool clear(ArrayList* pArray);
int get(ArrayList* pArray, int pos);
bool is_full(ArrayList* pArray);
bool is_empty(ArrayList* pArray);
void sort(ArrayList* pArray);
void show(ArrayList* pArray);
void inversion(ArrayList* pArray);

int main(void) {

	

	append(&arr, 41);
	append(&arr, 5);
	append(&arr, -54);
	append(&arr, 44);
	append(&arr, 14);
	show(&arr);

	if (insert(&arr, 3, 1000)) {
		printf("鎻掑叆鍏冪礌鎴愬姛锛乗n");
	}
	show(&arr);

	return 0;
}

//实现顺序表的初始化 
bool init(ArrayList* pArray, int len) {
	
	if (len <= 0) {
		printf_s("顺序表长度应该大于或等于1！\n");
		return false;
	}

	//为顺序表开辟一个长度为len的连续空间，并将首地址返回给顺序表结构体的pArr域 
	pArray->pArr = (int*)malloc(len * sizeof(int));

	//注意！需要检查动态内存是否分配成功，若失败malloc函数将返回NULL 
	if (NULL == pArray->pArr) {
		printf_s("动态内存分配失败！\n");
		exit(-1);
	}
	else {
		pArray->length = len;
		pArray->cnt = 0;
	}
	return true;

}

//实现顺序表的判满，若满则返回true，否则返回false 
bool is_full(ArrayList* pArray) {
	
	if (pArray->cnt == pArray->length) {
		return true;
	}
	else
		return false;

}

//实现顺序表的判空，若空则返回true，否则返回false 
bool is_empty(ArrayList* pArray) {
	
	if (pArray->cnt == 0) {
		return true;
	}
	else
		return false;

}

//在顺序表末尾追加一个元素 
bool append(ArrayList* pArray, int num) {
	
}

//将顺序表遍历输出 
void show(ArrayList* pArray) {

	
}

//将某个元素插入到顺序表第pos个位置上，0<pos<=cnt+1
bool insert(ArrayList* pArray, int pos, int num) {

	
}

//删除顺序表第pos个元素，0<pos<=cnt，并将被删除元素通过*num传回 
bool delete_Arr(ArrayList* pArray, int pos, int* num) {

	
}


//清空整个顺序表 
bool clear(ArrayList* pArray) {

	
}

//将顺序表元素按从小到大排序 
void sort(ArrayList* pArray) {

	
}

//将顺序表元素倒置 
void inversion(ArrayList* pArray) {

	
}

//返回顺序表第pos个元素，0<pos<=cnt 
int get(ArrayList* pArray, int pos) {
	
}
