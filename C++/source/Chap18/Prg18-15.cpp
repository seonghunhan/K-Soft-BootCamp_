/***************************************************************
 * 인터페이스 파일에서                                         *
 * 선언한 멤버 함수를 정의하는 구현 파일                       *
 ***************************************************************/
#ifndef BINARYSEARCHTREE_CPP
#define BINARYSEARCHTREE_CPP
#include "binarySearchTree.h"

// 생성자
template<class T>
BinarySearchTree<T>::BinarySearchTree()
:root(0), count(0)
{
}
// 소멸자
template<class T>
BinarySearchTree<T>::~BinarySearchTree()
{
  destroy(root);
}
// insert 멤버 함수
template <class T>
void BinarySearchTree<T>::insert(const T& value)
{
  insert(value, root);
  count++;
}
// Search 멤버 함수
template<class T>
bool BinarySearchTree<T>::search(const T& value) const
{
  return search(value, root);
}
// pre-order 순회
template <class T>
void BinarySearchTree<T>::preorder() const
{ 
  preorder(root);
}
// in-order 순회
template<class T>
void BinarySearchTree<T>::inorder() const
{ 
  inorder(root);
}
// post-order 순회
template<class T>
void BinarySearchTree<T>::postorder() const
{ 
  postorder(root);
}
// size 멤버 함수
template<class T>    
int BinarySearchTree<T>::size() const
{
  return count;
}
// empty 멤버 함수
template<class T>    
bool BinarySearchTree<T>::empty() const
{
  return (count == 0);
}
// 소멸자에서 활용하는 헬퍼 함수
template<class T>
void BinarySearchTree<T>::destroy(Node <T>* ptr)
{
  if(!ptr)
  {
    return;
  }
  destroy(ptr->left);
  destroy(ptr->right);
  delete ptr;
}
// insert 함수에서 활용하는 헬퍼 함수
template<class T>
void BinarySearchTree<T>::insert(const T& value, Node <T>*& ptr)
{
  if(!ptr)
  {
    ptr = makeNode(value);
    return;
  }
  else if(value < ptr->data)
  {
    insert(value, ptr->left);
  }
  else 
  {
    insert(value, ptr->right);
  }
}
// preorder 함수에서 활용하는 헬퍼 함수
template <typename T>
void BinarySearchTree<T>::preorder(Node<T>* ptr) const
{ 
  if(!ptr)
  {
    return;
  }
  cout << ptr->data << endl;
  preorder(ptr->left);
  preorder(ptr->right);
}
// inorder 함수에서 활용하는 헬퍼 함수
template<class T>
void BinarySearchTree<T>::inorder(Node<T>* ptr) const
{ 
  if(!ptr)
  {
    return;
  }
  inorder(ptr->left);
  cout << ptr->data << endl;
  inorder(ptr->right);
}
// postorder 함수에서 활용하는 헬퍼 함수
template<class T>
void BinarySearchTree<T>::postorder(Node <T>* ptr) const
{ 
  if(!ptr)
  {
    return;
  }
  postorder(ptr->right);
  postorder(ptr->left);
  cout << ptr -> data << endl;
}
// search 함수에서 활용하는 헬퍼 함수
template<typename T>
bool BinarySearchTree<T>::search(const T& value, Node<T>* ptr) const
{
  if(!ptr)
  {
    return false;
  }
  else if(ptr->data == value)
  {
    return true;
  }
  else if(value < ptr->data)
  {
    return search(value, ptr->left);
  }
  else
  {
    return search(value, ptr->right);
  }
}
// makeNode 함수에서 활용하는 헬퍼 함수
template<typename T>
Node<T>* BinarySearchTree<T>::makeNode(const T& value)
{
  Node<T>* temp = new Node<T>;
  temp->data = value;
  temp->left = 0;
  temp->right = 0;
  return temp;
}
#endif