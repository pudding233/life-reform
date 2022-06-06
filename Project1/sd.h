void sd()
{
	fflush(stdin);
	system("CLS");//清楚屏幕的内容
	printf(" 人生洗牌商店 \n A 不死之身 $10000 \n B 抽奖 $100 \n C 幸运药水 $5000 \n /******************/ \n D 智力+10 $5000 \n E 体力+10 $5000 \n F 家境+10 $5000 \n /******************/ \n G 智力顺延 $10000 \n H 体力顺延 $10000 \n I 家境顺延 $10000 \n");
	printf(" 退出输入Z \n");
	       for (;1;)
		{
			fflush(stdin);//清空缓冲区所有的数据
			a=getchar();
			if (a=='A'||a=='B'||a=='Z'||a=='C'||a=='D'||a=='E'||a=='F'||a=='G'||a=='H'||a=='I')
			{
				break;
			}
			else
			{
				printf("需要退出请输入Z: \n");
			}
		}
	switch (a)
	{
	case 'A':if (m>=10000)
			 {
				 printf("购买成功\n");
				 m=m-10000;bszs=bszs+1;
				 printf("你的零花钱还剩%d \n不死之身+1\n",m,bszs);fflush(stdin);a=getchar();break;
			 }
			 else
			 {
				 printf("购买失败\n");fflush(stdin);
				 a=getchar();break;
			 }
	case 'B':if (m>=100){m=m-100;sjs(20-xy);printf("抽奖中\n");Sleep(1000); if (1==h)
			 {
				 printf("恭喜中奖\n你的零花钱为%d\n",m+10000);m=m+10000;fflush(stdin);a=getchar();break;
			 }
			 else
			 {
				 printf("没中奖\n你的零花钱为%d\n",m);fflush(stdin);a=getchar();break;
			 }
			 }
			 else
			 {
				 printf("购买失败\n");fflush(stdin);
				 a=getchar();break;
			 }
	case 'C':if (m>=5000)
			 {
				 if (xy<=18)
				 {
				 printf("购买成功\n");xy=xy+1;m=m-5000;
				 printf("当前幸运值%d \n",xy);fflush(stdin);
				 a=getchar();break;
				 }
			 }
			 else
			 {
				 printf("购买失败\n");fflush(stdin);
				 a=getchar();break;
			 }
	case 'D':if (m>=5000)
			 {
				 printf("购买成功\n");zl=zl+10;m=m-5000;
				 printf("当前智力为%d \n",zl);fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("购买失败\n");fflush(stdin);
				 a=getchar();break;
			 }
	case 'E':if (m>=5000)
			 {
				 printf("购买成功\n");tl=tl+10;m=m-5000;
				 printf("当前体力为%d \n",tl);fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("购买失败\n");fflush(stdin);
				 a=getchar();break;
			 }
	case 'F':if (m>=5000)
			 {
				 printf("购买成功\n");jj=jj+10;m=m-5000;
				 printf("当前家境为%d \n",jj);fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("购买失败\n");fflush(stdin);
				 a=getchar();break;
			 }
	case 'G':if (m>=10000)
			 {
				 printf("购买成功\n");bzl=1;m=m-10000;
				 printf("智力延顺 开 \n");fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("购买失败\n");fflush(stdin);
				 a=getchar();break;
			 }
	case 'H':if (m>=10000)
			 {
				 printf("购买成功\n");btl=1;m=m-10000;
				 printf("体力延顺 开 \n");fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("购买失败\n");fflush(stdin);
				 a=getchar();break;
			 }
	case 'I':if (m>=10000)
			 {
				 printf("购买成功\n");bjj=1;m=m-10000;
				 printf("家境延顺 开 \n");fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("购买失败\n");fflush(stdin);
				 a=getchar();break;
			 }
	case 'Z':break;
	default:printf("抱歉 程序错误 错误区域sd m大小%d a大小%c",m,a);
		break;
	}
}