// name      muhammad shoaib
// roll no. 22011556-062
#include<iostream>
using namespace std;
class Node{
	private:
		int Data;
		Node *Next;
	public:
		void insertionatbegining(int x);
		void insertionatending(int x);
		void insertionatanpoint(int x,int y);
		void updationatanypoint(int newdata,int olddata);
		void deletionofanynode(Node* &Head,int val);
		bool search(Node* head, int z);
		void print();
};
// Isertion at begining
Node *Head;
void Node::insertionatbegining(int x)
{
	
	Node *temp = new Node();
	temp->Data = x;
	temp->Next = Head;
	Head = temp;//adress of new node
}
void Node:: insertionatending(int x)
{
	Node *temp = new Node();
	if(Head==NULL)
	{
	Head= temp;
	return;
}
	Node* current=Head;
	while(current->Next!=NULL){
		current=current->Next;
	}
	
      temp->Data = x;
	current->Next = temp;

}
void Node:: insertionatanpoint(int x,int pos)
{
	Node *temp = new Node();
	temp->Data = x;
	temp->Next = NULL;
	if(pos==0)
	{
		temp->Next = Head;
	    Head = temp;
	}
	else
	{
		Node *temp2 = new Node();
		temp2=Head;
		for(int i=1; i<pos-1;i++)
		{
			temp2=temp2->Next;

		}
		temp->Next=temp2->Next;
		temp2->Next=temp;

	}
}
void Node::updationatanypoint(int newdata,int olddata)
{
	Node *temp = new Node();
	temp->Data = newdata;
	//temp->Next = NULL;
	Node* current=Head;
	while (current != NULL) {
    if (current->Data == olddata) 
	{
      current->Data = newdata;
      return;
    }
	 current = current->Next;
  }
}
void Node::deletionofanynode(Node* &Head,int val)
{
	Node *temp = Head;
	while (temp->Next->Data!=val)
	{
	temp=temp->Next;
	}
	Node* todelete=temp->Next;
	temp->Next=temp->Next->Next;
	delete todelete;
	
	
  }
  //to search in linkedlist
 bool  Node:: search(Node* head, int z)
{
   Node* temp=head;
   while(temp!=NULL ){
		if(temp->Data==z){
			return true;
			//cout<<" number<"<<z<<" searched in list";
		}
		temp=temp->Next;
	
	}
	return false;
}
// traversing of linklist
void Node::print()
{
	Node *temp = Head;
	cout<<"List is: ";
	while(temp != NULL)
	{
		cout<<temp->Data<<"->";
		temp = temp->Next;
	}
    cout<<"NULL"<<endl;

}


main()
{
	Node list;
	Head = NULL;

      
        	list.insertionatbegining(7);
        	list.insertionatbegining(6);
        	list.insertionatbegining(5);
		list.insertionatbegining(4);
       // list.print();
       list.insertionatbegining(3);
	//	list.print();
        list.insertionatbegining(2);
        //list.print();
        cout<< "       22011556-062"<<endl;
		cout<<endl;
        list.insertionatbegining(1);
        cout<<" lintlist";
        int num;
        list.print();
		cout<<endl;
		do{
		cout<<" 1:for traversing/displsy of  linklist  "<<endl;
        cout<<" 2:for insertion at begaining  "<<endl;
        cout<<" 3:for insertion at end press"<<endl;
        cout<<" 4:for insertion of  new node  "<<endl; 
        cout<<" 5:for updation of  any node  "<<endl;
        cout<<" 6:for delition of any node "<<endl;
        cout<<" 7:for serching of any node  "<<endl;
        cout<<" 0:For existing "<<endl;
        cout<<" press:";
        cin>>num;
        if(num==1)
        {
        	list.print();
		}
		else if(num==2)
		{
			list.insertionatbegining(22);
			list.print();
		}
		else if(num==3)
		{
			cout<<"Isertion at the end of list"<<endl;
		list.insertionatending(99);
		list.print();
		cout<<endl;
		}
			else if(num==4)
			{
				cout<<" insertion of new node at any point in the list"<<endl;
        int n,p;
	    cout<<" enter data  for the new node :";
	    cin>>n;
	    cout<<" enter position of the  the new  node :";
	    cin>>p;
		list.insertionatanpoint(n,p);
		list.print();
		cout<<endl;
			}
			else if(num==5)
			{
				cout<<" updation of any node in the list"<<endl;
		int old,ne;
		cout<<" enter old data which you update:";
		cin>>old;
		cout<<" enter new data by which you update:";
		cin>>ne;
		list.updationatanypoint(ne, old);
		list.print();
		cout<<endl;
			}
			else if(num==6)
			{
				 cout<<" deletion of any node in the list"<<endl;
		int a;
		cout<<" enter data which you update which you want to delete:";
		cin>>a;
		list.deletionofanynode(Head,a);
		cout<<" after deletion of node linklist is"<<endl;
		list.print();
		cout<<endl;
			}
				else if(num==7)
				{
					int t;
		cout<<" enter data which you want to search:";
		cin>>t;
				cout<<list.search(Head, t)<<endl;
					
				}
			//else 
			//{ 
			//cout<<" you enterd wrong number";
			}while( num!=0);
	cout<<"Program has been ended..."<<endl;
    
}

