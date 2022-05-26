// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node *rev(struct Node* head)
    {   
        if(head==NULL)
        return head;
        struct Node*p =NULL;
        struct Node*c=head;
        struct Node*t;
        while(c!=NULL)
        {
            t=c->next;
            c->next=p;
            p=c;
            c=t;
        }
        return p;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
       // code here
        first=rev(first);
        second=rev(second);
        int c=0;
        struct Node *head=new Node(0);
        Node *temp=head;
        while(first!=NULL||second!=NULL||c==1)
        {  
          int sum=0;
          if(first!=NULL)
          {
              sum+=first->data;
              first=first->next;
          }
          if(second!=NULL)
          {
              sum+=second->data;
              second=second->next;
          }
          sum+=c;
          c=sum/10;
          sum=sum%10;
          Node *dummy=new Node(sum);
          temp->next=dummy;
          temp=temp->next;
        }
        Node *ans=rev(head->next);
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends
