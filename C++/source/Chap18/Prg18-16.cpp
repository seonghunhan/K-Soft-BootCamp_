/***************************************************************
 * BinarySearchTree 클래스를 테스트 해보는 애플리케이션 파일   *
 ***************************************************************/
#include "binarySearchTree.cpp"

int main()
{
  // 이진 탐색 트리 생성 
  BinarySearchTree <string> bct;
  // 6개의 노드 추가
  bct.insert("Michael");
  bct.insert("Jane");
  bct.insert("Sophie");
  bct.insert("Thomas");
  bct.insert("Rose");
  bct.insert("Richard");
  // pre-order 순회 출력
  cout << "pre-order 순회 출력" << endl;
  bct.preorder();
  cout << endl << endl;
  // in-order 순회 출력
  cout << "in-order 순회 출력" << endl;
  bct.inorder();
  cout << endl << endl;
  // post-order 순회 출력
  cout << "post-order 순회 출력" << endl;
  bct.postorder();
  cout << endl << endl;
  // 값 탐색
  cout << "탐색: " << endl;
  cout << "search('Sophie') = " << boolalpha;
  cout << bct.search("Sophie") << endl;
  cout << "search('Mary') = " << boolalpha;
  cout << bct.search("Mary") << endl;
  return 0;
}