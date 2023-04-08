//#include <stdio.h>
//#pragma warning (disable: 4996)
//
//// 10,000원+(같은 눈)×1,000원
//// 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다. 
//// 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.  
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