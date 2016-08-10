class Solution{
public:
	ListNode* oddEvenList(ListNode* head){
		if(head == NULL || head->next == NULL)
			return head;

		//odd and even 兩個指標分別用來指向兩個linklist的tail
		ListNode* odd = head;
		ListNode* even_head = head->next;
		ListNode* even = even_head;

		
	    while(even != NULL && even->next != NULL)
	    {
	    	//奇數指向下一個奇數
	    	odd->next = even->next;
	    	//移動tail
	    	odd = odd->next;
               //偶數指向下一個偶數
	    	even->next = odd->next;
	    	//移動tail
	    	even = even->next;
	    }

	    ///// final combine odd and even linklist//////
	    odd->next = even_head;
	    return head;
	}
};
