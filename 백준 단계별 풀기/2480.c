//#include <stdio.h>
//#pragma warning (disable: 4996)
//
//// 10,000��+(���� ��)��1,000��
//// ���� ���� 2���� ������ ��쿡�� 1,000��+(���� ��)��100���� ����� �ް� �ȴ�. 
//// ��� �ٸ� ���� ������ ��쿡�� (�� �� ���� ū ��)��100���� ����� �ް� �ȴ�.  
//
//int main(void) {
//	unsigned int a, b, c;
//	a = 7;
//	b = 7;
//	c = 7;
//	
//
//	while (a > 6 || b > 6 || c > 6) {
//		scanf("%d%d%d", &a, &b, &c);
//	}
//	if (a == b && a == c) {
//		printf("%d", 10000 + a * 1000);
//	}
//	else if (a == b && a != c) {
//		printf("%d", 1000 + a * 100);
//	}
//	else if (b == c && b != a) {
//		printf("%d", 1000 + b * 100);
//	}
//	else if (a == c && a != b) {
//		printf("%d", 1000 + c * 100);
//	}
//	else if (a > b && a > c){
//		printf("%d", a * 100);
//	}
//	else if (b > a && b > c) {
//		printf("%d", b * 100);
//	}
//	else if (c > b && c > a) {
//		printf("%d", c * 100);
//	}
//		
//	return 0;
//}