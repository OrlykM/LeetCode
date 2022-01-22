#include <iostream>
#include <vector>
using namespace std;
struct ListNode
{
	int data;
	ListNode* next;
} *node;
ListNode* CreateElement(int n)
{
	ListNode* ptr;
	ptr = new ListNode;
	ptr->data = n;
	ptr->next = nullptr;
	return ptr;
}
ListNode* CreateList(int n, vector<int> nums) 
{
	ListNode* ptr = CreateElement(nums[0]);
	for (int i = 1; i < n; i++)
	{
		ListNode* p = CreateElement(nums[i]);
		p->next = ptr;
		ptr = p;
	}
	return ptr;
}
void PrintListNodes(ListNode* ptr) 
{
	while (ptr)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}
ListNode* MiddleNode(ListNode* ptr) 
{
	vector<ListNode*> addrs;
	while (ptr)
	{
		addrs.push_back(ptr);
		ptr = ptr->next;
	}
	ptr = addrs[addrs.size() / 2];
	return ptr;
}
int main()
{
	vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	node = CreateList(nums.size(), nums);
	node = MiddleNode(node);
	PrintListNodes(node);
	return 0;
}
