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
    ListNode* oddEvenList(ListNode* head) {
        if((head==NULL) || (head->next==NULL) || (head->next->next==NULL))
            return head;
        int len=1;
        ListNode *temp=head, *tail=head, *root=head;
        while(tail->next){
            len++;
            tail=tail->next;
        }
        len=len/2;
        while(len--){
            temp=root->next;
            root->next=temp->next;
            root=root->next;
            temp->next=NULL;
            tail->next=temp;
            tail=tail->next;
        }
        return head;
    }
};
