//年龄事件
void s11()//0-4 判断
{
	sjs(10);
	switch (h)
	{
	case 0:printf("你现在生活在农村\n家境-2\n"); jj = jj - 2; break;
	case 1:printf("你现在生活在城市\n家境+10\n"); jj = jj + 10; break;
	case 2:m = m - 10; color(4); printf("你丢了了零花钱10块\n你现在的零花钱总数%d\n", m); color(7); break;
	case 3:printf("扫黑除恶专项斗争到了你所在的地方\n"); break;
	case 4:printf("国家扶持，你家获得了帮助\n家境+2\n"); jj = jj + 2; break;
	case 5:printf("国家扶持，你家获得了帮助\n"); color(4); printf("你的钱被黑恶势力抢走了\n家境清0\n"); color(7); jj = 0; break;
	case 6:printf("老人给了你一本法典\n攻击+1\n");js=js+1; break;
	case 7:m = m + 10; printf("你得到了零花钱10块\n你现在的零花钱总数%d \n", m); break;
	case 8:printf("你家屋檐上多了个燕子窝\n"); break;
	case 9:printf("什么也没发生\n"); break;
	default:
		printf("抱歉 程序错误 错误区域s11 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s12()//5-12 判断
{
	sjs(10);
	switch (h)
	{
	case 0:printf("你因为犯错而被罚抄课文\n智力-2\n"); zl = zl - 2; break;
	case 1:printf("你挂科了\n智力-2\n"); zl = zl - 2; break;
	case 2:printf("你成为了三好学生\n智力+3\n"); zl = zl + 3; break;
	case 3:printf("你的作文被当作范文朗读,但是你觉得很尴尬\n智力+3\n"); zl = zl + 3; break;
	case 4:printf("你出了车祸\n智力-10\n"); zl = zl-10; break;
	case 5:printf("受到了天赋加持[启蒙]\n智力+30\n"); zl = zl + 30;; break;
	case 6:printf("老人给了你一本法典\n攻击+1\n");js=js+1; break;
	case 7:printf("你生了大病\n体力-5\n"); tl = tl - 5; break;
	case 8:printf("你喝了碗煲汤\n体力+10\n"); tl = tl + 10; break;
	case 9:printf("无事发生\n"); break;
	default:
		printf("抱歉 程序错误 错误区域s12 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s13()//七岁小学判断
{
	sjs(2);
	switch (h)
	{
	case 0:printf("你上了野鸡小学\n家境-5\n智力-5\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("你上了名牌小学\n家境+5\n智力+5\n"); zl = zl + 5; jj = jj + 5; break;
	case 2:printf("你上了野鸡小学\n家境-5\n智力-5\n"); zl = zl - 5; jj = jj - 5; break;
	default:
		printf("抱歉 程序错误 错误区域s13 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s14()//十三岁初中判断
{
	sjs(2);
	if (h == 0)
	{
		printf("考上了 重点初中\n智力+20\n");
		zl = zl + 20;
		shuju();
	}
	else
	{
		if (h == 1)
		{
			printf("考上了 重点初中\n但是被人冒名顶替\n家境-10\n体力-10\n智力-10\n");
			zl = zl - 10;
			jj = jj - 10;
			tl = tl - 10;
			shuju();
		}




		else
		{
			printf("考上了 普通初中\n智力+10\n");
			zl = zl + 10;
			shuju();
		}
	}
}
void s3()//14-20
{
	sjs(10);
	switch (h)
	{
	case 0:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 2:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 4:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 5:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 6:printf("老人给了你一本法典\n攻击+1\n");js=js+1; break;
	case 7:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 8:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	default:
		printf("抱歉 程序错误 错误区域s13 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s41()//21 -30
{
	if (tl>50)
	{
		sjs(20);
	}
	else
	{
		sjs(10);
	}
	switch (h)
	{
	case 0:printf("特朗普宣称要发动核战争\n");break;
	case 1:printf("特朗普宣称要发动核战争\n全球经济低迷\n");sjs(2);if(h==1)
	{
		printf("美国发动核战争,你作为百姓死亡了\n");
		sw();
	}; break;
	case 2:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 4:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 5:printf("世界第三次战争疑似开始\n"); break;
	case 6:a=0;system("CLS");printf("你遇到了一个老年人，你要去帮助吗?（Y/N）");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(10000);
					 printf("你被讹了%d元\n老人给了你一本法典\n攻击+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(10000);
					 printf("老年人十分感动给了你%d元\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("你上了新闻，受到了道德谴责\n");break;
				 }
				 else
				 {
					 printf("你没有去帮忙\n");break;
				 }
		default:
			printf("抱歉 程序错误 错误区域s41-6 h大小%d a大小%c %d",h,a,a);
			break;
		} break;
	case 7:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 8:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	case 10:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 12:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 13:printf("你买的彩票中奖了\n零花钱+5000"); m=m+5000;; break;
	case 14:printf("你放弃了人生\n");sw(); break;
	case 15:printf("你学会了赌博\n家境-50\n零花钱-1000"); jj = jj -50;m=m-1000; break;
	case 16:printf("你捡到了1000元");m=m+1000; break;
	case 17:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 18:printf("什么也没发生\n");  break;
	case 19:printf("日本核泄漏\n将核废料排入大平洋\n"); break;
    case 20:printf("日本核泄漏");  break;
	default:
		printf("抱歉 程序错误 错误区域s13 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s42()//31-40
{
		if (jj>50)
	{
		sjs(20);
	}
	else
	{
		sjs(10);
	}
	switch (h)
	{
	case 0:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 2:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("你开始厌倦这个世界\n"); break;
	case 4:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 5:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 6:printf("老人给了你一本法典\n攻击+1\n");js=js+1; break;
	case 7:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 8:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	case 10:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("你遇到了一个老年人，你要去帮助吗?（Y/N）");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(30000);
					 printf("你被讹了%d元\n老人给了你一本法典\n攻击+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(30000);
					 printf("老年人十分感动给了你%d元\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("你上了新闻，受到了道德谴责\n");break;
				 }
				 else
				 {
					 printf("你没有去帮忙\n");break;
				 }
		default:
			printf("抱歉 程序错误 错误区域s42-12 h大小%d a大小%c %d",h,a,a);
			break;
		}  break;
	case 13:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 14:printf("你放弃了人生\n");sw();break;
	case 15:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 16:printf("学校盖了一栋新楼\n"); break;
	case 17:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 18:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 19:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
    case 20:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	default:
		printf("抱歉 程序错误 错误区域s13 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s43()//41-50
{
		if (tl>50)
	{
		sjs(20);
	}
	else
	{
		sjs(10);
	}
	switch (h)
	{
	case 0:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 2:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 4:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 5:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 6:printf("老人给了你一本法典\n攻击+1\n");js=js+1; break;
	case 7:a=0;system("CLS");printf("你遇到了一个老年人，你要去帮助吗?（Y/N）");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(50000);
					 printf("你被讹了%d元\n老人给了你一本法典\n攻击+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(50000);
					 printf("老年人十分感动给了你%d元\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("你上了新闻，受到了道德谴责\n");break;
				 }
				 else
				 {
					 printf("你没有去帮忙\n");break;
				 }
		default:
			printf("抱歉 程序错误 错误区域s41-6 h大小%d a大小%c %d",h,a,a);
			break;
		} break;
	case 8:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	case 10:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 12:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 13:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 14:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 15:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 16:printf("学校盖了一栋新楼\n"); break;
	case 17:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 18:a=0;printf("一个老人在卖天降法典,你买吗？只要$30000"); xz();
		if (a=='Y')
		{
			if (m>=30000)
			{
				printf("你买了一本天降法典\n攻击+10\n");js=js+10;m=m-30000;break;
			}
			else
			{
				printf("零花钱不足\n");break;
			}
		}
		else
		{
			printf("你没有买天降法典");break;
		}
	case 19:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
    case 20:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	default:
		printf("抱歉 程序错误 错误区域s13 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s44()// 51 -60
{
	char a;
		if (tl>50)
	{
		sjs(20);
	}
	else
	{
		sjs(10);
	}
	switch (h)
	{
	case 0:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 2:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 4:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 5:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 6:printf("老人给了你一本法典\n攻击+1\n");js=js+1; break;
	case 7:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 8:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	case 10:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("你遇到了一个老年人，你要去帮助吗?（Y/N）");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(100000);
					 printf("你被讹了%d元\n老人给了你一本法典\n攻击+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(100000);
					 printf("老年人十分感动给了你%d元\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("你上了新闻，受到了道德谴责\n");break;
				 }
				 else
				 {
					 printf("你没有去帮忙\n");break;
				 }
		default:

			printf("抱歉 程序错误 错误区域s41-6 h大小%d a大小%c %d",h,a,a);
			break;
		} break;
	case 13:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 14:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 15:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 16:printf("学校盖了一栋新楼\n"); break;
	case 17:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 18:a=0;system("CLS");printf("一个老人在卖天降法典,你买吗？只要$30000\n");xz();
		if (a=='Y')
		{
			if (m>=30000)
			{
				printf("你买了一本天降法典\n攻击+5\n");js=js+5;m=m-30000;break;
			}
			else
			{
				printf("零花钱不足\n");break;
			}
		}
		else
		{
			printf("你没有买天降法典\n");break;
		}
	case 19:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
    case 20:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	default:
		printf("抱歉 程序错误 错误区域s13 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s51()// 61 -70
{
	char a;
		if (tl>50)
	{
		sjs(20);
	}
	else
	{
		sjs(10);
	}
	switch (h)
	{
	case 0:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 2:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 4:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 5:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 6:printf("老人给了你一本法典\n攻击+1\n");js=js+1; break;
	case 7:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 8:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	case 10:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("你遇到了一个老年人，你要去帮助吗?（Y/N）");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(200000);
					 printf("你被讹了%d元\n老人给了你一本法典\n攻击+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(200000);
					 printf("老年人十分感动给了你%d元\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("你上了新闻，受到了道德谴责\n");break;
				 }
				 else
				 {
					 printf("你没有去帮忙\n");break;
				 }
		default:
			printf("抱歉 程序错误 错误区域s41-6 h大小%d a大小%c %d",h,a,a);
			break;
		} break;
	case 13:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 14:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 15:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 16:printf("学校盖了一栋新楼\n"); break;
	case 17:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 18:a = 0; system("CLS"); printf("一个老人在卖天降法典,你买吗？只要$30000\n"); xz();
		if (a=='Y')
		{
			if (m>=30000)
			{
				printf("你买了一本天降法典\n攻击+5\n");js=js+5;m=m-30000;break;
			}
			else
			{
				printf("零花钱不足\n");break;
			}
		}
		else
		{
			printf("你没有买天降法典\n");break;
		}
	case 19:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
    case 20:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	default:
		printf("抱歉 程序错误 错误区域s13 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s52()
{
	char a;
		if (tl>50)
	{
		sjs(20);
	}
	else
	{
		sjs(10);
	}
	switch (h)
	{
	case 0:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 2:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 4:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 5:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 6:printf("老人给了你一本法典\n攻击+1\n");js=js+1; break;
	case 7:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 8:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	case 10:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("你遇到了一个老年人，你要去帮助吗?（Y/N）");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(200000);
					 printf("你被讹了%d元\n老人给了你一本法典\n攻击+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(200000);
					 printf("老年人十分感动给了你%d元\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("你上了新闻，受到了道德谴责\n");break;
				 }
				 else
				 {
					 printf("你没有去帮忙\n");break;
				 }
		default:
			printf("抱歉 程序错误 错误区域s41-6 h大小%d a大小%c %d",h,a,a);
			break;
		} break;
	case 13:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 14:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 15:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 16:printf("学校盖了一栋新楼\n"); break;
	case 17:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 18:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 19:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
    case 20:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	default:
		printf("抱歉 程序错误 错误区域s13 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s53()//81 - 90
{
	char a;
		if (tl>50)
	{
		sjs(20);
	}
	else
	{
		sjs(10);
	}
	switch (h)
	{
	case 0:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 2:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 4:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 5:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 6:printf("老人给了你一本法典\n攻击+1\n");js=js+1; break;
	case 7:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 8:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	case 10:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("你遇到了一个老年人，你要去帮助吗?（Y/N）");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(200000);
					 printf("你被讹了%d元\n老人给了你一本法典\n攻击+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(200000);
					 printf("老年人十分感动给了你%d元\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("你上了新闻，受到了道德谴责\n");break;
				 }
				 else
				 {
					 printf("你没有去帮忙\n");break;
				 }
		default:
			printf("抱歉 程序错误 错误区域s41-6 h大小%d a大小%c %d",h,a,a);
			break;
		} break;
	case 13:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 14:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 15:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 16:printf("学校盖了一栋新楼\n"); break;
	case 17:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 18:a = 0; printf("一个老人在卖全复药水,你买吗？只要$50000\n"); xz();
		if (a=='Y')
		{
			if (m>=50000)
			{
				printf("你买了一本全复药水\n属性+100\n");jj=jj+100;tl=tl+100;zl=zl+100;;m=m-50000;break;
			}
			else
			{
				printf("零花钱不足\n");break;
			}
		}
		else
		{
			printf("你没有买全复药水\n");break;
		}
	case 19:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
    case 20:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	default:
		printf("抱歉 程序错误 错误区域s13 404 h大小%d t大小%d", h, t);
		break;
	}
}
void s54()
{
	char a;
		if (tl>50)
	{
		sjs(20);
	}
	else
	{
		sjs(10);
	}
	switch (h)
	{
	case 0:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 2:printf("你学习很累[获得了天赋加持]\n智力+20\n体力+30\n家境+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 4:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 5:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 6:printf("学校盖了一栋新楼\n"); break;
	case 7:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 8:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	case 10:printf("爸妈带你去日本旅游\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("爸妈带你去美国旅游\n"); h = rand() % 2; if (h == 1)
	{
		printf("在美国被人枪杀\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("你遇到了一个老年人，你要去帮助吗?（Y/N）");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(200000);
					 printf("你被讹了%d元\n老人给了你一本法典\n攻击+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(200000);
					 printf("老年人十分感动给了你%d元\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("你上了新闻，受到了道德谴责\n");break;
				 }
				 else
				 {
					 printf("你没有去帮忙\n");break;
				 }
		default:
			printf("抱歉 程序错误 错误区域s41-6 h大小%d a大小%c %d",h,a,a);
			break;
		} break;
	case 13:printf("你做作业做到晚上\n智力+5"); zl = zl + 5; break;
	case 14:printf("你经常使用巴拉巴拉(BILIBILI)\n"); break;
	case 15:printf("你学会了赌博\n家境-50\n"); jj = jj - 50; break;
	case 16:printf("学校盖了一栋新楼\n"); break;
	case 17:printf("你到奶茶店，买了杯火龙果奶盖\n零花钱-12\n"); m = m - 12; break;
	case 18:printf("什么也没发生\n"); zl = zl - 5; jj = jj - 5; break;
	case 19:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
    case 20:printf("你去吃了肯德基\n零花钱-50\n"); m = m - 50; break;
	default:
		printf("抱歉 程序错误 错误区域s13 404 h大小%d t大小%d", h, t);
		break;
	}
}