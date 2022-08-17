//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//typedef struct ListNode {
//	char data[4];
//	struct ListNode* link;
//} listNode;
//typedef struct {
//	listNode* head;
//} linkedList_h;
//linkedList_h* createLinkedList_h(void) {
//	linkedList_h* L;
//	L = (linkedList_h*)malloc(sizeof(linkedList_h));
//	//printf("%x\n", L);
//	L->head = NULL;		// 공백 리스트이므로 NULL로 설정
//	return L;
//}
//// 연결 리스트의 전체 메모리를 해제하는 연산
//void freeLinkedList_h(linkedList_h* L) {
//	listNode* p;
//	while (L->head != NULL) {
//		p = L->head;
//		L->head = L->head->link;
//		free(p);
//		p = NULL;
//	}
//}
//// 연결 리스트를 순서대로 출력하는 연산
//void printList(linkedList_h* L) {
//	listNode* p;
//	printf("L = (");
//	p = L->head;
//	while (p != NULL) {
//		printf("%s", p->data);
//		p = p->link;
//		if (p != NULL) printf(", ");
//	}
//	printf(") \n");
//}
//// 첫 번째 노드로 삽입하는 연산
//void insertFirstNode(linkedList_h* L, char* x) {
//	listNode* newNode;
//	newNode = (listNode*)malloc(sizeof(listNode));	// 삽입할 새 노드 할당
//	strcpy(newNode->data, x);						// 새 노드의 데이터 필드에 x 저장  
//	newNode->link = L->head;
//	//newNode->link = NULL;
//	L->head = newNode;
//}
//// 노드를 pre 뒤에 삽입하는 연산
//void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
//	listNode* newNode;
//	newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	if (L->head == NULL) {				// 공백 리스트인 경우
//		newNode->link = NULL;		   // 새 노드를 첫 번째이자 마지막 노드로 연결
//		L->head = newNode;
//	}
//	else if (pre == NULL) {			// 삽입 위치를 지정하는 포인터 pre가 NULL인 경우
//		newNode->link = L->head;
//		L->head = newNode;			// 새 노드를 첫 번째 노드로 삽입
//	}
//	else {
//		newNode->link = pre->link;	// 포인터 pre의 노드 뒤에 새 노드 연결
//		pre->link = newNode;
//	}
//}
//// 마지막 노드로 삽입하는 연산 
//void insertLastNode(linkedList_h* L, char* x) {
//	listNode* newNode;
//	listNode* temp;
//	newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	newNode->link = NULL;
//	if (L->head == NULL) {		// 현재 리스트가 공백인 경우					
//		L->head = newNode;		// 새 노드를 리스트의 시작 노드로 연결
//		return;
//	}
//	// 현재 리스트가 공백이 아닌 경우 	
//	temp = L->head;
//	while (temp->link != NULL) temp = temp->link;	// 현재 리스트의 마지막 노드를 찾음
//	temp->link = newNode;							// 새 노드를 마지막 노드(temp)의 다음 노드로 연결 
//}
//int main(void) {
//	linkedList_h* L;
//	L = createLinkedList_h();
//	printf("(1) 공백 리스트 생성하기! \n");
//	printList(L);
//
//	printf("\n(2) 리스트에 [수] 노드 삽입하기! \n");
//	insertFirstNode(L, "수");
//	printList(L);
//
//	printf("\n(3) 리스트 마지막에 [금] 노드 삽입하기! \n");
//	insertLastNode(L, "금");
//	printList(L);
//
//	//printf("\n(4) 리스트 첫 번째에 [월] 노드 삽입하기! \n");
//	//insertFirstNode(L, "월");
//	//printList(L);
//
//	//printf("\n(5) 리스트 공간을 해제하여 공백 리스트로 만들기! \n");
//	//freeLinkedList_h(L);
//	//printList(L);
//
//	getchar();  return 0;
//}


//#include <stdio.h>
//#define MAX(a,b) ((a>b)?a:b)
//#define MAX_DEGREE 50
//
//typedef struct {             // 구조체 polynomial 정의
//	int degree;              // 다항식의 차수를 저장할 변수
//	float coef[MAX_DEGREE];  // 다항식의 각 항의 계수를 저장할 1차원 배열
//} polynomial;
//polynomial addPoly(polynomial A, polynomial B) {
//	polynomial C;   // 다항식 덧셈의 결과 다항식을 저장할 polynomial 구조체 변수 선언
//	int A_index = 0, B_index = 0, C_index = 0;
//	int A_degree = A.degree, B_degree = B.degree;
//	C.degree = MAX(A.degree, B.degree);
//
//	while (A_index <= A.degree && B_index <= B.degree) {
//		if (A_degree > B_degree) {
//			C.coef[C_index++] = A.coef[A_index++];
//			A_degree--;
//		}
//		else if (A_degree == B_degree) {
//			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
//			A_degree--;
//			B_degree--;
//		}
//		else {
//			C.coef[C_index++] = B.coef[B_index++];
//			B_degree--;
//		}
//	}
//	return C;    // 다항식 덧셈의 결과 다항식 C를 반환
//}
//void printPoly(polynomial P) {
//	int i, degree;
//	degree = P.degree;
//
//	for (i = 0; i <= P.degree; i++) {
//		printf("%3.0fx^%d", P.coef[i], degree--);
//		if (i < P.degree) printf(" +");
//	}
//	printf("\n");
//}
//int main(void) {
//	polynomial A = { 4,{ 2,0,3,0,7 } };    // 다항식 A의 초기화
//	polynomial B = { 2,{ 2,0,6 } };  // 다항식 B의 초기화
//
//	//polynomial A = { 3,{ 4,3,5,0 } };    // 다항식 A의 초기화
//	//polynomial B = { 4,{ 3,1,0,2,1 } };  // 다항식 B의 초기화
//	polynomial C;
//
//	C = addPoly(A, B);   // 다항식 A, B에 대한 덧셈을 수행하기 위해 addPoly 함수 호출 
//
//	printf("\n A(x) =");  printPoly(A);   // 다항식 A 출력
//	printf("\n B(x) =");  printPoly(B);   // 다항식 B 출력
//	printf("\n C(x) =");  printPoly(C);   // 다항식 C 출력
//
//	getchar();  return 0;
//}
//
////#include <stdio.h>
////typedef struct { // 행렬 원소를 저장하기 위한 구조체 term 정의
////	int row;
////	int col;
////	int value;
////} term;
////
////void smTranspose(term a[], term b[]) {
////	int m, n, v, i, j, p;
////	m = a[0].row;	// 희소 행렬 a의 행 수
////	n = a[0].col;	// 희소 행렬 a의 열 수
////	v = a[0].value; // 희소 행렬 a에서 0이 아닌 원소 수
////	b[0].row = n;	// 전치 행렬 b의 행 수
////	b[0].col = m;	// 전치 행렬 b의 열 수
////	b[0].value = v;	// 전치 행렬 b의 원소 수
////	if (v > 0) {	// 0이 아닌 원소가 있는 경우에만 전치 연산 수행
////		p = 1;
////		for (i = 0; i < n; i++)			// 희소 행렬 a의 열별로 전치 반복 수행
////			for (j = 1; j <= v; j++)	// 0이 아닌 원소 수에 대해서만 반복 수행
////				if (a[j].col == i) {	// 현재의 열에 속하는 원소가 있으면 b[]에 삽입
////					b[p].row = a[j].col;
////					b[p].col = a[j].row;
////					b[p].value = a[j].value;
////					p++;
////				}
////	}
////}
////
////int main(void) {
////	term a[] = { {8,7,10}, 
////		         {0,2,2}, 
////		         {0,6,12}, 
////		         {1,4,7}, 
////		         {2,0,23}, 
////		         {3,3,31}, 
////		         {4,1,14},
////				 {4,5,25}, 
////		         {5,6,6}, 
////		         {6,0,52}, 
////		         {7,4,11} 
////	};
////	term b[sizeof(a) / sizeof(a[0])]; //배열 원소 개수 계산
////	int i;
////
////	printf("<<희소 행렬 a>>");
////	for (i = 0; i <= a[0].value; i++)
////		printf("\n[%3d, %3d, %3d ] ", a[i].row, a[i].col, a[i].value);
////
////	smTranspose(a, b);
////
////	printf("\n\n<<희소 행렬 b>>");
////	for (i = 0; i <= b[0].value; i++)
////		printf("\n[%3d, %3d, %3d ] ", b[i].row, b[i].col, b[i].value);
////
////	getchar();  return 0;
////}
////
//////#include <stdio.h>
//////
//////int main(void) {
//////	int list[10] = { 65, 97, 50, 90, 100, 70 };
//////
//////	for (int i = 0; i < 10; i++) 
//////		printf("%3o ", list[i]);
//////
//////	return 0;
//////}