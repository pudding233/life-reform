void s61()
{
	if (zl>200&&tl>200&&jj>100)
	{
		fflush(stdin);//清空缓冲区所有的数据
		int boss,my;
		boss=100;my=100;
		for (; boss>=0&&my>=0;)
		{
			system("CLS");
			//绘制boss UI 开始
			printf("  boss 血量 %d/100 \n",boss);
			printf(" ┏━━━━━━━━━━┓\n");
			printf(" ┃");
			for (int i = 0; i < 10; i++)
			{
				if (i<=boss/10)
				{
					printf("■");
				}
				else
				{
					printf("□");
				}
			}
			printf("┃\n");
			printf(" ┗━━━━━━━━━━┛");
			//绘制boss UI 结束
			printf("\n \n");
			//绘制my UI 开始
			printf("  我的血量 %d/100 \n",my);
			printf(" ┏━━━━━━━━━━┓\n");
			printf(" ┃");
			for (int i = 0; i < 10; i++)
			{
				if (i<=my/10)
				{
					printf("■");
				}
				else
				{
					printf("□");
				}
			}
			printf("┃\n");
			printf(" ┗━━━━━━━━━━┛");
			//绘制my UI 结束
			printf("\n \n \n");
			//绘制技能 开始
			printf(" 输入A 使用平A\n 输入B 使用小招\n 输入C 使用大招\n 输入D 使用法典 \n");
			for (;1;)
		   {
			fflush(stdin);//清空缓冲区所有的数据
			a=getchar();
			if (a=='A'||a=='B'||a=='C'||a=='D')
			{
				if (a=='A')
				{
					sjs(30);
					printf("BOSS 血量-%d \n",h);boss=boss-h;fflush(stdin);ld=ld-1;
					b=getchar();
					break;
				}
				else
				{
					if (a=='B')
					{
						if (ld<=0)
						{
					            printf("BOSS 血量-20 \n小招和大招的使用冻结3回合\n");boss=boss-20;ld=4;fflush(stdin);ld=ld-1;
					            b=getchar();
					            break;
						}
						else
						{
							printf("冻结期无法出招 还要%d回合\n",ld);
						}
					}
					else
					{
						if (a=='C')
						{
							if (ld<=0)
							{
								sjs(100);
					            printf("BOSS 血量-%d \n小招和大招的使用冻结5回合\n",h);boss=boss-h;ld=6;ld=ld-1;fflush(stdin);
					            b=getchar();
					            break;
							}
							else
							{
								printf("冻结期无法出招 还要%d回合\n",ld);
							}
						}
						else
						{
							if (a=='D')
							{
								printf("BOSS 血量-%d \n之后的回合此招攻击力为0\n",js);boss=boss-js;js=0;fflush(stdin);
					            b=getchar();
					            break;
							}
						}
					}
				}
			}
			else
			{
				printf("请输入招数: \n");
			}
		    }
			sjs(2);
			if (h==1)
			{
				printf("BOSS 使用了A技能\n你扣了10点血\n");my=my-10;
				fflush(stdin);
				b=getchar();
			}
			else
			{
				printf("BOSS 使用了B技能\n你扣了25点血\n");my=my-20;
				fflush(stdin);
				b=getchar();
			}
		}
			system("CLS");
			//绘制boss UI 开始
			printf("  boss 血量 %d/100 \n",boss);
			printf(" ┏━━━━━━━━━━┓\n");
			printf(" ┃");
			for (int i = 0; i < 10; i++)
			{
				if (i<=boss/10)
				{
					printf("■");
				}
				else
				{
					printf("□");
				}
			}
			printf("┃\n");
			printf(" ┗━━━━━━━━━━┛");
			//绘制boss UI 结束
			printf("\n \n");
			//绘制my UI 开始
			printf("  我的血量 %d/100 \n",my);
			printf(" ┏━━━━━━━━━━┓\n");
			printf(" ┃");
			for (int i = 0; i < 10; i++)
			{
				if (i<=my/10)
				{
					printf("■");
				}
				else
				{
					printf("□");
				}
			}
			printf("┃\n");
			printf(" ┗━━━━━━━━━━┛\n");
			//绘制my UI 结束
			if (my>0)
			{
			printf("你已击杀BOOS \n");
			printf("游戏结束\n");
			for (b = 0; b < 100; b++)
			{
				printf("游戏结束 已通关\n");
				b=getchar();
			}
			}
			else
			{
				printf("你死亡\n");		
					for (b = 0; b < 100; b++)
			{
				printf("死亡 请重新打开游戏\n");
				b=getchar();
			}
			}

	}
	else
	{
		printf("修仙失败 \n智力低于200\n体力低于200\n家境低于100\n");
		zt=1;sw();
	}
}