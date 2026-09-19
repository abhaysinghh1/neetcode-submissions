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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        ListNode* dNode=new ListNode(-1);
        ListNode* temp=dNode;
        while(curr1!=nullptr && curr2!=nullptr){

            if(curr1->val< curr2->val){
                temp->next=curr1;
                curr1=curr1->next;
            }
            else{
                temp->next=curr2;
                curr2=curr2->next;
            }
            temp=temp->next;
        }
       if(curr1!=nullptr){
        temp->next=curr1;
       }
       else{
        temp->next=curr2;
       }
       return dNode->next;
        
    }
};
