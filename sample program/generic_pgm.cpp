#include<iostream>
#include<stdlib.h>
using namespace std;
#define TRUE 1
#define FALSE 0

typedef int BOOL;

template <class T>
struct node
{
T data;
struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;

template <class T>
class singlyll
{
private:
PNODE head;
public:
singlyll();
singlyll(singlyll&);
~singlyll();
BOOL insertfirst(T);
BOOL insertlas(T);
BOOL deletefirst();
};



































