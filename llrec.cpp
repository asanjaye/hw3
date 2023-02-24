#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************
void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
	if(head == nullptr){
		smaller = nullptr;
		larger = nullptr;
		return;
	}
	else{
		llpivot(head->next,smaller, larger, pivot);
		if(head->val <= pivot){
			if(smaller==nullptr){
				smaller = head;
			}
			else{
				head->next = smaller;
				smaller = head;

			}
			head=nullptr;
		}

		else{
			if(larger==nullptr){
				larger = head;
			}
			else{
				head->next = larger;
				larger = head;
			}
			head = nullptr;
		}
	}
}