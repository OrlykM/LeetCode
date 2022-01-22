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
bool PalindromeNode(ListNode* ptr) 
{
	vector<int> nums;
	while (ptr)
	{
		nums.push_back(ptr->data);
		ptr = ptr->next;
	}
	for (int i = 0; i < nums.size()/2; i++)
	{
		if (nums[i] != nums[nums.size() - 1 - i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	vector<int> nums = { 1, 2, 3, 4, 1 };
	node = CreateList(nums.size(), nums);
	cout << PalindromeNode(node);
	return 0;
}
