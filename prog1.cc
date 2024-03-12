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


#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item item1,item2 ;
	std::cin>> item1>>item2;
	std::cout<<item1 + item2<<std::endl;
	return 0;
}

#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cin>>item1 >>item2;
	//首先检查item1和item2是否是相同的书
	if (item1.isbn() == item2.isbn())
	{
		std::cout<< item1 + item2 <<std::endl;
		return 0 ;// 表示成功 
	} else
	{
	std::cerr<<"Data must refer to same ISBN"<< std::endl;
	return -1;  // 表示失败
	}
}

//practice 1.23
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item item1, item2 ;
	int num1 = 1;
	while (1)
	{
		item2 = item1;
		std::cin>> item1;
		if (item1.isbn() == item2.isbn())
		{
			num1 += 1;
		}
		else if (num1 != 0)
		{
			std::cout<<num1<<std::endl;
		}
	}
	return 0;
}



//1.6 书店程序
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item total; //保存和的变量
	//读入第一条交易记录，并确保有数据可以处理
	if (std::cin >> total)
	{
		Sales_item trans;  //保存下一条交易记录的变量
		//读入并处理剩余交易记录
		while (std::cin>> trans )
		{
			//如果我们仍在处理相同的书
			if (total.isbn() == trans.isbn())
			{
				total += trans; // 更新销售总额
			}
			else 
			{
				//打印前一本书的结果
				std::cout<< total <<std::endl;
				total = trans; // total现在表示下一本书的销售额	
			}
		} 
		std::cout<< total <<std::endl; // 打印最后一本书的结果
	}else
	{
		// 没有输入！警告读者
		std::cerr <<"No data?!"<< std::endl;
		return -1;// 表示失败
	}
	return 0;-
}


*/
//2.1
// #include<iostream>
// int main()
// {
// 	unsigned u = 10;
// 	int i =-42;
// 	std::cout<<i + i<<std::endl;
// 	std::cout<<u + i<<std::endl; // 由以下式子验证得，4296947264 + 42（i） - 10(u)= 2的32次方 及把负号转化为无符号数的过程为2的32次方加上此负数
// 	//2的32次方为4294967296
// 	long long j = 4294967264+32;
// 	int sum = 0;
// 	while (j != 0)
// 	{
// 		j = j/2;
// 		sum ++;
// 	}
// 	std::cout<< sum-1 <<std::endl;
// 	unsigned u1 = 42 , u2 = 10;
// 	std::cout<< u1 + u2 <<std::endl;
// 	std::cout<< u2 - u1 <<std::endl;

//2.1.2验证
// 	u = 10 , u2 = 42;
// 	std::cout<< u - u2 <<std::endl;
// 	std::cout<< u2 - u <<std::endl;

// 	i = 10 ;
// 	int i2 = 42;
// 	std::cout<< i - i2 <<std::endl;
// 	std::cout<< i2 - i <<std::endl;
// 	std::cout<< i  - u <<std::endl;
// 	std::cout<< u - i <<std::endl;
// }

// 20 //十进制
// 024 //八进制
// 0x14 //十六进制

//转义序列
// #include<iostream>
// int main()
// {	
// 	std::cout<< '\n';
// 	std::cout<<"\t Hi! \n";
// 	std::cout<< "Hi \x4dO\155!\n";
// 	std::cout<< '\155' <<'\n';
// }



#include<iostream>
#include"Sales_item.h"
//#include cstdlib
using std::cout;
using std::endl;
	//2.4.4
	// constexpr int *np = nullptr;	//np是一个指向整数的常量指针，其值为空
	// int j = 0;
	// constexpr int i = 42;
	// //i 和 j 都必须定义在函数体之外
	
int main()
{
//练习2.5
	// 'a' //char
	// L'a' //wchar_t
	// "a" //str
	// L"a" //wchar_t
	// 10 //int
	// 10u //unsigned
	// 10L //long
	// 10ul //unsigned long
	// 012 //8进制
	// 0xC //16进制
	// 3.14 //浮点型字面值
	// 3.14f //float 
	// 3.14l //long double
	// 10. //浮点型
	// 10e-2 //科学计数法浮点型

//练习2.6
	// int month = 9. day =7; //true
	// int month = 09 ,day =07;// false

//练习2.7
	// "Who goes with F\145rgus?\012"; //Who goes with F*rgus?(换行)
	// 3.14e1L; //3.14的*10 long型
	// 1024.f; // float 型浮点型
	// 3.14l; // long double型浮点型

//练习2.8
	// std::cout<< "2\115\n"<<"2\t\115\n"<<std::endl;//正确

//2.2变量
//2.2.1
	// int sum = 0 ,value, //sum、value和units_sold  都是int
	// units_sold = 0; // sum和units_sold 初值都是0；
	// Sales_item item; ///item的类型是Sales_item
	// //string 是一种库类型，表示一个可变长的字符序列
	// std::string book("0-201-78345-X"); //book 通过一个string字面值初始化
//2.2.4
	// int sum = 0;
	// //sum用于存放1到10所有数的和
	// for (int val = 1; val <= 10; val++)
	// {
	// 	sum += val;//等价于sum =sum +val
	// }
	// std::cout<<"Sum of 1 to 10 inclusive is "
	// 	 	 << sum <<std::endl;
	// return 0;
//2.3.1引用
	// int ival = 1024;
	// int &refVal = ival;
	// //int &refVal2 ; 报错：引用必须被初始化
	// refVal = 2;//把2赋给refVal指向的对象上，此处即是赋给了ival
	// int li = refVal; //与li = ival的执行结果一样
	// //正确 ：refVal3绑定到了那个与refVal绑定的对象上，这里就是绑定到了ival上
	// int &refVal3 = refVal;
	// //利用与refVal绑定的对象的值初始化变量i
	// int i = refVal; //正确：i被初始化无畏ival的值
	
//2.3.2指针
//利用指针访问对象（解引用符*)
	// int ival = 42;
	// int *p = &ival; //p存放着变量ival的地址，或者说p是指向变量ival的指针
	// std:: cout << *p; //由符号*得到指针p所指的对象，输出42

	// *p = 0;//
	// std::cout<< *p ; //输出0
//生成空指针
	// int *p1 = nullptr; // 等价于int *p1 = 0；
	// int *p2 = 0; 	//直接将p2初始化为字面常量0
	// int *p3 = NULL;  //等价于int *p3 = 0 ，只有在引用头文件cstdlib才可使用
//2.3.3复合类型声明
//指向指针的指针
// 	int ival = 1024;
// 	int *pi = &ival; // pi指向一个int型的数
// 	int **ppi = &pi; // ppi指向一个int型的指针

// 	cout << "The value of ival \n"
// 		<< "direct value: " << ival << "\n"
// 		<< "indirect value: " << *pi << "\n"
// 		<< "doubly indirect value: " << **ppi
// 		<< endl;

//指向指针的引用


// 	int i =42;
// 	int *p;
// 	int *&r = p;

// 	r = &i;
// 	*r = 0;

//const 的引用
	// const int ci = 1024;
	// const int &r1 = ci; // true ：引用机器对应的对象的都是常量
	// r1 = 42 ; // flase ：r1 是对常量的引用
	// int &r2 = ci ; //false : 试图让一个非常量引用指向一个常量对象

//初始化和最const的引用
	// int i = 42;
	// const int &r1 = i ; //允许将const int &绑定到一个普通int对象上
	// const int &r2 = 42; //true：r2是一个常量引用
	// const int &r3 = r1 * 2; //true：r3是一个常量引用
	// int &r4 = r1 *2; //false：r4是一个普通的非常量引用1

	// int i = 42 ;
	// int &r1 = i; // 引用r1 绑定对象i
	// const int &r2 = i; //r2也绑定对象i，但是不允许通过r2修改i的值
	// r1 = 0; // r1并非常量，i的值修改为0
	// r2 = 0; //false：r2是一个常量引用

//const 指针
	// int errNumb = 0;
	// int *const curErr = &errNumb;	//curErr 将一直指向errNumb
	// const double pi = 3.141559 ;
	// const double *const pip = &pi;	//pip是一个指向常量对象的常量指针

	// *pip = 2.72;	//false ：pip是一个指向常量的指针
	// 				//如果curErr所指的的对象（也就是errNumb）的值不为0
	// if (*curErr)
	// {
	// 	errorHandler(); 		//未查到相关解释
	// 	*curErr = 0;	//ture：把curErr所指的对象重置
	// }

//顶层const
	// int i = 0;
	// int *const p1 = &i;	 //不能改变p1的值，这是一个顶层const
	// const int ci = 42;	//不能改变ci的值，这是一个顶层const
	// const int *p2  = &ci;	//允许改变p2的值，这是一个底层const
	// const int *const p3 = p2;	//靠右的const是顶层const，靠左的是底层cosnt
	// const int &r = ci;	//用于声明引用的const都是底层const

	// i = ci;		//ture:拷贝ci的值，ci是一个顶层const，对此操作无影响
	// p2 = p3;	//ture：p2和p3指向的对象类型想用，p3顶层const的部分不影响

	// // int *p = p3;	//flase:p3包含底层const的定义，而p没有
	// p2 = p3;
	// p2 = &i;	//ture:int*能转化为const int*
	// // int &r = ci;	//false:普通的int&不能绑定到int常量上
	// const int &r2 = i;	//ture:const int& 可以绑定到一个普通int上	
	
//practice  2.30 
	// const int v2 = 0;	//顶层const
	// int v1 = v2;  
	// int *p1 = &v1 ,&r1 = v1;
	// const int *p2 = &v2, *const p3 =&r1, &r2 = v2;	//p2是顶层const,p3是底层const

	// r1 = v2;
	// p1 = p2;
	// p2 = p1;
	// p1 = p3;
	// p2 = p3;

//2.4.4constexper和常量表达式
	// constexpr int mf = 20;
	// constexpr int limit = mf + 1;
	// //constexpr int sz = size();	//只有当size是一个constexpr函数时才是一条正确的声明语句

	// const int *p = nullptr;		//p是一个指向整数的常量指针，指向常量的指针
	// constexpr int *q = nullptr;	//q是一个指向整数的常量指针，常量指针，（顶层const）


	// constexpr const int *p = &i;	//p是常量指针，指向整型常量i
	// constexpr int *p1 = &j; 		//p1是常量指针，指向整数j
	
}  
	