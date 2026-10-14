#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;

};
struct node * creating_tree(int data){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=n->right=NULL;
    return n;
}
void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int main(){
        // 1. Create all the nodes (1 through 7)
    struct node *n1 = creating_tree(1); // Root
    struct node *n2 = creating_tree(2);
    struct node *n3 = creating_tree(3);
    struct node *n4 = creating_tree(4);
    struct node *n5 = creating_tree(5);
    struct node *n6 = creating_tree(6);
    struct node *n7 = creating_tree(7);

    // 2. Link the nodes to form the tree structure
    
    // Linking children to Root (1)
    n1->left = n2;
    n1->right = n3;

    // Linking children to Node (2)
    n2->left = n4;
    n2->right = n5;

    // Linking children to Node (3)
    n3->left = n6;
    n3->right = n7;

    // 3. Print the results to verify
    printf("Tree built successfully!\n\n");
    
    printf("Visual representation:\n");
    printf("        1\n");
    printf("       / \\\n");
    printf("      2   3\n");
    printf("     / \\ / \\\n");
    printf("    4  5 6  7\n\n");

    postorder(n1);
}
