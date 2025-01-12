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
    ListNode* reverseList(ListNode* head) {
        ListNode* t1 = nullptr;
        ListNode* t2 = nullptr;
        ListNode* temp = head;

        while(temp!=nullptr){
            t2 = temp->next;
            temp->next = t1;
            t1 = temp;
            temp = t2;
        }
        return t1;


    }
};