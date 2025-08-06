/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp1=headA;
        ListNode*temp2=headB;
        int l1=0,l2=0;
        while(temp1!=NULL){
            l1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            l2++;
            temp2=temp2->next;
        }
        int n=abs(l1-l2);
        ListNode*a=headA;
        ListNode*b=headB;
        if(l1 > l2){
            while(n--) a = a->next;
        } else {
            while(n--) b = b->next;
        }
        //n=abs(l1-l2);
        while(a!=b){
           a=a->next;
           b=b->next;
        }
        return a;
    }
};