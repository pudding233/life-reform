//�����¼�
void s11()//0-4 �ж�
{
	sjs(10);
	switch (h)
	{
	case 0:printf("������������ũ��\n�Ҿ�-2\n"); jj = jj - 2; break;
	case 1:printf("�����������ڳ���\n�Ҿ�+10\n"); jj = jj + 10; break;
	case 2:m = m - 10; color(4); printf("�㶪�����㻨Ǯ10��\n�����ڵ��㻨Ǯ����%d\n", m); color(7); break;
	case 3:printf("ɨ�ڳ���ר������������ڵĵط�\n"); break;
	case 4:printf("���ҷ��֣���һ���˰���\n�Ҿ�+2\n"); jj = jj + 2; break;
	case 5:printf("���ҷ��֣���һ���˰���\n"); color(4); printf("���Ǯ���ڶ�����������\n�Ҿ���0\n"); color(7); jj = 0; break;
	case 6:printf("���˸�����һ������\n����+1\n");js=js+1; break;
	case 7:m = m + 10; printf("��õ����㻨Ǯ10��\n�����ڵ��㻨Ǯ����%d \n", m); break;
	case 8:printf("��������϶��˸�������\n"); break;
	case 9:printf("ʲôҲû����\n"); break;
	default:
		printf("��Ǹ ������� ��������s11 404 h��С%d t��С%d", h, t);
		break;
	}
}
void s12()//5-12 �ж�
{
	sjs(10);
	switch (h)
	{
	case 0:printf("����Ϊ���������������\n����-2\n"); zl = zl - 2; break;
	case 1:printf("��ҿ���\n����-2\n"); zl = zl - 2; break;
	case 2:printf("���Ϊ������ѧ��\n����+3\n"); zl = zl + 3; break;
	case 3:printf("������ı����������ʶ�,��������ú�����\n����+3\n"); zl = zl + 3; break;
	case 4:printf("����˳���\n����-10\n"); zl = zl-10; break;
	case 5:printf("�ܵ����츳�ӳ�[����]\n����+30\n"); zl = zl + 30;; break;
	case 6:printf("���˸�����һ������\n����+1\n");js=js+1; break;
	case 7:printf("�����˴�\n����-5\n"); tl = tl - 5; break;
	case 8:printf("�����������\n����+10\n"); tl = tl + 10; break;
	case 9:printf("���·���\n"); break;
	default:
		printf("��Ǹ ������� ��������s12 404 h��С%d t��С%d", h, t);
		break;
	}
}
void s13()//����Сѧ�ж�
{
	sjs(2);
	switch (h)
	{
	case 0:printf("������Ұ��Сѧ\n�Ҿ�-5\n����-5\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("����������Сѧ\n�Ҿ�+5\n����+5\n"); zl = zl + 5; jj = jj + 5; break;
	case 2:printf("������Ұ��Сѧ\n�Ҿ�-5\n����-5\n"); zl = zl - 5; jj = jj - 5; break;
	default:
		printf("��Ǹ ������� ��������s13 404 h��С%d t��С%d", h, t);
		break;
	}
}
void s14()//ʮ��������ж�
{
	sjs(2);
	if (h == 0)
	{
		printf("������ �ص����\n����+20\n");
		zl = zl + 20;
		shuju();
	}
	else
	{
		if (h == 1)
		{
			printf("������ �ص����\n���Ǳ���ð������\n�Ҿ�-10\n����-10\n����-10\n");
			zl = zl - 10;
			jj = jj - 10;
			tl = tl - 10;
			shuju();
		}




		else
		{
			printf("������ ��ͨ����\n����+10\n");
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
	case 0:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 2:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 4:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 5:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 6:printf("���˸�����һ������\n����+1\n");js=js+1; break;
	case 7:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 8:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	default:
		printf("��Ǹ ������� ��������s13 404 h��С%d t��С%d", h, t);
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
	case 0:printf("����������Ҫ������ս��\n");break;
	case 1:printf("����������Ҫ������ս��\nȫ�򾭼õ���\n");sjs(2);if(h==1)
	{
		printf("����������ս��,����Ϊ����������\n");
		sw();
	}; break;
	case 2:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 4:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 5:printf("���������ս�����ƿ�ʼ\n"); break;
	case 6:a=0;system("CLS");printf("��������һ�������ˣ���Ҫȥ������?��Y/N��");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(10000);
					 printf("�㱻����%dԪ\n���˸�����һ������\n����+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(10000);
					 printf("������ʮ�ָж�������%dԪ\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("���������ţ��ܵ��˵���Ǵ��\n");break;
				 }
				 else
				 {
					 printf("��û��ȥ��æ\n");break;
				 }
		default:
			printf("��Ǹ ������� ��������s41-6 h��С%d a��С%c %d",h,a,a);
			break;
		} break;
	case 7:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 8:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	case 10:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 12:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 13:printf("����Ĳ�Ʊ�н���\n�㻨Ǯ+5000"); m=m+5000;; break;
	case 14:printf("�����������\n");sw(); break;
	case 15:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n�㻨Ǯ-1000"); jj = jj -50;m=m-1000; break;
	case 16:printf("�����1000Ԫ");m=m+1000; break;
	case 17:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 18:printf("ʲôҲû����\n");  break;
	case 19:printf("�ձ���й©\n���˷��������ƽ��\n"); break;
    case 20:printf("�ձ���й©");  break;
	default:
		printf("��Ǹ ������� ��������s13 404 h��С%d t��С%d", h, t);
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
	case 0:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 2:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("�㿪ʼ����������\n"); break;
	case 4:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 5:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 6:printf("���˸�����һ������\n����+1\n");js=js+1; break;
	case 7:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 8:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	case 10:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("��������һ�������ˣ���Ҫȥ������?��Y/N��");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(30000);
					 printf("�㱻����%dԪ\n���˸�����һ������\n����+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(30000);
					 printf("������ʮ�ָж�������%dԪ\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("���������ţ��ܵ��˵���Ǵ��\n");break;
				 }
				 else
				 {
					 printf("��û��ȥ��æ\n");break;
				 }
		default:
			printf("��Ǹ ������� ��������s42-12 h��С%d a��С%c %d",h,a,a);
			break;
		}  break;
	case 13:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 14:printf("�����������\n");sw();break;
	case 15:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 16:printf("ѧУ����һ����¥\n"); break;
	case 17:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 18:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 19:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
    case 20:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	default:
		printf("��Ǹ ������� ��������s13 404 h��С%d t��С%d", h, t);
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
	case 0:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 2:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 4:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 5:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 6:printf("���˸�����һ������\n����+1\n");js=js+1; break;
	case 7:a=0;system("CLS");printf("��������һ�������ˣ���Ҫȥ������?��Y/N��");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(50000);
					 printf("�㱻����%dԪ\n���˸�����һ������\n����+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(50000);
					 printf("������ʮ�ָж�������%dԪ\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("���������ţ��ܵ��˵���Ǵ��\n");break;
				 }
				 else
				 {
					 printf("��û��ȥ��æ\n");break;
				 }
		default:
			printf("��Ǹ ������� ��������s41-6 h��С%d a��С%c %d",h,a,a);
			break;
		} break;
	case 8:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	case 10:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 12:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 13:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 14:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 15:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 16:printf("ѧУ����һ����¥\n"); break;
	case 17:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 18:a=0;printf("һ�����������콵����,������ֻҪ$30000"); xz();
		if (a=='Y')
		{
			if (m>=30000)
			{
				printf("������һ���콵����\n����+10\n");js=js+10;m=m-30000;break;
			}
			else
			{
				printf("�㻨Ǯ����\n");break;
			}
		}
		else
		{
			printf("��û�����콵����");break;
		}
	case 19:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
    case 20:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	default:
		printf("��Ǹ ������� ��������s13 404 h��С%d t��С%d", h, t);
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
	case 0:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 2:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 4:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 5:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 6:printf("���˸�����һ������\n����+1\n");js=js+1; break;
	case 7:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 8:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	case 10:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("��������һ�������ˣ���Ҫȥ������?��Y/N��");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(100000);
					 printf("�㱻����%dԪ\n���˸�����һ������\n����+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(100000);
					 printf("������ʮ�ָж�������%dԪ\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("���������ţ��ܵ��˵���Ǵ��\n");break;
				 }
				 else
				 {
					 printf("��û��ȥ��æ\n");break;
				 }
		default:

			printf("��Ǹ ������� ��������s41-6 h��С%d a��С%c %d",h,a,a);
			break;
		} break;
	case 13:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 14:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 15:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 16:printf("ѧУ����һ����¥\n"); break;
	case 17:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 18:a=0;system("CLS");printf("һ�����������콵����,������ֻҪ$30000\n");xz();
		if (a=='Y')
		{
			if (m>=30000)
			{
				printf("������һ���콵����\n����+5\n");js=js+5;m=m-30000;break;
			}
			else
			{
				printf("�㻨Ǯ����\n");break;
			}
		}
		else
		{
			printf("��û�����콵����\n");break;
		}
	case 19:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
    case 20:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	default:
		printf("��Ǹ ������� ��������s13 404 h��С%d t��С%d", h, t);
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
	case 0:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 2:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 4:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 5:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 6:printf("���˸�����һ������\n����+1\n");js=js+1; break;
	case 7:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 8:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	case 10:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("��������һ�������ˣ���Ҫȥ������?��Y/N��");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(200000);
					 printf("�㱻����%dԪ\n���˸�����һ������\n����+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(200000);
					 printf("������ʮ�ָж�������%dԪ\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("���������ţ��ܵ��˵���Ǵ��\n");break;
				 }
				 else
				 {
					 printf("��û��ȥ��æ\n");break;
				 }
		default:
			printf("��Ǹ ������� ��������s41-6 h��С%d a��С%c %d",h,a,a);
			break;
		} break;
	case 13:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 14:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 15:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 16:printf("ѧУ����һ����¥\n"); break;
	case 17:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 18:a = 0; system("CLS"); printf("һ�����������콵����,������ֻҪ$30000\n"); xz();
		if (a=='Y')
		{
			if (m>=30000)
			{
				printf("������һ���콵����\n����+5\n");js=js+5;m=m-30000;break;
			}
			else
			{
				printf("�㻨Ǯ����\n");break;
			}
		}
		else
		{
			printf("��û�����콵����\n");break;
		}
	case 19:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
    case 20:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	default:
		printf("��Ǹ ������� ��������s13 404 h��С%d t��С%d", h, t);
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
	case 0:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 2:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 4:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 5:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 6:printf("���˸�����һ������\n����+1\n");js=js+1; break;
	case 7:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 8:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	case 10:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("��������һ�������ˣ���Ҫȥ������?��Y/N��");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(200000);
					 printf("�㱻����%dԪ\n���˸�����һ������\n����+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(200000);
					 printf("������ʮ�ָж�������%dԪ\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("���������ţ��ܵ��˵���Ǵ��\n");break;
				 }
				 else
				 {
					 printf("��û��ȥ��æ\n");break;
				 }
		default:
			printf("��Ǹ ������� ��������s41-6 h��С%d a��С%c %d",h,a,a);
			break;
		} break;
	case 13:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 14:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 15:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 16:printf("ѧУ����һ����¥\n"); break;
	case 17:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 18:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 19:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
    case 20:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	default:
		printf("��Ǹ ������� ��������s13 404 h��С%d t��С%d", h, t);
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
	case 0:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 2:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 4:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 5:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 6:printf("���˸�����һ������\n����+1\n");js=js+1; break;
	case 7:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 8:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	case 10:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("��������һ�������ˣ���Ҫȥ������?��Y/N��");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(200000);
					 printf("�㱻����%dԪ\n���˸�����һ������\n����+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(200000);
					 printf("������ʮ�ָж�������%dԪ\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("���������ţ��ܵ��˵���Ǵ��\n");break;
				 }
				 else
				 {
					 printf("��û��ȥ��æ\n");break;
				 }
		default:
			printf("��Ǹ ������� ��������s41-6 h��С%d a��С%c %d",h,a,a);
			break;
		} break;
	case 13:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 14:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 15:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 16:printf("ѧУ����һ����¥\n"); break;
	case 17:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 18:a = 0; printf("һ����������ȫ��ҩˮ,������ֻҪ$50000\n"); xz();
		if (a=='Y')
		{
			if (m>=50000)
			{
				printf("������һ��ȫ��ҩˮ\n����+100\n");jj=jj+100;tl=tl+100;zl=zl+100;;m=m-50000;break;
			}
			else
			{
				printf("�㻨Ǯ����\n");break;
			}
		}
		else
		{
			printf("��û����ȫ��ҩˮ\n");break;
		}
	case 19:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
    case 20:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	default:
		printf("��Ǹ ������� ��������s13 404 h��С%d t��С%d", h, t);
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
	case 0:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 1:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 2:printf("��ѧϰ����[������츳�ӳ�]\n����+20\n����+30\n�Ҿ�+50\n"); zl = zl+20; jj = jj + 50; tl = tl + 30; break;
	case 3:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 4:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 5:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 6:printf("ѧУ����һ����¥\n"); break;
	case 7:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 8:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 9:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	case 10:printf("�������ȥ�ձ�����\n"); zl = zl - 5; jj = jj - 5; break;
	case 11:printf("�������ȥ��������\n"); h = rand() % 2; if (h == 1)
	{
		printf("����������ǹɱ\n");
		sw();
	}; break;
	case 12:a=0;system("CLS");printf("��������һ�������ˣ���Ҫȥ������?��Y/N��");
		xz();
		switch (a)
		{
		case 'Y':sjs(2);if (h==1)
				 {
					 sjs(200000);
					 printf("�㱻����%dԪ\n���˸�����һ������\n����+1\n",h);m=m-h;js=js+1;break;
				 } 
				 else
				 {
					 sjs(200000);
					 printf("������ʮ�ָж�������%dԪ\n",h);m=m+h;break;
				 }
		case 'N':sjs(2);if (h==1)
				 {
					 printf("���������ţ��ܵ��˵���Ǵ��\n");break;
				 }
				 else
				 {
					 printf("��û��ȥ��æ\n");break;
				 }
		default:
			printf("��Ǹ ������� ��������s41-6 h��С%d a��С%c %d",h,a,a);
			break;
		} break;
	case 13:printf("������ҵ��������\n����+5"); zl = zl + 5; break;
	case 14:printf("�㾭��ʹ�ð�������(BILIBILI)\n"); break;
	case 15:printf("��ѧ���˶Ĳ�\n�Ҿ�-50\n"); jj = jj - 50; break;
	case 16:printf("ѧУ����һ����¥\n"); break;
	case 17:printf("�㵽�̲�꣬���˱��������̸�\n�㻨Ǯ-12\n"); m = m - 12; break;
	case 18:printf("ʲôҲû����\n"); zl = zl - 5; jj = jj - 5; break;
	case 19:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
    case 20:printf("��ȥ���˿ϵ»�\n�㻨Ǯ-50\n"); m = m - 50; break;
	default:
		printf("��Ǹ ������� ��������s13 404 h��С%d t��С%d", h, t);
		break;
	}
}