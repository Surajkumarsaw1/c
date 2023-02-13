#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key_076;
    struct Node *left_076, *right_076;
};
 
void findSuc(struct Node* root_076, struct Node** suc_076, int key_076)
{
    if (root_076 == NULL)  return ;
 
    if (root_076->key_076 == key_076)
    {
        if (root_076->right_076 != NULL)
        {
            struct Node* tmp = root_076->right_076 ;
            while (tmp->left_076)
                tmp = tmp->left_076 ;
            *suc_076 = tmp ;
        }
        return ;
    }
 
    if (root_076->key_076 > key_076)
    {
        *suc_076 = root_076 ;
        findSuc(root_076->left_076, suc_076, key_076) ;
    }
    else
    {
        findSuc(root_076->right_076, suc_076, key_076) ;
    }
}
void findPre(struct Node *root_076, struct Node **pre_076, int key_076)
{
    if (root_076 == NULL)
        return;

    if (root_076->key_076 == key_076)
    {
        if (root_076->left_076 != NULL)
        {
            struct Node *tmp = root_076->left_076;
            while (tmp->right_076)
                tmp = tmp->right_076;
            *pre_076 = tmp;
        }
        return;
    }

    if (root_076->key_076 > key_076)
    {
        findPre(root_076->left_076, pre_076, key_076);
    }
    else
    {
        *pre_076 = root_076;
        findPre(root_076->right_076, pre_076, key_076);
    }
}
void inorderSucdwithParent(struct Node* root_076, struct Node** suc_076, int key_076)
{
    struct Node* parent=root_076;
    if (parent == NULL)  return ;
 
    if (parent->key_076 == key_076)
    {
         if (parent->right_076 != NULL)
        {
            parent= parent->right_076 ;
            while (parent->left_076)
                parent = parent->left_076 ;
            *suc_076 = parent ;
        }
        return ;
    }
 
    if (parent->key_076 > key_076)
    {
        *suc_076 = parent;
       inorderSucdwithParent(parent->left_076, suc_076, key_076) ;
    }
    else
    {
        inorderSucdwithParent(parent->right_076, suc_076, key_076) ;
    }
}

void inorderPredwithParent(struct Node* root_076, struct Node** pre_076, int key_076)
{
    struct Node* parent=root_076;
    if (parent == NULL)  return ;
 
    if (parent->key_076 == key_076)
    {
        if (parent->left_076 != NULL)
        {
            parent = parent->left_076;
            while (parent->right_076)
                parent = parent->right_076;
            *pre_076 = parent ;
        }
        return ;
    }
 
    if (parent->key_076 > key_076)
    {
       inorderPredwithParent(parent->left_076, pre_076, key_076) ;
    }
    else
    {
        *pre_076 = root_076 ;
        inorderPredwithParent(parent->right_076, pre_076, key_076) ;
    }
}
struct Node *newNode(int item)
{
    struct Node temp_076 =  (struct Node)malloc(sizeof(struct Node));
    temp_076->key_076 = item;
    temp_076->left_076 = temp_076->right_076 = NULL;
    return temp_076;
}
 
struct Node* insert(struct Node* node, int key_076)
{
    if (node == NULL) return newNode(key_076);
    if (key_076 < node->key_076)
        node->left_076  = insert(node->left_076, key_076);
    else
        node->right_076 = insert(node->right_076, key_076);
    return node;
}
 
int main()
{
    int key_076;
    struct Node *root_076 = NULL;
    struct Node *pre_076=NULL;
    struct Node *suc_076=NULL;
    int choice_076;
    int t=1;


    root_076 = insert(root_076, 50);
    insert(root_076, 30);
    insert(root_076, 20);
    insert(root_076, 40);
    insert(root_076, 70);
    insert(root_076, 60);
    insert(root_076, 80);

    while(t){
        
        printf("1.Inorder predecessor of a non leaf node\n2.Inorder sucessor of a non leaf node\n3.Inorder predecessor with parent pointer\n4.Inorder sucessor with parent pointerEnter the case to run: ");
        scanf("%d", &choice_076);

        switch(choice_076){
            case 1:
                printf("Enter the key_076: ");
                scanf("%d", &key_076);
                findPre(root_076, &pre_076, key_076);
                if (pre_076 != NULL)
                    printf("Predecessor is %d\n", pre_076->key_076);
                else
                    printf("No Predecessor\n");
                break;

            case 2:
                printf("Enter the key_076: ");
                scanf("%d", &key_076);
                findSuc(root_076, &suc_076, key_076);
                if (suc_076 != NULL)
                    printf("Sucessor is %d\n",suc_076->key_076);
                else
                    printf("No Sucessor\n");
                break;

            case 3:
                printf("Enter the key_076: ");
                scanf("%d", &key_076);
                inorderPredwithParent(root_076, &pre_076, key_076);
                if (pre_076 != NULL)
                    printf("Predecessor is %d\n",pre_076->key_076);
                else
                    printf("No Predecessor\n");
                break;

            case 4:
                printf("Enter the key_076: ");
                scanf("%d", &key_076);
                inorderSucdwithParent(root_076, &suc_076, key_076);
                if (suc_076 != NULL)
                    printf("Sucessor is %d\n",suc_076->key_076);
                else
                    printf("No Sucessor\n");
                break;

            default:
                printf("Exiting the program, bye");
                t=0;
                exit(0);
        }
    }
    return 0;
}