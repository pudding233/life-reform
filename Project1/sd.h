void sd()
{
	fflush(stdin);
	system("CLS");//�����Ļ������
	printf(" ����ϴ���̵� \n A ����֮�� $10000 \n B �齱 $100 \n C ����ҩˮ $5000 \n /******************/ \n D ����+10 $5000 \n E ����+10 $5000 \n F �Ҿ�+10 $5000 \n /******************/ \n G ����˳�� $10000 \n H ����˳�� $10000 \n I �Ҿ�˳�� $10000 \n");
	printf(" �˳�����Z \n");
	       for (;1;)
		{
			fflush(stdin);//��ջ��������е�����
			a=getchar();
			if (a=='A'||a=='B'||a=='Z'||a=='C'||a=='D'||a=='E'||a=='F'||a=='G'||a=='H'||a=='I')
			{
				break;
			}
			else
			{
				printf("��Ҫ�˳�������Z: \n");
			}
		}
	switch (a)
	{
	case 'A':if (m>=10000)
			 {
				 printf("����ɹ�\n");
				 m=m-10000;bszs=bszs+1;
				 printf("����㻨Ǯ��ʣ%d \n����֮��+1\n",m,bszs);fflush(stdin);a=getchar();break;
			 }
			 else
			 {
				 printf("����ʧ��\n");fflush(stdin);
				 a=getchar();break;
			 }
	case 'B':if (m>=100){m=m-100;sjs(20-xy);printf("�齱��\n");Sleep(1000); if (1==h)
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
	case 'C':if (m>=5000)
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
	case 'D':if (m>=5000)
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
	case 'E':if (m>=5000)
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
	case 'F':if (m>=5000)
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
	case 'G':if (m>=10000)
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
	case 'H':if (m>=10000)
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
	case 'I':if (m>=10000)
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
	case 'Z':break;
	default:printf("��Ǹ ������� ��������sd m��С%d a��С%c",m,a);
		break;
	}
}