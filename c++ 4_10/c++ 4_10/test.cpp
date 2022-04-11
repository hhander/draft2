#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
using namespace std;
#include<string>
#include<time.h>
//int main()
//{
//	/*printf("hello");*/
//	cout << "hello";
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	cout << "a = " << a<<endl;
//	return 0;
//}

#define MAX 100
//enum day
//{
//	monday=1,
//	tuesday
//};
//
//int main()
//{
//	/*int a = MAX;
//	printf("%d", a);*/
//
//int a = 12;
//printf("一年有%d个月", a);
//	//a = 11;
//int 
//
//}


//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = num1 + num2;
//	cout << sum<<endl;//endl换行符 "\n"
//	printf("endl");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (1)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		i++;
//		printf("%d", i);
//	}
//}

//int main()
//{
//	//int a = 0;
//	//cin >> a;
//	//cout << a;
//	float a = 3.145159f;
//	cout << a<<endl;
//	printf("%.5f", a);
//}

//int main()
//{
//	char a = 'd';
//	//printf("%d", a);*/
//	//a = 'b';
//	cout << 'a'-32 << endl;
//	printf("%c\n", 'B' + 32);
//	cout << sizeof(a) << "个字节";
//	return 0;
//}



//int main()
//{
//	string arr1 = "hello";
//	cout << arr1<<endl;
//	char arr2[] = "hello";
//	printf("%s\n", arr2);
//	cout << arr2 << endl;
//	return 0;
//}

//int main()
//{
//	string arr = "abcdef";
//	char ch[] = "abc0";
//	/*cin >> arr;*/
//	/*cout << arr<< endl;
//	cout << ch[2];*/
//	//cin >> ch;
//	//cout << ch;
//
//	bool flag = false;
//	cout << flag;
//	cout << "请给bool flag赋值" << endl;
//	cin >> flag;
//	cout << flag<<endl;
//	return 0;
//}



//int main()
//{
//	float a = 10;
//	float b = 20;
//	float c = a / b;
//	cout << c;
//	return 0;
//}


//int main()
//{
//	int a = 100;
//	printf("%#x", a);
//	return 0;
//}

//int main()
//{
//    int count = 0;
//    double a;
//    scanf("%lf", &a);
//    while (a % 1 != 0)
//    {
//        count++;
//        a = a * 10;
//    }
//    printf("%d", count);
//    return 0;
//}

//int main()
//{
//    int a;
//    cin >> a;
//    cout << a % 10;
//    return 0;
//}

//int main()
//{
//    int seconds;
//    scanf("%d", &seconds);
//    int h = seconds / 3600;
//    printf("%d", h);
//    seconds = seconds - 3600 * h;
//    int Minute = seconds / 60;
//    printf("%d", Minute);
//    seconds = seconds - 60 * Minute;
//    printf("%d", seconds);
//    return 0;
//}

//int main()
//{
//    int seconds;
//    scanf("%d", &seconds);
//    int h = seconds / 3600;
//    printf("%d ", h);
//    seconds = seconds % 3600;
//    int Minute = seconds / 60;
//    printf("%d ", Minute);
//    seconds = seconds % 60;
//    printf("%d", seconds);
//
//    return 0;
//}

//int main()
//{
//    int n;
//    int sum = 1;
//    scanf("%d", &n);
//    while (n--)
//    {
//        sum = sum * 2;
//    }
//
//    printf("%ld", sum);
//    return 0;
//}
//#include<stdlib.h>
//
//int cmp_double(void* a, void* b)
//{
//    if (*(double*)a - *(double*)b > 0)
//        return 1;
//    else if (*(double*)a - *(double*)b < 0)
//        return -1;
//    else
//        return 0;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    float arr[100] = { 100.0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%f", &arr[i]);
//    }
//    qsort(arr, 100, sizeof(float), cmp_double);
//    float sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        sum = sum + arr[i];
//    }
//    float equl = sum / n;
//    printf("%.2f %.2f %.2f", arr[n - 1], arr[0], equl);
//    return 0;
//}




//int main()
//{
//	double d1 = 3.14;
//	double d2 = 2.1;
//	cout << (int)d1 % (int)d2<<endl;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++ * 10;
//	cout << "b=" << b;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	a += 2;
//	cout << a;
//	cerr;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = a++ || b++;
//	cout << "a=" << a << "b=" << b << endl;
//
//}

//int main()
//{
//		int a;
//		cin >> a;
//		if (a > 12)
//		{
//			cout << "ok" << endl;
//		}
//		else if (a > 10)
//		{
//			cout << "no"<<endl;
//		}
//		else if (a > 8)
//		{
//			cout << "nn";
//		}
//	return 0;
//}

//int main()
//{
//	float a, b, c;
//	cin >> a>>b>>c;
//	if (a >= b && a >= c)
//	{
//		cout << "a";
//	}
//	else if (b >= a && b >= c)
//	{
//		cout << "b";
//	}
//	else if (c >= a && c >= b)
//	{
//		cout << "c";
//	}
//	else
//	{
//		cout << "same";
//	}
//}

//int main()
//{
//	float a, b, c;
//	/*cin >> a >> b >> c;*/
//	scanf("%f%f%f", &a, &b, &c);
//
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a > b ? a : b;
//	cout << c;
//	return 0;
//}


//int main()
//{
//	int i = 10;
//	while (i)
//	{
//		i--;
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//
//}

//int main()
//{
//	int i;
//	for (i = 0; i < 9; i++)
//	{
//		int j;
//		for (j = 0; j <= i;)
//		{
//			j++;
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (0)
//	{
//		cout << i++;
//	}
//}

/*oid game()
{
	int x = 1 + rand() % 100;
	int guess;
	while (1)
	{
		cout << "请输入数字"<<endl;
		cin >> guess;
		if (guess > x)
		{
			cout << "猜大了"<<endl;
		}
		else if (guess < x)
		{
			cout << "猜小了" << endl;
		}
		else
		{
			cout << "恭喜你猜对了" << endl;
			break;
		}

	}




}


void menu()
{
	cout << "**********************" << endl;
	cout << "****1. play 0. quit***" << endl;
	cout << "**********************" << endl;

}
int main()
{
	printf("猜数字");
	int input;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		cout << "请选择0 or 1";
		cin >> input;
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			cout << "退出游戏";
			break;
		}
		default:
		{
			cout << "输入有误";
		}
		}
	} while (input);
}*/




//int main()
//{
//	int i;
//	for (i = 1; i < 10000000; i++)
//	{
//		int tmp = i;
//		int count = 0;
//		while (tmp)
//		{
//			++count;
//			tmp /= 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum = sum + (int)pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (i == sum)
//		{
//			cout << i << endl;
//		}
//	}
//	return 0;
//}



