void s61()
{
	if (zl>200&&tl>200&&jj>100)
	{
		fflush(stdin);//��ջ��������е�����
		int boss,my;
		boss=100;my=100;
		for (; boss>=0&&my>=0;)
		{
			system("CLS");
			//����boss UI ��ʼ
			printf("  boss Ѫ�� %d/100 \n",boss);
			printf(" ������������������������\n");
			printf(" ��");
			for (int i = 0; i < 10; i++)
			{
				if (i<=boss/10)
				{
					printf("��");
				}
				else
				{
					printf("��");
				}
			}
			printf("��\n");
			printf(" ������������������������");
			//����boss UI ����
			printf("\n \n");
			//����my UI ��ʼ
			printf("  �ҵ�Ѫ�� %d/100 \n",my);
			printf(" ������������������������\n");
			printf(" ��");
			for (int i = 0; i < 10; i++)
			{
				if (i<=my/10)
				{
					printf("��");
				}
				else
				{
					printf("��");
				}
			}
			printf("��\n");
			printf(" ������������������������");
			//����my UI ����
			printf("\n \n \n");
			//���Ƽ��� ��ʼ
			printf(" ����A ʹ��ƽA\n ����B ʹ��С��\n ����C ʹ�ô���\n ����D ʹ�÷��� \n");
			for (;1;)
		   {
			fflush(stdin);//��ջ��������е�����
			a=getchar();
			if (a=='A'||a=='B'||a=='C'||a=='D')
			{
				if (a=='A')
				{
					sjs(30);
					printf("BOSS Ѫ��-%d \n",h);boss=boss-h;fflush(stdin);ld=ld-1;
					b=getchar();
					break;
				}
				else
				{
					if (a=='B')
					{
						if (ld<=0)
						{
					            printf("BOSS Ѫ��-20 \nС�кʹ��е�ʹ�ö���3�غ�\n");boss=boss-20;ld=4;fflush(stdin);ld=ld-1;
					            b=getchar();
					            break;
						}
						else
						{
							printf("�������޷����� ��Ҫ%d�غ�\n",ld);
						}
					}
					else
					{
						if (a=='C')
						{
							if (ld<=0)
							{
								sjs(100);
					            printf("BOSS Ѫ��-%d \nС�кʹ��е�ʹ�ö���5�غ�\n",h);boss=boss-h;ld=6;ld=ld-1;fflush(stdin);
					            b=getchar();
					            break;
							}
							else
							{
								printf("�������޷����� ��Ҫ%d�غ�\n",ld);
							}
						}
						else
						{
							if (a=='D')
							{
								printf("BOSS Ѫ��-%d \n֮��Ļغϴ��й�����Ϊ0\n",js);boss=boss-js;js=0;fflush(stdin);
					            b=getchar();
					            break;
							}
						}
					}
				}
			}
			else
			{
				printf("����������: \n");
			}
		    }
			sjs(2);
			if (h==1)
			{
				printf("BOSS ʹ����A����\n�����10��Ѫ\n");my=my-10;
				fflush(stdin);
				b=getchar();
			}
			else
			{
				printf("BOSS ʹ����B����\n�����25��Ѫ\n");my=my-20;
				fflush(stdin);
				b=getchar();
			}
		}
			system("CLS");
			//����boss UI ��ʼ
			printf("  boss Ѫ�� %d/100 \n",boss);
			printf(" ������������������������\n");
			printf(" ��");
			for (int i = 0; i < 10; i++)
			{
				if (i<=boss/10)
				{
					printf("��");
				}
				else
				{
					printf("��");
				}
			}
			printf("��\n");
			printf(" ������������������������");
			//����boss UI ����
			printf("\n \n");
			//����my UI ��ʼ
			printf("  �ҵ�Ѫ�� %d/100 \n",my);
			printf(" ������������������������\n");
			printf(" ��");
			for (int i = 0; i < 10; i++)
			{
				if (i<=my/10)
				{
					printf("��");
				}
				else
				{
					printf("��");
				}
			}
			printf("��\n");
			printf(" ������������������������\n");
			//����my UI ����
			if (my>0)
			{
			printf("���ѻ�ɱBOOS \n");
			printf("��Ϸ����\n");
			for (b = 0; b < 100; b++)
			{
				printf("��Ϸ���� ��ͨ��\n");
				b=getchar();
			}
			}
			else
			{
				printf("������\n");		
					for (b = 0; b < 100; b++)
			{
				printf("���� �����´���Ϸ\n");
				b=getchar();
			}
			}

	}
	else
	{
		printf("����ʧ�� \n��������200\n��������200\n�Ҿ�����100\n");
		zt=1;sw();
	}
}