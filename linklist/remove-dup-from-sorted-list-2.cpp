class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head ||!head->next)return head;
        if(!head->next->next && head->val==head->next->val)return NULL;
        ListNode*dummy=new ListNode(-1);
        dummy->next=head;
        ListNode*td=dummy;
        
        ListNode*prev=head, *cur=head->next;
        
        while(cur!=NULL && cur->next!=NULL){
            if(prev->val==cur->val){
                ListNode*temp=cur;
                cur=cur->next;
                prev->next=cur;
                temp->next=NULL;
                if(prev->val!=cur->val){
                    if(cur->next){
                    ListNode*temp=prev;
                    td->next=cur;
                    prev=cur;
                    cur=cur->next;
                    temp->next=NULL;
                    
                    
                    }
                    else{
                      td->next=cur; 
                      ListNode*temp=prev;
                      temp->next=NULL;
                    }
                }
                else {
                    continue;
                }
            }
            else{
            prev=prev->next;
            cur=cur->next;
            td=td->next;
            }
        }
        if (prev->val==cur->val)td->next=NULL;
        
        return dummy->next;

    }
};
