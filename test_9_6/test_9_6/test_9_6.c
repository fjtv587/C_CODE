#include<stdio.h>
#include<string.h> //使用stelen时要引用改头文件


int main()
{
	//两种输入字符串的方式不一样。arr1中自带\0终止字符串
  char arr1[] = "hello";
  char arr2[] = { 'h','e','l','l','o' };
  //char arr2[] = { 'h','e','l','l','o','\0' };  这样才是正确的,此时\0不是内容
  //求一下长度
  int len = strlen("abc");// string length
  
  printf("%d\n", len);
  printf("%d\n", strlen(arr1));
  printf("%d\n", strlen(arr2));  //会打印出随机值，因为没有\0,


  printf("%s\n", arr1);
  printf("%s\n", arr2);
  return 0;
}  
