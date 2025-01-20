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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz=0;
        ListNode* temp = head;
        while(temp!=nullptr){
            sz++;
            temp=temp->next;
        }
        temp=head;
        int pos=sz-n;
        
        if(pos==0){
            head=head->next;
            return head;
        }
        
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        if(temp->next){
            temp->next=temp->next->next;
        }
        
        return head;
    }
};