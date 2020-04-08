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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int sex=0;
        while(temp)
        {
            sex++;
            temp=temp->next;
        }
        temp=head;
        if(sex%2!=0) sex=ceil(sex/2);
        else sex=sex/2;
        while(sex--)
        {
            temp=temp->next;
        }
        return temp;
    }
};
