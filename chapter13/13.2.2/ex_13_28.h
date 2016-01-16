#ifndef ex_13_28_h
#define ex_13_28_h
#include <string>
using std::string;

class TreeNode{
	public:
		TreeNode(const string &str) :value(str),count(new int(1)),left(nullptr),right(nullptr) { }
		TreeNode(const TreeNode & node):value(node.value),count(node.count),left(node.left),right(node.right) { ++*count; }
		TreeNode& operator=(const TreeNode &node)
		{
			++*node.count;
			--*count;
			if(*count==0)
			{
				if(left) delete left;
				if(right) delete right;
			}
			delete count;
			value=node.value;
			count =node.count;
			left=node.left;
			right=node.right;
			return *this;
		}
		~TreeNode()
		{
			--*count;
			if(*count==0)
			{
				if(left) delete left;
				if(right) delete right;
				left=nullptr;
				right=nullptr;
				delete count;
				count=nullptr;
			}
		}

	private:
		string value;
		int *count;
		TreeNode *left;
		TreeNode *right;
};

class BinStrTree{
	public:
		BinStrTree() :root(new TreeNode()) {}
		BinStrTree(const BinStrTree &tree) :root(new TreeNode(*tree.root)) { };
		BinStrTree& operator=(const BinStrTree &tree)
		{
			delete root;
			root=new TreeNode(*tree.root);
			return *this;
		}
		~binStrTree()
		{
			delete root;
		}
	private:
		TreeNode *root;
};


#endif
