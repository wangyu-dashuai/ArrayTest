#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//冒泡排序算法的原理如下：
//1.比较相邻的元素。如果第一个比第二个大，就交换他们两个。
//2.对每一对相邻元素做同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
//3.针对所有的元素重复以上的步骤，除了最后一个。
//4.持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。

//用函数实现一个对整形数组的冒泡排序
//void bubble_sort(int arr[], int len){
//	for (int i = 0; i < len - 1; i++){ //遍历时防止越界i<len -1,整体循环完成全部数字的排列
//		for (int j = 0; j < len - 1; j++){//排列一个数字所需要循环的次数
//			if (arr[j]>arr[j + 1]){ // 2 5 4 1 3
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//void Show(int arr[], int len){
//	for (int i = 0; i < len; i++){
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//
//int main(){
//	int arr[] = {2,6,4,3,8,1,0,9,5,7};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d\n", len);
//	Show(arr, len);
//	bubble_sort(arr,len);
//	Show(arr, len);
//	system("pause");
//}


//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。

//初始化数组全为0
//void init(int arr[], int len){
//	int i = 0;
//	for (i = 0; i < len; i++){
//		arr[i] = 0;
//	}
//}
////打印数组的每个元素
//void print(int arr[], int len){
//	int i = 0;
//	for (i = 0; i < len; i++){
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
////数组元素的逆置
//void reverse(int arr[], int len){
//	int left = 0;
//	int right = len - 1;
//	while(left < right){
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main(){
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("原数组:\n");
//	print(arr,len);
//
//	printf("逆置数组:\n");
//	reverse(arr,len);
//	print(arr, len);
//
//	printf("初始化数组:\n");
//	init(arr, len);
//	print(arr, len);
//	system("pause");
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int n) {
//	if (n < 10) {         //递归结束条件
//		return n;
//	}
//	return (n % 10) + DigitSum(n / 10);
//}
//int main() {
//	int n = 0;
//	printf("请输入一个正整数:\n");
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	system("pause");
//	return 0;
//}

//编写一个函数实现n^k（n的k次方），使用递归实现
//int power(int n, int k){
//	if (k < 0){
//		return 0;
//	}
//	else if (k == 0){
//		return 1;
//	}
//	else{
//		return n*power(n, k - 1);
//	}
//}
//int main(){
//	int n, k;
//	printf("请输入底数:\n");
//	scanf("%d", &n);
//	printf("请输入指数:\n");
//	scanf("%d", &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//递归和非递归分别实现求第n个斐波那契数
int fib_1(int n){
	//使用递归实现求n哥斐波那契数
	if (n <= 2){
		return 1;
	}
	else{
		return fib_1(n - 1) + fib_1(n - 2);
	}
}
int fib_2(int n){
	//使用非递归实现求第n个斐波那契数
	int a = 1;   // a b c
	int b = 1;
	int c = 2;
	while (n > 2){
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main(){
	int n = 0; // 1 1 2 3 5 8 13 21
	scanf("%d",&n);
	printf("%d\n", fib_1(n));
	printf("%d\n", fib_2(n));
	system("pause");
	return 0;
}