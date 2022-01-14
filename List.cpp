//Ncamiso Mkhabela
#include "StdAfx.h"
#include <iostream>
#include "List.h"

using namespace std;

List::List(void)
{size = 0;}


List::~List(void)
{
}

bool List::IsEmpty () { return size==0;}
bool List::IsFull () {return (size == MaxSize); }

void List::Insert (DataType e)//insert element into list
{
 if (!(IsFull()))
 {    Item[size] = e;
      size++;
 }
}


/* ordinary function - not a member function */
void Swap (DataType& x, DataType& y)
{                                
  DataType Temp;
  Temp = x;
  x = y;
  y =Temp;
}                                  

void List::Delete (DataType e)//delete element from list
{ 
 int index = 0;    
if  (!(IsEmpty()))
  {
    while ((index  < size) && (Item[index] != e) )
       index++;
    if (Item[index] == e)
    {  
     Swap (Item[index], Item[size-1]);
     size--;
    }
  }
}


void List::ShowData ()//display element on list into standard output
{
 for (int index = 0; index < size; index++)
    cout << Item[index] << "   ";
    cout << endl;
	
}

