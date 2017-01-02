Q:Write a function to delete a node (except the tail)
  in a singly linked list, 
  given only access to that node.
A:宣告一個暫存，把值存到暫存，接著指向下一個node

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
    void deleteNode(ListNode* node) {
	if (node == NULL) 
	  return;
	//宣告一個暫存的ListNode temp指標，temp指向  node的下一個
	ListNode* temp = node->next;
	//把暫存裡面值丟進node裡面的值，也就是把值取代;這相當於往前移一個node
	node->val = temp->val;
	//node->next指向下下一個node
	node->next = temp->next;
	//刪除暫存pointer
	delete temp;        
    }
};



class Solution
{
public:
	void deleteNode(ListNode* node)
	{
		if (node==NULL) return ;

		ListNode* temp = node->next;
		node->val = temp->val;
		node->next = temp->next;
	}
	
};