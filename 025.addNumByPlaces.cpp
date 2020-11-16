//https://leetcode.com/problems/add-two-numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int no1,no2,carry=0,tempSum=0;
        
        //create head node
        ListNode temp(0);
        ListNode* t = &temp;
        
        //add till both num become 0
        
        while(l1!= NULL || l2 != NULL){
        
            if(l1 == NULL){
                no1 = 0;
            }
            else{
                no1 = l1->val;
                l1 = l1->next;
            }
            
            if(l2 == NULL){
                no2 = 0;
            }
            else{
                no2 = l2->val;
                l2=l2->next;
            }
            
            //calculate sum and carry for this place
            tempSum = no1 + no2 + carry;
            if(tempSum >9){
                tempSum = tempSum%10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            
            //append it to result list
            
            t->next = new ListNode(tempSum);
            t = t->next;    
        } 
        
        //if carry remains then add it to result
        if(carry == 1){
            t->next = new ListNode(1);
        }
        return temp.next;
    }
};
