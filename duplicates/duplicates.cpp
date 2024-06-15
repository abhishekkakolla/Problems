#include <iostream>
#include <vector>


using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        Tree* list = new Tree();
        list->head.value = nums[0];
        for (int i = 1; i < nums.size(); i ++)
        {
            


        }

        
    }
};

class Tree
{
public:
    Node* head;
    Tree() {
        Node* temp;
        temp = new Node();
        head = temp;
        head->left = nullptr;
        head->right = nullptr;

    }


};

class Node
{
public:
    int value;
    Node* left;
    Node* right;
};