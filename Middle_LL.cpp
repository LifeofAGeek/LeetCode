/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Approach 1

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int c=0;
        while(temp)
        {
            c++;
            temp=temp->next;
        }
        temp=head;
        if(c%2!=0) c=ceil(c/2);
        else c=c/2;
        while(c--)
        {
            temp=temp->next;
        }
        return temp;
    }
};


//Approach 2

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
