#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
//����Ϊ�Զ���ͷ�ļ�
#include "bl.h"//����ͷ�ļ�
#include "rspq1.h"//�¼���������
#include "rsqp2.h"//�����¼�
#include "sd.h"//�̵�ϵͳ
#include "boos1.h"//boss 100
#include "yh.h"//����ϵͳ
void sex()//����Ա�
{
	t = time(0);
	if (t % 5 == 0)
		printf("�Ǹ��к�\n");
	else
		printf("�Ǹ�Ů��\n");
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
void dx()//ʮ�����ѧ����δ�޸�
{
}
void ss()//�ж����䷢����λ��
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
		printf("������%d��:\n", year);
		if (admin==1)
		{
			printf("admin ���� \n");debug();
		}
		if (tl < 3 && year>7)
			if(jj>20)
			{
				printf("���������Σ����ļ�ͥ����ȥ�˵�����õ�ҽԺ\n����Ϊ5\n�Ҿ�Ϊ0\n");tl=5;jj=0;
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
		printf("�س���ʼ����(A�����̵�)\n");
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
	printf("     ����ϴ�� by 21��1 ĳ��    \n");
	printf("     �ó�����C������ɻ����ṹ     \n");
	printf("             �汾v0.8 BETA3          \n");
	printf("            �����Ѱ���                  \n");
	printf("/****************************************/ \n");
	color(7);
	srand(time(0));//�������ʼ��
	admin=0;//1Ϊ��������ģʽ 0Ϊȡ������ģʽ 2Ϊ����ģʽ
	printf("�������");
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
		printf("�Ƿ������Ϸ(����������1):\n");
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