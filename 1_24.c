#include <stdio.h>
#include <string.h>
#include <ctype.h>
//int main()
//{
//	char arr[] = "lzy@is.programmer";
//	char sub[] = "@.";
//	char* ret = strtok_s(arr,100, sub);
//	for (ret = strtok_s(arr,100, sub); ret != NULL; ret = strtok_s(NULL, 100,sub))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//strerror
//void main()
//{
//	//char ch = 'W';
//	//int ret = isupper(ch);
//	char ch[] = "abc efg shabi";
//	int i;
//	int count = 0;
//	for (i = 0; ch[i] != 0; i++)
//	{
//		if (isspace(ch[i]))
//			count++;
//	}
//	printf("%d", count);
//}
// toupper(Сдת��д) tolower����дתСд��
//void main()
//{
//	char ch = 'q';
//	ch=toupper(ch);
//	putchar(ch);
//}
//�ڴ溯�� memcpy memmove(�ڴ��ص�) 
//void* my_memcpy(void* dest, const void* src, size_t num )
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//void* my_memmove(void* dest, void* scr, size_t num)
//{
//	void* p1 = dest;
//	void* p2 = scr;
//	while (num--)
//	{
//		*((char*)p1+num) = *((char*)p2+num);
//	}
//	void* ret = scr;
//	return ret;
//}
//void main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	//my_memcpy(arr2, arr1,20);//��������ֵĵ�λΪ�ֽ�
//	int i = 0;
//	my_memmove(arr1 + 2, arr1, 12);
//	//memmove(arr1 + 2, arr1, 12);
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr1[i]);
//}
//  memcmp(const void*,const void*,size_t)
//void main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,6 };
//	int ret=memcmp(arr1, arr2, 20);
//	printf("%d", ret);
//}
// memset-�ڴ�����
//void main()
//{
//	char arr[10];
//	memset(arr, 'a', 10);//��λͬ�����ֽ�
//	printf("%s", arr);
//}
// cpulsplus.com

//�Զ���ṹ��

//struct S
//{
//	char name[20];
//	int age;
//};