/*
//认识cpp第一个程序
#include<iostream>
int main()
{
	std::cout<<"Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin>> v1 >> v2;
	std::cout<< "The sum of " << v1 << " and " << v2
	<< " is " << v1 + v2 <<std:: endl;
	return 0;
}

//练习1.3 编写Hello world
#include<iostream>
int main()
{
	std::cout << "HEllo, World" <<std::endl;
	return 0;
}

练习1.4 加法变乘法
#include<iostream>
int main()
{
	std::cout<<"Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin>> v1 >> v2;
	std::cout<< "The sum of " << v1 << " and " << v2
	<< " is " << v1 * v2 <<std:: endl;
	return 0;
}

//练习1.5
#include<iostream>
int main()//练习1.5
{
	std::cout<<"Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin>> v1 >> v2;
	std::cout<< "The sum of " ;
	std::cout<< v1 ;
	std::cout<< " and " ;
	std::cout<< v2 ;
	std::cout<< " is " ;
	std::cout<< v1 + v2 <<std:: endl;
	return 0;
	}
*/
//练习1.8

//#include<iostream>
//int main()
//{
	//std::cout<< "/*" ;
	//std::cout<< "*/" ;
	//std::cout<< /* " */ " /* " /* " */ <<std:: endl;
	//return 0;
//}
/*
//while 语句 1 加到 10
#include<iostream>
int main()
{
	int sum = 0 ,val = 1;
	//只要val的值小于等于10，while循环就会持续执行
	while (val <= 10)
	{
		sum += val ;//将sum + val 赋予 sum
		++ val ;//将 val 加1
	}
	std::cout<<"Sum of 1 to 10 inclusive is "
	<< sum << std::endl;
	return 0 ;
}

// practice 1.9   50 to 100 inclusive 
#include<iostream>
int main()
{
	int sum = 0 ,val = 50;
	//只要val的值小于等于10，while循环就会持续执行
	while (val <= 100)
	{
		sum += val ;//将sum + val 赋予 sum
		++ val ;//将 val 加1
	}
	std::cout<<"Sum of 50 to 100 inclusive is "
	<< sum << std::endl;
	return 0 ;
}

// practice 1.10 : 10 to 1 print every number
#include<iostream>
int main()
{
	int val = 10 ;
	while (val >= 0)
	{
		std::cout<< val <<" ";
		val --;
	}
	return 0;
}

//practice 1.11: print every numbers which user input
#include<iostream>
int main()
{
	int a , b ;
	std::cin>> a >> b ;
	if (a< b)
	{
		int c;
		c = a;
		a = b;
		b = c;
	}
	while (a > b + 1)
	{
		b++;
		std::cout<< b<<" ";
	}
	return 0;
}
//1.4.2 for 
#include<iostream>
int main()
{
	int sum =0;
	// 从1加到10
	for (int i = 0; i <=10; i++)
		sum += i;//等价于sum = sum + i
	std::cout<<"Sum of 1 to 10 inclusive is "
		<< sum <<std::endl;
	return 0;
}

// practice 1.13
#include<iostream>
int main()
{
	int sum = 0;
	for (int i = 50; i <= 100; i++)
	{
		sum += i;
	}
	std::cout<<sum<<std::endl;
	return 0;
}

//1.43 数量不定的输入
#include<iostream>
int main()
{
	int sum = 0 , value = 0;
	//读取数据直到遇到文件尾，计算所有读入的值的和
	while (std::cin >> value)
		sum += value ; // 等价于 sum = sum + value
	std::cout << "Sum is: "<< sum << std::endl;
	return 0;
}


//1.4.4if 记数法
#include<iostream>
int main()
{
	// currVal 是我们正在统计的数；我们将读入的新值存入val
	int currVal = 0, val = 0;
	//读取第一个数，并确保确实有数据可以处理
	if (std::cin >> currVal)
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if (val == currVal)
				++cnt;
			else{
				std::cout << currVal <<" occurs "
						  << cnt <<" times"<<std::endl;
				currVal = val ;
				cnt = 1;
			}
		}//while在这里结束
		//记住打印文件最后的一个值的个数
		std::cout << currVal <<" occurs "
				  << cnt <<" times"<<std::endl;
	}//最外层的if语句在这里结束
	return 0;
}


//类类型
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item book ;
	//读入ISBN号、售出的册数以及销售价格
	std::cin>> book ;
	//写入ISBN、售出的册数、总销售额和平均价格
	std::cout<< book <<std::endl;
	return 0;
}


//读写Sales_item
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item book ;
	//读入ISBN号、售出的册数以及销售价格
	std::cin>> book;
	//写入ISBN、售出的册数、总营销额和平均价格
	std::cout<< book <<std::endl;
	return 0;
}

*/

#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item item1,item2 ;
	std::cin>> item1>>item2;
	std::cout<<item1 + item2<<std::endl;
	return 0;
}
