#include<stdio.h>
#include<stdbool.h>//�ṩbool�������� 
#include<stdlib.h>//�ṩmalloc���� 

//�����������˳������ݽṹ�Լ������㷨 

//����һ���ṹ����������˳������ݽṹ 
typedef struct Array {

	int* pArr;//���˳�����Ԫ�ص�ַ��ָ����� 
	int length;//���˳���ĳ��� 
	int cnt;//��ЧԪ�ظ��� 

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

//ʵ��˳���ĳ�ʼ�� 
bool init(ArrayList* pArray, int len) {
	
}

//ʵ��˳���������������򷵻�true�����򷵻�false 
bool is_full(ArrayList* pArray) {
	
}

//ʵ��˳�����пգ������򷵻�true�����򷵻�false 
bool is_empty(ArrayList* pArray) {
	
}

//��˳���ĩβ׷��һ��Ԫ�� 
bool append(ArrayList* pArray, int num) {
	
}

//��˳��������� 
void show(ArrayList* pArray) {

	
}

//��ĳ��Ԫ�ز��뵽˳����pos��λ���ϣ�0<pos<=cnt+1
bool insert(ArrayList* pArray, int pos, int num) {

	
}

//ɾ��˳����pos��Ԫ�أ�0<pos<=cnt��������ɾ��Ԫ��ͨ��*num���� 
bool delete_Arr(ArrayList* pArray, int pos, int* num) {

	
}


//�������˳��� 
bool clear(ArrayList* pArray) {

	
}

//��˳���Ԫ�ذ���С�������� 
void sort(ArrayList* pArray) {

	
}

//��˳���Ԫ�ص��� 
void inversion(ArrayList* pArray) {

	
}

//����˳����pos��Ԫ�أ�0<pos<=cnt 
int get(ArrayList* pArray, int pos) {
	
}
