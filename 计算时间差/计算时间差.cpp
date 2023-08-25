#include <stdio.h>

int main()
{
	printf("开始的时间是：_小时_分钟\n");
	int hour1, minute1;
	scanf_s("%d" "%d", &hour1, &minute1);
	printf("结束的时间是：_小时_分钟\n");
	int hour2, minute2;
	scanf_s("%d" "%d", &hour2, &minute2);
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60+ minute2;
	int t = t2 - t1;

	printf("时间差%d小时 %d分钟",t/60,t%60);

	return 0;
}