
#include<iostream>
using namespace std;

//1



struct node {


    int data;

    node* left;

    node* right;
};



int height(node * node);



bool isBalanced(node * root)

{
    int lh; 

        int rh; 

        if (root == NULL)

            return 1;

        lh = height(root->left);

    rh = height(root->right);

    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))

        return 1;
        return 0;

}




int max(int a, int b)

{
    return (a >= b) ? a : b;

}




int height(node * node)

{
        if (node == NULL)
            return 0;

        height(node->right);


}




node * newNode(int data)

{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);

}



int main()

{
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(8);

    if (isBalanced(root))
        cout << "True";

    else
        cout << "False";

    return 0;
}

//2

struct node
{
    int info;                           
    node* l, * r;                       
};

node* tree = NULL;                      

void push(int a, node** t)
{
    if ((*t) == NULL)                   
    {
        (*t) = new node;                
        (*t)->info = a;                
        (*t)->l = (*t)->r = NULL;       
        return;                       
    }

    if (a > (*t)->info) push(a, &(*t)->r); 
    else push(a, &(*t)->l);         
}


int main()
{
    int n;                             
    int s;                              
    cout << "������� ���������� ���������  ";
    cin >> n;                          

    for (int i = 0; i < n; ++i)
    {
        cout << "������ �����  ";
        cin >> s;                      

        push(s, &tree);               
    }
    cout << "���� ������\n";
}

//3
struct  Node
{
    int data; 
    Node* left; 
    Node* right; 
};

Node* find(Node* root, int value)
{
    while (root)   
    {
        if (root->data > value)  
        {
            root = root->left;
            continue;
        }
        else if (root->data > value)    
        {
            root = root->right;
            continue;
        }
        else   
        {
            return root;
        }
    }
    return NULL; 
}
