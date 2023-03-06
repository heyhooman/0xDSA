class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
        // code here
        Node*prev=NULL;
        Node*cur=head;
        Node*nxt=head;
        int count=0;
        while(cur){
            nxt=nxt->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
            count++;
        }
        Node*temp=prev;
        int cnt=count-k-1;
        while(cnt--){
            temp=temp->next;
        }
        head->next=prev;
        Node*ans=temp->next;
        temp->next=NULL;
        return ans;
    }
};