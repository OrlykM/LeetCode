#include <iostream>
#include <vector>
#include <bitset>
#include <string>
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
int ConvertLinkedListIntoIntegers(ListNode* ptr) 
{
	string nums = "";
	while (ptr)
	{
		nums += to_string(ptr->data);
		ptr = ptr->next;
	}
	return bitset<32>(nums).to_ulong();
}
int main()
{
	vector<int> nums = { 1, 1, 1, 1 };
	node = CreateList(nums.size(), nums);
	cout << ConvertLinkedListIntoIntegers(node);
	return 0;
}
