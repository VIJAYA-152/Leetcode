/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode* temp1=head1;
        ListNode* temp2=head2;
        ListNode*dummynode=new ListNode(-1);
        ListNode*temp3=dummynode;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val<=temp2->val)
            {
            temp3->next=temp1;
            temp1=temp1->next;
            }
            else{
            temp3->next=temp2;
            temp2=temp2->next;
            }
            temp3=temp3->next;
        }
      
       while(temp1!=NULL)
       {
        temp3->next=temp1;
        temp1=temp1->next;
        temp3=temp3->next;
       }
       while(temp2!=NULL)
       {
        temp3->next=temp2;
        temp2=temp2->next;
        temp3=temp3->next;
       }
        return dummynode->next; 
    }
};