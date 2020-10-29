//分支和循环语句
//c语言中由一个‘;’隔开的就是一个语句

//if（表达式）   这里的表示是只要是为真（非0）  那就执行下面的程序
//	语句1；
//else if（表达式）
//	语句2；
//else
//	语句3；


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else                //这里的else是我自己手动将其和第一个if对齐的，但是对于编译器来说，else只是和上面离的近的if匹配。   所以对于第一个if来说直接就是假的根本不进入循环；
//		printf("haha\n");
//	return 0;
//
//}

//int main()
//{
//	int num = 4;
//	if (num = 5)                         //这是一个有迷幻性的题，很容易认为这个题不会打印“呵呵”
//	{                                   //“==”是判断赋值   但是这里写的是“=”表示的是赋值的意思        （5 == num）这样写可以减少错误--将常量放在“=”的左边
//		printf("呵呵\n");
//	}
//	return 0;
//}

//题目：判断一个数是否为奇数
//int main()
//{
//	int a = 0 ;
//	printf("Please input a number : ");
//	scanf("%d", &a);
//
//	if ((a % 2) != 0)                     //  printf 函数只是打印“”里面的内容，不要去纠结
//	{
//		printf("这个数是奇数\n");
//	}
//	else
//	{
//		printf("这个数不是奇数\n");
//	}
//
//	return 0;
//}

// 题目： 输出1-100之间的奇数
//①
//int main()                   //这个题目我没有办法如何表示1-100之间的数字   这里使用while语句
//{
//	int a = 1;
//	while (a < 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf(" %d \n",a);
//		}
//		a++;
//	}
//	printf("这是所有的奇数");
//	return 0;
//}
//②
//int main()
//{
//	int a = 1;
//	while (a < 100)
//	{
//		printf("%d\n", a);
//		a += 2;                    //   在初始的1上面加2 就可以一直得到奇数
//	}
//	printf("这是所有的奇数");
//	return 0;
//}


//  switch 语句
//①例题代码

//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)                            // 这个题目需要注意的是当你没有看见break语句时  就要顺序执行下去
//	{
//	case 1:
//		m++;                          //  这个题目自己分析还真的是不好分析出来
//	case 2:
//		n++;
//	case 3:
//		switch (n)          //  switch 允许嵌套的  也就是switch里面嵌套一个switch
//		{
//		case 1: n++;
//			break;
//		case 2: m++;
//			n++;
//			break;
//		}
//	case 4: m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}



//while(表达式)                    //如果在循环里面加入break  不管咋样他都会从这个break跳出来
//    循环语句：                    //如果在循环里面加入continue  他就会在这个while循环里面一直循环（终止while语句后面的语句）
//②
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)   //   EOF==end of file   需要ctrl + z  来实现这个功能
//		putchar(ch);
//	return 0;                   //  这个题目的实际价值
//
//}
//③确认密码的一段程序      一段非常有意义的代码
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char passwords[20] = { 0 };
//	printf("请输入密码 :> ");
//	scanf("%s",&passwords);                //这里输入的是字符串所以要用%s
//	while ((ch=getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N) :> ");
//	ret = getchar();
//	if(ret == 'Y')                         //你这里直接写getchar他不知道应该把它所得到的值赋给谁。
//	{
//		printf("确认密码成功");
//	}
//	else
//	{
//		printf("放弃确认密码");
//	}
//	return 0;
//}

//③
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;                                       //   '0' 所对应的ASCII码是48    '9'  ----57
//		putchar(ch);
//	}
//	return 0;
//}


//for循环     for（初始化部分；条件判断部分；调整部分（变量调整））    1,2 顺序下去---3,2 顺序下去
//   不要在循环体中改变循环变量，防止循环变量失去控制



//   for循环的初始化 判断 调整都可以省略   但是 for循环的判断语句如果被省略，那么判断的条件恒为真，所以建议不要随便的省略

//一定要看清楚
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10;i++)
//	{
//		for (; j < 10;j++)
//		{                                                //  这里省略了赋值部分 导致了和 赋值上的结果不一样
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)         //这里的++x  还是x++都是自增一
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//  请问循环要循环多少次               循环0次
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0;i++, k++)           //  因为这个判断语句的k为赋值语句k=0  直接为假 所以不进入循环体
		k++;
	return 0;
}

//do- while  循环                         while是先判断条件在循环  而do-while循环是先循环后判断条件
int main()