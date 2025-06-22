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
    ListNode *detectCycle(ListNode *head) {
        int pos = 0;
        if(!head || !head->next){
            return nullptr;
        }
        set<ListNode*> s;
        ListNode* temp = head;
        int flag = 1;
        while(temp){
            if(s.count(temp)){
                return temp;
            }
            s.insert(temp);
            temp = temp->next;
        }
        
        return nullptr;

    }
};