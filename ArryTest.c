#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ð�������㷨��ԭ�����£�
//1.�Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
//2.��ÿһ������Ԫ����ͬ���Ĺ������ӿ�ʼ��һ�Ե���β�����һ�ԡ�����һ�㣬����Ԫ��Ӧ�û�����������
//3.������е�Ԫ���ظ����ϵĲ��裬�������һ����
//4.����ÿ�ζ�Խ��Խ�ٵ�Ԫ���ظ�����Ĳ��裬ֱ��û���κ�һ��������Ҫ�Ƚϡ�

//�ú���ʵ��һ�������������ð������
//void bubble_sort(int arr[], int len){
//	for (int i = 0; i < len - 1; i++){ //����ʱ��ֹԽ��i<len -1,����ѭ�����ȫ�����ֵ�����
//		for (int j = 0; j < len - 1; j++){//����һ����������Ҫѭ���Ĵ���
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


//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�

//��ʼ������ȫΪ0
//void init(int arr[], int len){
//	int i = 0;
//	for (i = 0; i < len; i++){
//		arr[i] = 0;
//	}
//}
////��ӡ�����ÿ��Ԫ��
//void print(int arr[], int len){
//	int i = 0;
//	for (i = 0; i < len; i++){
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
////����Ԫ�ص�����
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
//	printf("ԭ����:\n");
//	print(arr,len);
//
//	printf("��������:\n");
//	reverse(arr,len);
//	print(arr, len);
//
//	printf("��ʼ������:\n");
//	init(arr, len);
//	print(arr, len);
//	system("pause");
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//int DigitSum(int n) {
//	if (n < 10) {         //�ݹ��������
//		return n;
//	}
//	return (n % 10) + DigitSum(n / 10);
//}
//int main() {
//	int n = 0;
//	printf("������һ��������:\n");
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	system("pause");
//	return 0;
//}

//��дһ������ʵ��n^k��n��k�η�����ʹ�õݹ�ʵ��
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
//	printf("���������:\n");
//	scanf("%d", &n);
//	printf("������ָ��:\n");
//	scanf("%d", &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
int fib_1(int n){
	//ʹ�õݹ�ʵ����n��쳲�������
	if (n <= 2){
		return 1;
	}
	else{
		return fib_1(n - 1) + fib_1(n - 2);
	}
}
int fib_2(int n){
	//ʹ�÷ǵݹ�ʵ�����n��쳲�������
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