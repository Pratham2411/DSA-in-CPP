// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {

//         if(head==NULL || head->next==NULL) return head;
//         ListNode* a = head;
//         ListNode* b = head-> next;
//         while(b!=NULL){
//             while(b!=NULL && a->val==b->val){
//            b=b->next;
//                       }
//              a->next=b;
//              a=b;
//           if(b!=NULL)   b=b->next;
//         }
//        return head;
//     }
// };