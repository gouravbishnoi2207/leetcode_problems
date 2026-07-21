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
  ListNode* rList(ListNode* head){
ListNode* prev=NULL;
    ListNode* cur=head;
    while(cur!=NULL){
        ListNode* next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL ||head->next==NULL){
            return true;
        }
    ListNode* fast=head;
    ListNode* slow=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;}
ListNode* rhead=rList(slow);
    
while(rhead){
    if(head->val!=rhead->val){
        return false;
    }
    head=head->next;
    rhead=rhead->next;
}
return true;
    }
};