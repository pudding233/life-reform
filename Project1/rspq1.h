void color(int x) //����������ɫ
	/*��
	0=��ɫ                 8=��ɫ��
	1=��ɫ                 9=����ɫ               ����
����2=��ɫ                10=����ɫ          ����
����3=����ɫ             11=��ǳ��ɫ
����4=��ɫ                12=����ɫ       ��
����5=��ɫ                13=����ɫ           ����
����6=��ɫ                14=����ɫ             ����
����7=��ɫ                15=����ɫ    */
{
	if (x >= 0 && x <= 15)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int sjs(int xyz)//ʱ��������㷨
{
	srand((rand() % 10000)+(rand() % 50000));
	h=rand() % xyz;
	return h;
}
void sj()
{
	printf("���ȡֵ");
	a = getchar();
	for (int i = 1; i <= 3; i++)
	{
		sjs(30);
		if (i == 1)
		{
			if (bzl==1)
			{
				printf("�������Ϊ%d \n", zl);
			}
			else
			{
			zl = h;
			printf("�������Ϊ%d \n", zl);
			}

		}
		if (i == 2)
		{
			if (btl==1)
			{
				if (tl>3)
				{
				     printf("�������Ϊ%d \n", tl);
				}
				else
				{
					 tl = h;
			         printf("�������Ϊ%d \n", tl);
				}

			}
			else
			{
			tl = h;
			printf("�������Ϊ%d \n", tl);
			}

		}
		if (i == 3)
		{
			if (bjj==1)
			{
			printf("��ļҾ�Ϊ%d \n", jj);
			}
			else
			{
				jj = h;
				printf("��ļҾ�Ϊ%d \n", jj);
			}


		}
	}
	a = getchar();
}
void sw()
{
		if (bszs>=1)
		{
			color(4);
			printf("����֮�� �����ָ�! \n");color(7);bszs=bszs-1;
			printf("����֮��ǰ����%d�� \n",bszs);sj();
		}
		else
		{
				color(4);
	printf("Ӣ�����ţ�����%d�� \n", year);
	color(7);
			zt=1;
		}

}
void xz()
{
       for (;1;)
		{
			fflush(stdin);//��ջ��������е�����
			a=getchar();
			if (a=='Y'||a=='N')
			{
				break;
			}
			else
			{
				printf("������Y����N: \n");
			}
		}
}
void shuju()//�����ǰ����
{
	printf("��ǰ����Ϊ%d;����Ϊ%d;�Ҿ�Ϊ%d;����ֵ%d;�㻨ǮΪ%d $\n", zl, tl, jj,xy, m);
}