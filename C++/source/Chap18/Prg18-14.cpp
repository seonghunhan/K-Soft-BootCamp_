/*********************************************************************
 * 재귀 처리로 insert, erase, search, 순회 등의 멤버 함수를 구현한   *
 * BinarySearchTree 클래스의 인터페이스 파일                         *
 *********************************************************************/
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include <iostream>
#include <cassert>
using namespace std;

// Node 구조체 정의
template<class T>
struct Node
{
  T data;
  Node<T>* left;
  Node<T>* right;
};
// BinarySearchTree 클래스 정의
template<class T>
class BinarySearchTree
{
  private:
    Node<T>* root;
    int count;
    Node<T>* makeNode(const T& value);
    void destroy(Node <T>* ptr);  // 헬퍼 함수
    void insert(const T& value, Node <T>*& ptr); // 헬퍼 함수
    void inorder(Node <T>* ptr) const; // 헬퍼 함수
    void preorder(Node <T>* ptr) const; // 헬퍼 함수
    void postorder(Node <T>* ptr) const; // 헬퍼 함수
    bool search(const T& value, Node <T>* ptr) const; // 헬퍼 함수
  public:
    BinarySearchTree();
    ~BinarySearchTree();
    void insert(const T& value); 
    void erase(const T& value); 
    bool search(const T& value) const;  
    void inorder() const;   
    void preorder() const; 
    void postorder() const; 
    int size() const;
    bool empty() const;
};
#endif 