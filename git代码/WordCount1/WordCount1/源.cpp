#include <stdio.h>
int main() {
	char ch[1000];//定义一个要输入的字符串
	int i = 0;
	int count1 = 0;
	int count2 = 1;//这里是我提前加1 和在最后输出时候count2++效果是一样的
	printf("请输入你想统计的字符：\n");
	gets_s(ch, 1000);//使用get_s函数读取输入的字符串，同时定义其大小
	for (i = 0; ch[i]; i++)//利用for循环遍历整个字符串统计
	{
		if (ch[i] == ' ')
		{
			count1++;
			if (ch[i + 1] != ' ' && ch[i + 1] != ',') {
				count2 = count2 + 1;//如果后面不是空格或者逗号就可以视为一个单词
			}
		}
		else if (ch[i] == '\\')//如果是转义符'\'
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
	printf("统计的字符数是：%d\n", count1);
	printf("统计的单词数是：%d", count2);


}