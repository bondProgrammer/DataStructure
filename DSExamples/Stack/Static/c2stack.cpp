#include <iostream>
#define SIZE 10 
using namespace std;
class stk
{
       private : 
       int top1 = -1 ;
       int top2 = SIZE ;
       int stkk[SIZE] ;
       
       public:
       
       void push1( int  ele )
       {
              if(IsFull())
              {
                     cout<<"STACK OVERFLOW"<<endl;
                     return ;
              }
              else
              {
                     ar[++top1] = data;
              }
              
       }
       void push2(int ele)
       {
              if(IsFull())
              {
                     cout<<"STACK OVERFLOW"<<endl;
                     return ;
              }
              else
              {
                     ar[++top1] = data;
              }
       }
       int pop1()
       {
              int ele = 0 ;
              
              return ele;
       }
       int pop2()
       {
              int ele = 0 ;
              return ele ;              
       }
       bool IsFull()
       {
              if(top1 < top2 - 1)
              {
                     return false ;
              }
              else
              {
                     return true ;
              }
              
       }
       bool Is1Empty()
       {
              if(top1 == -1)
              {
                     return true ;
              }
              else
              {
                     return false ;
              }
       }
       bool Is2Empty()
       {
              if(top2 == SIZE )
              {
                     return true ;
              }
              else
              {
                     return false ;
              }
       }

};
int main(void){

        
        
}

