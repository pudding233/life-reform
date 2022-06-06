#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
//以下为自定义头文件
#include "bl.h"//变量头文件
#include "rspq1.h"//事件发生函数
#include "rsqp2.h"//年龄事件
#include "sd.h"//商店系统
#include "boos1.h"//boss 100
#include "yh.h"//银行系统
void sex()//随机性别
{
	t = time(0);
	if (t % 5 == 0)
		printf("是个男孩\n");
	else
		printf("是个女孩\n");
}
void p1()
{
	if (tl < 5 && year>7)
		sw();
	else
		if (year <= 4)
		{
			s11();
			shuju();
		}
		else
			if (year > 4 && year <= 12 && year != 7)
			{
				s12();
				shuju();
			}
			else
				if (year == 7)
				{
					s13();
					shuju();
				}
}
void p4()
{
	if (year > 20 && year <= 30)
	{
		s41();
	}
	else
	{
		if (year > 30 && year <= 40)
		{
			s42();
		}
		else
		{
				s43();
		}
	}
}
void dx()//十八岁大学代码未修改
{
}
void ss()//判断年龄发生的位置
{
	if (year <= 12)
		p1();
	else
		if (year == 13)
			s14();
		else
		{
			if (year > 13 && year <= 20)
			{
				s3();
				shuju();
			}
			else
			{
					if (year > 20 && year <= 50)
				{
					p4();
					shuju();
				}
				else
				{
					if (year>=51&&year<=60)
					{
						s44();
						shuju();
					}
					else
					{
						if (year>60&&year<=70)
						{
							s51();
							shuju();
						}
						else
						{
							if (year>70&&year<=80)
							{
								s52();
								shuju();
							}
							else
							{
								if (year>80&&year<=90)
								{
									s53();
									shuju();
								}
								else
								{
									if (year>90&&year<=99)
									{
										s54();
										shuju();
									}
									else
									{
										if(year==100)
											s61();
										shuju();
									}
								}
							}
						}
					}
				}
			}
		}
}
void debug()
{
	if (admin)
	{
	jj=10000;
	tl=10000;
	m=1000000;
	zl=100000;
		if (admin==2)
		{
			bszs=10000;
		}
	}
}

void s()
{
	for (year = 1; year <= 100; year++)
	{
		if (zt==1)
		{
			break;
		}
		printf("你现在%d岁:\n", year);
		if (admin==1)
		{
			printf("admin 重置 \n");debug();
		}
		if (tl < 3 && year>7)
			if(jj>20)
			{
				printf("你的生命垂危，你的家庭带你去了当地最好的医院\n体力为5\n家境为0\n");tl=5;jj=0;
				shuju();
			}
			else
			{
				sw();
			}
		else
		{
			ss();
		}
		printf("回车开始继续(A进入商店)\n");
		fflush(stdin);
		a = getchar();
		if (a=='A')
		{
			sd();
		}
	}
}
int main(void)
{
	color(2);
	printf("/****************************************/ \n");
	printf("     人生洗牌 by 21计1 某人    \n");
	printf("     该程序由C语言完成基本结构     \n");
	printf("             版本v0.8 BETA3          \n");
	printf("            作者已摆烂                  \n");
	printf("/****************************************/ \n");
	color(7);
	srand(time(0));//随机数初始化
	admin=0;//1为开启测试模式 0为取消测试模式 2为不死模式
	printf("你出生了");
	for (;1;)
	{
	debug();
	sex();
	sj();
	s();
	if (zt==1)
	{
	    zt=0;
		int qwe;
		system("CLS");
		printf("是否继续游戏(结束请输入1):\n");
		scanf("%d",&qwe);
		if (qwe==1)
		{
			break;
		}
	}
	else
	{
		break;
	}
	}
	a = getchar();
}