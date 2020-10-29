//这也是9.25晚上练习的内容

//练习
//①计算n的阶乘。
//②计算1！+2！+3！+...10!
//③在一个有序数组中查找具体的某个数字n。编写 int binsearch(int x, int v[],int n);功能：在v[0]<=v[1]<=v[2]<=.....v[n-1]的数组中查找x；    感觉这个题目算是难题 因为题目感觉读不懂
//④编写代码，演示多个字符从两端移动，向中间汇聚
//⑤编写代码实现，模拟用户登录的场景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序）



#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>                  //你按照固有的思维觉得n*(n-1)*.....1    不好计算  但是当你转变思路从1算就会方便很多。
//#include <math.h>
#include<string.h>
////②
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1;n <= 10;n++)         
//	{                                                               //这里一点都不简单一定要好好想
//		for (i = 1; i <= n; i++)   //如果我们在这里不对ret进行定义 这里的ret  在不断的累加  1！ 2！ 3！  不在是我们想要的数     //这里可以去掉一个for循环  直接for(n = 1; n<=3;n++)
//		{                                                                            //{
//			                                                                                //     ret = ret * n                                                                                  //        }
//			ret = 1;
//			ret = ret * i;           
//		}  
//		sum = sum + ret;
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//③
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };       //题目规定是有序的数组
//	int k = 17;             //这是我定义要找的数字    
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz; i++)
//	{
//		if(k == arr[i])
//		{
//			printf("找到了，下标是： %d\n", i);
//			break;//  因为这里已经找到了我要的数字  所以不需要再继续往下继续循环了  用break跳出来
//		}
//	}
//	if (i == sz)              //这里的i都已经找到了最后一个数字了  
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//                这里 也可以使用二分法  查找的次数就会减少 速度就会变快

//④         
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;  //左下标
//	int right = sz - 1;  //右下标       所说的右下标指的是数组里面方括号的下标
//	while (left <=  right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else               //这种等于直接就是最后一种情况 不需要再将条件写上面
//		{
//			printf("找到了，下标是： %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}




//             //welcome to bit !!!!!!
               //######################
               //w#####################
               //we####################                  把这里的数组1w放到下一行的数组2中
               //wel###################
               //.....
               //welcome to bit !!!!!!
               //

//这是一个很有意思的代码
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//    char arr1[] = "welcome to bit !!!!!!";
//    char arr2[] = "#####################";
//    int left = 0;
//    int right = strlen(arr1) - 1;      //这里的strlen后面的数组不用再加[]
//
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];                //  这里的数组赋值 是要把被赋值的卸载左边   
//        arr2[right] = arr1[right];
//        printf("%s\n",arr2);
//        left++;
//        right--;
//        Sleep(1000);  //这里面的单位是毫秒  也就是 1s  在这里延时
//        system("cls");//执行命令系统的一个函数-cls---清空屏幕的意思
//    }
//    return 0;
//}


//⑤// 这里的输入三次如果都错直接跳出去  可以直接在外部定义呀

int main()
{
    char password[20] = { 0 };
    int i = 0;
    for (i = 0; i < 3; i++)      //这里到底需不需要 加这个=？？
    {
        printf("请输入密码：> ");
        scanf("%s", password);         //数组是不需要加取地址符号的
        if (strcmp(password,"123456") == 0)       //这里又有一个问题为什么==0                       // ==  不能用来比较两个字符串是否相等（password == "123456"         xxxx错误的）
        {                                             //如果password>'123456'会返回一个大于0 的数字   <则会返回一个小于0的数字    所以这里只能是==0
            printf("登陆成功\n");
            break;
        }
    }
    if (i == 3)
    {
        printf("三次密码均输入错误，退出程序\n");
    }
}
