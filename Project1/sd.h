void sd()
{
	fflush(stdin);
	system("CLS");//�����Ļ������
	printf(" ����ϴ���̵� \n 1 ����֮�� $10000 \n 2 �齱 $100 \n 3 ����ҩˮ $5000 \n /******************/ \n 4 ����+10 $5000 \n 5 ����+10 $5000 \n 6 �Ҿ�+10 $5000 \n /******************/ \n 7 ����˳�� $10000 \n 8 ����˳�� $10000 \n 9 �Ҿ�˳�� $10000 \n");
	printf(" �˳�����0 \n");
	       for (;1;)
		{
			fflush(stdin);//��ջ��������е�����
			cin >> a;
			if (a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'||a=='0')
			{
				break;
			}
			else
			{
				printf("��Ҫ�˳�������0: \n");
			}
		}
	switch (a)
	{
	case '1':if (m>=10000)
			 {
				 printf("����ɹ�\n");
				 m=m-10000;bszs=bszs+1;
				 printf("����㻨Ǯ��ʣ%d \n����֮��+1\n",m);fflush(stdin);a=getchar();break;
			 }
			 else
			 {
				 printf("����ʧ��\n");fflush(stdin);
				 a=getchar();break;
			 }
	case '2':if (m>=100){m=m-100;sjs(20-xy);printf("�齱��\n");Sleep(1000); if (1==h)
			 {
				 printf("��ϲ�н�\n����㻨ǮΪ%d\n",m+10000);m=m+10000;fflush(stdin);a=getchar();break;
			 }
			 else
			 {
				 printf("û�н�\n����㻨ǮΪ%d\n",m);fflush(stdin);a=getchar();break;
			 }
			 }
			 else
			 {
				 printf("����ʧ��\n");fflush(stdin);
				 a=getchar();break;
			 }
	case '3':if (m>=5000)
			 {
				 if (xy<=18)
				 {
				 printf("����ɹ�\n");xy=xy+1;m=m-5000;
				 printf("��ǰ����ֵ%d \n",xy);fflush(stdin);
				 a=getchar();break;
				 }
			 }
			 else
			 {
				 printf("����ʧ��\n");fflush(stdin);
				 a=getchar();break;
			 }
	case '4':if (m>=5000)
			 {
				 printf("����ɹ�\n");zl=zl+10;m=m-5000;
				 printf("��ǰ����Ϊ%d \n",zl);fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("����ʧ��\n");fflush(stdin);
				 a=getchar();break;
			 }
	case '5':if (m>=5000)
			 {
				 printf("����ɹ�\n");tl=tl+10;m=m-5000;
				 printf("��ǰ����Ϊ%d \n",tl);fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("����ʧ��\n");fflush(stdin);
				 a=getchar();break;
			 }
	case '6':if (m>=5000)
			 {
				 printf("����ɹ�\n");jj=jj+10;m=m-5000;
				 printf("��ǰ�Ҿ�Ϊ%d \n",jj);fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("����ʧ��\n");fflush(stdin);
				 a=getchar();break;
			 }
	case '7':if (m>=10000)
			 {
				 printf("����ɹ�\n");bzl=1;m=m-10000;
				 printf("������˳ �� \n");fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("����ʧ��\n");fflush(stdin);
				 a=getchar();break;
			 }
	case '8':if (m>=10000)
			 {
				 printf("����ɹ�\n");btl=1;m=m-10000;
				 printf("������˳ �� \n");fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("����ʧ��\n");fflush(stdin);
				 a=getchar();break;
			 }
	case '9':if (m>=10000)
			 {
				 printf("����ɹ�\n");bjj=1;m=m-10000;
				 printf("�Ҿ���˳ �� \n");fflush(stdin);
				 a=getchar();break;
			 }
			 else
			 {
				 printf("����ʧ��\n");fflush(stdin);
				 a=getchar();break;
			 }
	case '0':break;
	default:printf("��Ǹ ������� ��������sd m��С%d a��С%c",m,a);
		break;
	}
}