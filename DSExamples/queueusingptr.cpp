#include <iostream>
using namespace std;
int MAX=999;
class QueueusingPtr
{
	int *nHptr ; *nTptr;
public:
	int AddCount;
public:
	QueueusingPtr()
	{
		nHptr=new int;
		nTprt=new int;
		AddCount=0;
		*(nHptr)=*(nTptr)=-1;
	}
	inline int IsFull()
	{
		return (AddCount == MAX) ? 1 : 0 ;
	}
	inline int IsEmpty()
	{
		return ( nHptr == nTptr ) ? 1 : 0 ;
	}
	void EnQueue()
	{
		if(IsFull())
		{
			cout<<"Stack is full"<<endl;
			return ;
		}
		int nData;
		cout<<"Enter the value"<<endl;
		cin>> nData;
		*(nTptr+AddCount) = nData;
		AddCount++;
		nTptr++;
		return ;    
	}
	void DeQueue()
	{
		if(IsEmpty())
		{
			cout<<"Stack is Empty"<<endl;
			return ;
		}
		
		cout<<"Deleted Value is :=";
		cout<<*(nHptr)<<endl;
		nHptr++;
		return ;    
	}
	void Display()
	{
		int x=0;
		while(x<AddCount)
		{
			cout<< *(nTptr+x) <<endl;
			x++;	
		}
	}
	void Initialize()
	{
		int nData;
		cout<<"Enter the value"<<endl;
		cin>> nData;
		*(nHptr+AddCount) = nData;
		nTptr = &nData ;
		AddCount++;
		nHptr++;
	}
	~QueueusingPtr();
};

int main()
{
	QueueusingPtr q;
	int nCh;
	while(1)
	{
	cout <<"\n 1.Add Element \n 2.Remove Element \n 3.Display \n 4.Exit \n Enter your choice:";
	cin >> nCh;
	switch(nCh)
	      {
		case 1:   
			if (q.AddCount == 0)
			{
				q.Initialize();
			}
			else
				q.EnQueue();
			break;
		case 2:   
			q.DeQueue();
			break;
		case 3:
			q.Display();
            break;
		case 4:
			exit(0);
		 }
    }
	return 0;
}