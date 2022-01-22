#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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
vector<ListNode*> ReturnListAddrs(ListNode* ptr)
{
	ListNode* first = ptr;
	vector<ListNode*> addr;
	while (first)
	{
		addr.push_back(first);
		first = first->next;
	}
	return addr;
}
ListNode* MadeCircle(ListNode* ptr, vector<ListNode*> addrs, int index) 
{
	ListNode* newPtr = ptr;
	while (true)
	{
		if (newPtr->next == nullptr)
		{
			newPtr->next = addrs[index];
			break;
		}
		else
		{
			newPtr = newPtr->next;
		}
	}
	return newPtr;
}
bool IsCircle(ListNode* ptr) 
{
	map<ListNode*, int> addrs;
	int p = 0;
	while (ptr)
	{
		if (addrs.find(ptr) != addrs.end())
		{
			return true;
		}
		else
		{
			addrs.insert(pair<ListNode*, int>(ptr, p));
			p++;
		}
		ptr = ptr->next;
	}
	return false;
}
int main()
{
	vector<int> nums = { 1, 2, 3, 4, 5, 6 };
	node = CreateList(nums.size(), nums);
	vector<ListNode*> addrs = ReturnListAddrs(node);
	node = MadeCircle(node, addrs, 4);
	cout << IsCircle(node);
}
