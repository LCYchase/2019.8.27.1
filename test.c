#define _
#include<stdio.h>
struct stu {
		char name[20];
		int age;
		int id;
};
struct stu s= {"123", 20 ,1};
//struct stu1 st;
struct stu s1 = {"444",22,2 };
//stu.id = 3;
//strcpy (s.name, "123");
void  print(struct stu (*ss)){//结构体地址传参
	printf("name:%s age:%d id:%d", (*ss).name, (*ss).age, (*ss).id);
	printf("\n");
}
void  print1(struct stu a ) {//结构体传惨
	printf("name:%s age:%d id:%d", a.name, a.age, a.id);
	printf("\n");
}
main() {
	printf("name:%s age:%d id:%d", s.name,s.age,s.id);
	printf("\n");
	printf("name:%s age:%d id:%d", s1.name, s1.age, s1.id);
	print(&s);
	//print1(s1);
	return 0;
}