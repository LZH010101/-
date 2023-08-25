#include <stdio.h>

int main()
{
	printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示5英尺7英寸：");
	
	double foot=0;
	double inch=0;
	scanf_s("%lf" "%lf",&foot,&inch);
	printf("%f", ((foot + inch / 12) * 0.3048));

	return 0;
}