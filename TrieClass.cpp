#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	char data;
	bool isTerminal;
	unordered_map<char,Node*>children;

	Node(char data, bool isTerminal)
	{
		this->data=data;
		this->isTerminal=isTerminal;
	}
};

void insert(Node *root,string str)
{
	Node *temp=root;
	for(int i=0;i<str.size();i++)
	{
		char ch=str[i];
		if(temp->children.find(ch)!=temp->children.end())
			temp=temp->children[ch];
		else
		{
			if(i<str.size()-1)
			{
				temp->children[ch]=new Node(ch,false);
				temp=temp->children[ch];
			}
			else
			{
				temp->children[ch]=new Node(ch,true);
				temp=temp->children[ch];
			}
		}
	}
}

bool search(Node *root, string str)
{
	Node *temp=root;
	for(int i=0;i<str.size();i++)
	{
		char ch=str[i];
		if(temp->children.find(ch)==temp->children.end())
			return false;
		else
		{
			temp=temp->children[ch];
		}
	}
	return temp->isTerminal;
}

void print(Node *root)
{
	
}
int main(int argc, char const *argv[])
{
	Node *root=new Node('\0',false);
	insert(root,"app");
	insert(root,"ape");
	insert(root,"ace");
	insert(root,"apple");
	insert(root,"pie");
	insert(root,"mango");
	insert(root,"man");
	cout<<search(root,"ace")<<endl;
	cout<<search(root,"pie")<<endl;
	cout<<search(root,"mango")<<endl;
	cout<<search(root,"sucks")<<endl;
	return 0;
}