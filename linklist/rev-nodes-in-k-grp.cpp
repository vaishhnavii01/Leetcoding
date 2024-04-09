class Solution {
private:
     ListNode*reverse(ListNode*head){
        ListNode*temp=head;
        ListNode*prev=NULL;
        ListNode*Next=NULL;
        while(temp!=NULL){
            Next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=Next;

        }
        return prev;
       
    }
    ListNode*getkthnode(ListNode*cur,int k){
        k-=1;
        
        while(cur!=NULL && k>0){
            cur=cur->next;
            k--;
        }
        return cur;
    }
    

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(temp!=NULL){
            ListNode*kthnode=getkthnode(temp,k);
            if(kthnode==NULL){
                if(prev){
                    prev->next=temp;
                }
                break;
            }
            ListNode*nextNode=kthnode->next;
            kthnode->next=NULL;
            reverse(temp);
            if(temp==head){
                head=kthnode;
            }
            else{
                prev->next=kthnode;
            }
            prev=temp;
            temp=nextNode;
        }
        return head;
       
        }

};
