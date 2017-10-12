/*
#include <cstdio>
#include <string>
#include<cstdlib>
void Reverse(char *pBegin, char *pEnd);
char* ReverseSentence(char *pData);

int FindBothHaveChars(char* string1, char* string2){
	int count = 0;
	//int lengthOfString2 = 0;
	//while (*(string2 + lengthOfString2) != '\0')
	//	lengthOfString2++;
	//lengthOfString2--;
	int i = 0, j = 0;
	while (*(string1 + i) != '\0' ){
		int k = j;
		while (*(string2 + k) != '\0'){
			if (*(string1 + i) != *(string2 + k)){
				k++;
			}
			else{
				count++;
				++k;
				j = k;
				i++;
				break;
			}
		}
		i++;
	}
	return count;
}

char* ReverseSentence(char *pData)
{
	if (pData == nullptr)
		return nullptr;

	char *pBegin = pData;

	char *pEnd = pData;
	while (*pEnd != '\0')
		pEnd++;
	pEnd--;

	// 翻转整个句子
	Reverse(pBegin, pEnd);

	// 翻转句子中的每个单词
	pBegin = pEnd = pData;
	while (*pBegin != '\0')
	{
		if (*pBegin == ' ')
		{
			pBegin++;
			pEnd++;
		}
		else if (*pEnd == ' ' || *pEnd == '\0')
		{
			Reverse(pBegin, --pEnd);
			pBegin = ++pEnd;
		}
		else
			pEnd++;
	}

	return pData;
}
void Reverse(char *pBegin, char *pEnd)
{
	if (pBegin == nullptr || pEnd == nullptr)
		return;

	while (pBegin < pEnd)
	{
		char temp = *pBegin;
		*pBegin = *pEnd;
		*pEnd = temp;

		pBegin++, pEnd--;
	}
}
int main(){
	char str[100];
	gets(str);
	char* str2 = (char*)malloc(sizeof(int)* 100);
	strcpy(str2, str);
	str2 = ReverseSentence(str2);
	int i = FindBothHaveChars(str, str2);
	printf("%d", i);
	return 0;
}
我AC为了凑数改了一下

*/
