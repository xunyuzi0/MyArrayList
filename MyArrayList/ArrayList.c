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

	

	return 0;
}

//实现顺序表的初始化 
bool init(ArrayList* pArray, int len) {
	
}

//实现顺序表的判满，若满则返回true，否则返回false 
bool is_full(ArrayList* pArray) {
	
}

//实现顺序表的判空，若空则返回true，否则返回false 
bool is_empty(ArrayList* pArray) {
	
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
