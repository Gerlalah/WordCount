#include <stdio.h>
int main() {
	char ch[1000];//����һ��Ҫ������ַ���
	int i = 0;
	int count1 = 0;
	int count2 = 1;//����������ǰ��1 ����������ʱ��count2++Ч����һ����
	printf("����������ͳ�Ƶ��ַ���\n");
	gets_s(ch, 1000);//ʹ��get_s������ȡ������ַ�����ͬʱ�������С
	for (i = 0; ch[i]; i++)//����forѭ�����������ַ���ͳ��
	{
		if (ch[i] == ' ')
		{
			count1++;
			if (ch[i + 1] != ' ' && ch[i + 1] != ',') {
				count2 = count2 + 1;//������治�ǿո���߶��žͿ�����Ϊһ������
			}
		}
		else if (ch[i] == '\\')//�����ת���'\'
		{
			if (ch[i + 1] == 'n')
			{
				count1++;
			}
			if (ch[i + 1] == 't')
			{
				count1++;
			}
		}

	}
	printf("ͳ�Ƶ��ַ����ǣ�%d\n", count1);
	printf("ͳ�Ƶĵ������ǣ�%d", count2);


}