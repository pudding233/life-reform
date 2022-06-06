void color(int x) //设置字体颜色
	/*　
	0=黑色                 8=灰色　
	1=蓝色                 9=淡蓝色               　　
　　2=绿色                10=淡绿色          　　
　　3=湖蓝色             11=淡浅绿色
　　4=红色                12=淡红色       　
　　5=紫色                13=淡紫色           　　
　　6=黄色                14=淡黄色             　　
　　7=白色                15=亮白色    */
{
	if (x >= 0 && x <= 15)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int sjs(int xyz)//时间随机数算法
{
	srand((rand() % 10000)+(rand() % 50000));
	h=rand() % xyz;
	return h;
}
void sj()
{
	printf("随机取值");
	a = getchar();
	for (int i = 1; i <= 3; i++)
	{
		sjs(30);
		if (i == 1)
		{
			if (bzl==1)
			{
				printf("你的智力为%d \n", zl);
			}
			else
			{
			zl = h;
			printf("你的智力为%d \n", zl);
			}

		}
		if (i == 2)
		{
			if (btl==1)
			{
				if (tl>3)
				{
				     printf("你的体力为%d \n", tl);
				}
				else
				{
					 tl = h;
			         printf("你的体力为%d \n", tl);
				}

			}
			else
			{
			tl = h;
			printf("你的体力为%d \n", tl);
			}

		}
		if (i == 3)
		{
			if (bjj==1)
			{
			printf("你的家境为%d \n", jj);
			}
			else
			{
				jj = h;
				printf("你的家境为%d \n", jj);
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
			printf("不死之身 生命恢复! \n");color(7);bszs=bszs-1;
			printf("不死之身当前还有%d个 \n",bszs);sj();
		}
		else
		{
				color(4);
	printf("英年早逝，享年%d岁 \n", year);
	color(7);
			zt=1;
		}

}
void xz()
{
       for (;1;)
		{
			fflush(stdin);//清空缓冲区所有的数据
			a=getchar();
			if (a=='Y'||a=='N')
			{
				break;
			}
			else
			{
				printf("请输入Y或者N: \n");
			}
		}
}
void shuju()//输出当前参数
{
	printf("当前智力为%d;体力为%d;家境为%d;幸运值%d;零花钱为%d $\n", zl, tl, jj,xy, m);
}