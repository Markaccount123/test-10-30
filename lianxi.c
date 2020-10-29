#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//#include<math.h>
//int func(int a)
//{
//	int b;
//	switch (a)                         //这道题是让你求fun(1)  
//	{
//	case 1:b = 30;
//	case 2: b = 20;             //这里最应该留心的地方就是每一条case语句是没有break跳出来的，所以语句会一直的按照顺序走下去
//	case 3:b = 16;
//	default:b = 0;
//	}
//	return b;
//}
  

//求这个输出的结果                   hellothird
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{                              
//		case 0:
//			printf("first");
//		case 1:                                   //  这个题需要注意的是当switch中的数字和你case匹配不上的时候默认走default  
//			printf("second");                    //还要注意留心的地方是每个stitch语句后面是否有break；若果没有则要继续顺序进行下去，例如case1走完，接着走case2
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//①写代码将三个数按照从大到小输出
//②写一个打印1-100之间所有3的倍数的数字
//③给定两个数，求两个数最大的公约数


//①  这是我自己写的      第一种思想
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入3个数: > ");
//	scanf("%d%d%d",&a,&b,&c);          //  对于scanf函数来说 如果字符串放到数组里面的时候是不需要放&     //第一种情况是自己给定确切的数值int a =10;  int b = 20;   int c = 30;
//	int max = 0;
//	if (a > b)
//	{
//		max = a;
//		if (max > c)
//		{
//			printf("%d\n", max);
//		}
//		if (b > c)
//		{
//	/*		printf("%d\n", b);
//		}
//		printf("%d\n", c);
//	}
//	else
//	{
//		max = b;
//		if (max < c)
//		{
//			printf("%d\n", c);
//		}
//		if (a < b)
//		{
//			printf("%d\n", b);
//		}
//		printf("%d\n", a);
//	}
//	return 0;
//}*/

//这题目的第二种思想是  我定义一个a，b，c  但是不管如何 我就是要让a存放三个数中最大的数字，b中存放次之，c中存放最小的数字
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入3个数字：>");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tem = a;          //这里的目的是把b这个更大的数字和a进行一个交换
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		int tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c)
//	{
//		int tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//1-100之间所有3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)         //这里的%的优先级更高，所以不需要加（）
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//两个数中最大的公约数   这里首先应该了解公约数的定义和求法
//  这里提到了一种叫做辗转相除法    m=24 n=18   m%n 如果为0 则表示此时的n就是我们要找的最大公约数   当m%n != 0 时  此时再用 n的值 n%r（余数）  如果等于0表示  此时r的值为最大公约数
                                                                                                                  //如果一直都不等于0 则就不断的进行辗转相除下去
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("请输入二个数： > "); 
//	scanf("%d%d", &m, &n);
//	while (r = m % n )                 //对于这里为什么放置的是 m%n 我还是不太能理解？？        while 里面的表达式显示的是真假
//	{
//		m = n;
//		n = r;
//	}
//	printf("最大公约数是：%d",r);
//	return 0;
//}
//                                                       ④打印1000年到2000年之间的闰年
//int main()
//{
//    int year = 0;
//        for (year = 1000; year<= 2000;year++)
//        {
//            if (( year % 4 == 0&& year % 100 != 0 ) || year  % 400 == 0)  //这里的闰年计算方法为满足两个条件① 能被4整除同时不能被100整除②可以被400整除
//            {
//                printf("year = %d\n", year);
//            }
//        }
//        return 0;
//}
// 第一种方法求素数                 打印出100-200之间的素数      什么是素数？ 素数定义;只能被1和他自己本身可以整除                这里用试除法
//int main()
//{                                                                    //   比如说13   试除法的意思是 找到 2-12 这几个数来除他，如果都除不开则是素数 ，如果能有某一个数字能除开，则不是
//    int i = 0;
//    int count = 0;
//    for (i = 100;i <= 200;i++)             //这里的200改成sqrt（i）  这是一个数学库函数     用的是开平方法
//    {
//        int j = 0;
//        for (j = 2; j < i;j++)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        if(j == i)              //这里也要改成 j>sqrt(i)                //  这里的j表示所有的数字都已经尝试一遍了，但是都没有试出来，知道最后一种j==i 从上面那个循环跳出来了
//        {
//            count++;
//            printf("%d\n", i);
//        }
//    }
//    printf("count = %d\n", count);
//}
//
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        if (b >= 20)
//        {
//            break;
//        }
//        if (b % 3 == 1)                   //这里在自己想的时候不用犹豫 b=1 %3  就是1
//        {
//            b = b + 3;
//            continue;                   //  continue 的意思是不在执行后面的程序而是直接跳到循环体开始的地方
//        }
//        b = b - 5;
//    }
//    printf("%d\n", a);      // 所以答案应该是8
//    return 0;
//}

                                                                           //①数9的个数  
//写程序数一下1-100之间所有的整数中出现了多少个包含9的数字
//这里可以考虑出现9的位置只有可能在 个位上和十位上  如果在个位上，那么取%应该商9    如果在十位上那么/10  应该商9
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1;i <= 100; i++)
//    {
//        if (i % 10 == 9)
//        {                              //这里计算的是个位上的9             这里需要着重考虑的是99这个数字  因为他的个位和十位上面都含有9
//            count++; 
//        }
//        if (i / 10 == 9)                        如果这里用else if 那么上面的一种情况考虑过了，再下一次十位的时候这个数字将不再被考虑
//        {
//            count++;                   //这里计算的是十位上的9
//        }
//    }
//    printf("count = %d\n", count);
//    return 0;
//}

//分数求和
                                               //计算1/1 - 1/2 + 1/3 - 1/4 +1/5.....+1/99 -1/100的值，打印出结果

//为了方便理解这里我们先算所有的这些数字相加的情况
//int main()
//{
//    int i = 0;
//    double sum = 0.0;
//    for (i = 1;i <= 100; i++)
//    {
//        sum += 1.0 / i;                                //为了我们能在这里取到小数 ，i的类型已经不能改变了  但是可以改变 1 的写法  写成1.0 就可以得到相应的小数
//    }
//    printf("sum = %lf\n", sum);                    // 1/ i 这里的这个/要注意 意思是商 两个整数相除 1/2 商0余1  所以sum 的表达式遍为了  sum = 1 +0 +0 +0.....+0 =0
//    return 0;
//}

//但是题目要的是一个加一个减交替进行的一个表达式   这里才是题目的真正代码
//第一种解法
//int main()
//{
//    int i = 0;
//    double sum = 0.0;
//    int flag = 1;
//    for (i = 1;i <= 100; i++)
//    {
//        sum += flag * 1.0 / i;              //这个在前面乘-1 的想法真的是太nb了
//        flag = -flag;
//    }
//    printf("sum = %lf\n", sum);                  
//    return 0;
//}
//第二种解法               我们可以根据表达式发现把所有分母为奇数的相加- 所有分母为偶数 
///这里我没有自己写出来  



//
                                                              //③求10个整数中最大值
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };                //万一数组里面的数是{-1，-2，-3，-4，-5，-6，-7，-8，-9，-10}    最好在定义max的时候选择数组中的一个数，不然就会没有结果
//    int max = 0;  //我要求max里面放置的就是最大值  我拿每个数都和max相比较一下 ，如果比max大 我就把那个数组里的数 赋值给max 
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < 10; i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//    }
//    printf("max = %d\n", max);
//    return 0;
//}
//
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//.......
//......
//....
//9*1=9 9*2=18 ...........9*9=81
                                                             //④乘法口诀表                   //这是一道很好的题目需要在后续的时间里面不断地反复训练里面的思想
//int main()
//{
//    int i = 0;                                 //先定义行在定义列   这里的列也由行来控制
//    for (i = 1; i <= 9;i++)
//    {
//        int j = 1;
//        for (j = 1;j <= i; j++)
//        {
//            printf("%d*%d=%-2d ", i, j, i * j);      //用这个代码你会发现在3*3  和4*4的时候并不是对齐的    printf("%d*%d=%d ", i, j, i * j)
//        }                                        //  这里的2 代表的是打印出来2位，不足两位的数字中间会用空格来补齐     但是%-2d  表示的是左对其     %2d表示的是右对齐
//        printf("\n");                            //%d前面加的数字只是表示数字位数
//    }
//    return 0;
//}
//
                                                         //猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字


//#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#include <stdlib.h>
//#include<time.h>
//void menu()
//{
//    printf("*****************************\n");
//    printf("****  1.play   0.exit   *****\n");
//    printf("*****************************\n");
//}
//这里引用了一个时间戳的定义   1970.1.1 00:00:00 起始
//让rand产生的32767%100  得到的数在0-99之间  在+就会生成1-100之间的数
//void game()
//{
//    //1.生成随机数                            //  RAND_MAX
//    int ret = 0;  
//              //调用rand前需要先调用srand  但是这个srand（这里面需要一个随机数）  这个随机数我们选择时间 因为不管如何每分每秒都在改变  
//    ret = rand()%100+1;           //生成随机数函数  可以从stdlib.h 中调取   rand的最大值是0x7fff 也就是十进制32767  太大了  我就想整一个在1-100内的
//   /* printf("%d\n", ret);*/
//    //2.猜数字   是一个不断循环的事情 因为你不可能一直都能猜对，你要不断的进行
//    while (1)
//    {
//        int guess = 0;
//        printf("请猜数字：> ");
//        scanf("%d", &guess);
//            if (guess > ret)
//            {
//                printf("猜大了\n");
//            }
//            else if (guess < ret)
//            {
//                printf("猜小了\n");
//            }
//            else
//            {
//                printf("恭喜你，你猜对了！\n");
//                    break;
//            }
//    }
//}
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));//  这个函数放这里就是要避免数字随机的时候容易连在一起
//    do
//    {
//        menu();
//        printf("请输入：> ");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:game();
//            break;
//       
//        case 0:
//            printf("退出游戏\n");
//            break;
//        default:
//            printf("选择错误\n");
//            break;
//        }
//    } while (input);//  判断部分                     不要忘记了do-while 语句后面的while（）;的这个分号一定不要缺少了
//    return 0;
//}



                                                        //goto语句          goto语句很烂 ，不要随意的使用goto语句
//int main()
//{
//    printf("hello bit\n");
//    goto again;
//    printf("你好\n");
//again:
//    printf("i love you\n");     //goto 语句会破坏一个程序执行的流程顺序，最终导致程序员自己也不知道这个程序到底在执行什么
//    return 0;
//}
//  但是goto也有适合的场所  ，他可以跳出很多个嵌套的语句不用break一个个来进行出循环

                                                             //一个关机程序

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    // shutdown -s-设置关机   -t设置时间关机    60--时间
    //           -a  是取消关机
    //            system（）是用来执行系统命令的
    char input[30] = { 0 };
    system("shutdown -s -t 60");
  again:
    printf("请注意，你的电脑将在一分钟后关机，如果输入：我是猪，就会取消关机\n请输入>: \n");
    scanf("%s",input);
    if (strcmp(input, "我是猪") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}


































































































































































