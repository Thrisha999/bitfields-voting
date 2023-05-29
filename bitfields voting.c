#include<stdio.h>
struct vote
{
	int age:6;
}s1;
void main()
{
	printf("size of vote is %d",sizeof(struct vote));
	s1.age=18;
	printf("eligible for voting is %d",s1.age);
}
