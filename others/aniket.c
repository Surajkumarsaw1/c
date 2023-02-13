#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct Node
{
    struct Node *left_076, *right_076;
    int info_076;
    bool lthread_076;
    bool rthread_076;
};

struct Node *insert(struct Node *root_076, int key_076)
{
    struct Node *ptr = root_076;
    struct Node *par = NULL;
    while (ptr != NULL)
    {

        if (key_076 == (ptr->info_076))
        {
            printf("Duplicate Key !\n");
            return root_076;
        }

        par = ptr;

        if (key_076 < ptr->info_076)
        {
            if (ptr->lthread_076 == false)
                ptr = ptr->left_076;
            else
                break;
        }

        else
        {
            if (ptr->rthread_076 == false)
                ptr = ptr->right_076;
            else
                break;
        }
    }

    struct Node *tmp = (struct Node *)malloc(sizeof(struct Node));
    tmp->info_076 = key_076;
    tmp->lthread_076 = true;
    tmp->rthread_076 = true;

    if (par == NULL)
    {
        root_076 = tmp;
        tmp->left_076 = NULL;
        tmp->right_076 = NULL;
    }
    else if (key_076 < (par->info_076))
    {
        tmp->left_076 = par->left_076;
        tmp->right_076 = par;
        par->lthread_076 = false;
        par->left_076 = tmp;
    }
    else
    {
        tmp->left_076 = par;
        tmp->right_076 = par->right_076;
        par->rthread_076 = false;
        par->right_076 = tmp;
    }

    return root_076;
}

int prev = 0;
struct Node *inorder_succesor(struct Node *ptr)
{
    if (ptr->rthread_076 == true)
        return ptr->right_076;

    ptr = ptr->right_076;
    while (ptr->lthread_076 == false)
        ptr = ptr->left_076;
    return ptr;
}

int preorder(struct Node *root_076, int key_076)
{
    int i = 0;
    if (root_076 == NULL)
    {
        printf("tree is empty \n");
    }
    else
    {
        while (root_076 != NULL)
        {
            // printf("%d ", root_076->info_076);
            if (key_076 == root_076->info_076)
            {
                return prev;
            }

            prev = root_076->info_076;
            if (root_076->lthread_076 == false)
            {
                root_076 = root_076->left_076;
            }
            else if (root_076->rthread_076 == false)
            {
                root_076 = root_076->right_076;
            }
            else
            {
                while (root_076 != NULL && root_076->rthread_076 == true)
                {
                    root_076 = inorder_succesor(root_076);
                }
                if (root_076 != NULL)
                {
                    root_076 = root_076->right_076;
                }
            }
        }
    }
}

int prev1 = 0;
struct Node *sucessor(struct Node *ptr)
{
    if (ptr->rthread_076 == true)
        return ptr->right_076;

    ptr = ptr->right_076;
    while (ptr->lthread_076 == false)
        ptr = ptr->left_076;
    return ptr;
}

int preorder_sucessor(struct Node *root_076, int key1)
{
    int i = 0;
    if (root_076 == NULL)
    {
        printf("tree is empty \n");
    }
    else
    {
        while (root_076 != NULL)
        {
            if (i == 1)
            {
                return prev1;
            }
            // printf("%d ", root_076->info_076);
            if (key1 == root_076->info_076)
            {
                i++;
            }

            if (root_076->lthread_076 == false)
            {
                root_076 = root_076->left_076;
            }
            else if (root_076->rthread_076 == false)
            {
                root_076 = root_076->right_076;
            }
            else
            {
                while (root_076 != NULL && root_076->rthread_076 == true)
                {
                    root_076 = inorder_succesor(root_076);
                }
                if (root_076 != NULL)
                {
                    root_076 = root_076->right_076;
                }
            }
            prev1 = root_076->info_076;
        }
    }
}

struct Node *findd(struct Node *root_076, int y)
{
    if (root_076->info_076 == y)
    {
        printf("\n%d\n", root_076->info_076);
        return root_076;
    }
    else if (root_076->info_076 < y && root_076->rthread_076 == false)
    {
        return findd(root_076->right_076, y);
    }
    else if (root_076->info_076 > y && root_076->lthread_076 == false)
    {
        return findd(root_076->left_076, y);
    }
    else
    {
        return NULL;
    }
}
int inorderpredecessor(struct Node *root_076, int y)
{
    struct Node *temp_076 = findd(root_076, y);
    if (temp_076->rthread_076 == false)
    {
        return temp_076->right_076->info_076;
    }
    if (temp_076->lthread_076 == false)
    {
        return temp_076->left_076->info_076;
    }
    if (temp_076->lthread_076 == true && temp_076->rthread_076 == true)
    {
        if (temp_076->left_076->lthread_076 == false)
        {
            return temp_076->left_076->left_076->info_076;
        }
        return temp_076->left_076->info_076;
    }
}

int iinoder(struct Node *root_076)
{
    if (root_076->rthread_076 == false)
    {
        // printf("\nhiii\n");
        return iinoder(root_076->right_076);
    }
    if (root_076->lthread_076 == false)
    {
        return iinoder(root_076->left_076);
    }
    if (root_076->rthread_076 == true && root_076->lthread_076 == true)
    {
        return root_076->info_076;
    }
}

int find(struct Node *root_076, int y)
{
    if (root_076->info_076 == y)
    {
        return root_076->info_076;
    }
    else if (root_076->info_076 < y && root_076->rthread_076 == false)
    {
        int out = find(root_076->right_076, y);
        if (out == y)
        {
            return root_076->info_076;
        }
        else
        {
            return out;
        }
    }
    else if (root_076->info_076 > y && root_076->lthread_076 == false)
    {
        int out = find(root_076->left_076, y);
        if (out == y)
        {
            // printf("\n%d\n", root_076->info_076);
            if (root_076->rthread_076 == true)
            {
                return root_076->info_076;
            }
            return iinoder(root_076);
        }
        else
        {
            return out;
        }
    }
    else
    {
        return -1;
    }
}

int inodersuccesor(struct Node *root_076, int y)
{
    if (root_076 != NULL)
    {
        struct Node *temp_076 = NULL;
        if (root_076->info_076 == y)
        {
            return -1;
        }
        else
        {
            return find(root_076, y);
        }
    }
}

void postorder(struct Node *root_076)
{

    if (root_076->lthread_076 == false)
    {
        postorder(root_076->left_076);
    }

    if (root_076->rthread_076 == false)
    {

        postorder(root_076->right_076);
    }
    printf(" %d", root_076->info_076);
    if (root_076->rthread_076 == true && root_076->lthread_076 == true)
    {
        return;
    }
}
void postorder2(struct Node *root_076)
{

    if (root_076->lthread_076 == false)
    {
        postorder2(root_076->left_076);
    }

    if (root_076->rthread_076 == false)
    {

        postorder2(root_076->right_076);
    }
    printf(" %d", root_076->info_076);
    if (root_076->rthread_076 == true && root_076->lthread_076 == true)
    {
        return;
    }
}
void postorder1(struct Node *root_076)
{
     printf(" %d", root_076->info_076);

    if (root_076->lthread_076 == false)
    {
        postorder1(root_076->left_076);
    }

    if (root_076->rthread_076 == false)
    {

        postorder1(root_076->right_076);
    }
   
    if (root_076->rthread_076 == true && root_076->lthread_076 == true)
    {
        return;
    }
}

// Driver Program
int main()
{
    
    int flag = 1;
    struct Node *root_076 = NULL;
    int count, key_076;
    while (flag)
    {
        printf("\n0. exit\n1. creation of threaded tree\n2.isertion of key_076\n3.preorder predecessor of a non leaf node\n4.preorder sucessor of a non leaf node\n5.postorder predecessor with parent pointer\n6.postorder  sucessor with parent pointer\nEnter the case to run: ");
        scanf("%d", &flag);

        switch (flag)
        {
        case 0:
            exit(1);
        case 1:
            root_076 = NULL;
            printf("enter nuber of keys:");
            scanf("%d", &count);
            for (size_t i = 0; i < count; i++)
            {
                //printf("enter a key_076 values:");
                scanf("%d", &key_076);
                root_076 = insert(root_076, key_076);
            }
            break;
        case 2:
            printf("enter a key_076 values:");
            scanf("%d", &key_076);
            root_076 = insert(root_076, key_076);
            break;
        case 3:
            printf("Enter the key_076: ");
            scanf("%d", &key_076);
            postorder1(root_076);
            printf("\n%d->%d\n",preorder(root_076, 30),key_076);
            break;
        case 4:
            printf("Enter the key_076: ");
            scanf("%d", &key_076);
             postorder1(root_076);
            printf("\n%d->%d\n",key_076,preorder_sucessor(root_076, 60));
            break;
        case 5:
            printf("Enter the key_076: ");
            scanf("%d", &key_076);
            postorder2(root_076);
            printf("\n%d->%d\n",inorderpredecessor(root_076, 30),key_076);
            break;
        case 6:
            printf("Enter the key_076: ");
            scanf("%d", &key_076);
            postorder2(root_076);
            printf("\n%d->%d\n",key_076,inodersuccesor(root_076, 60));
            break;

        default:
            printf("YOU HAVE ENTERED A WRONG flag\n");
            break;
        }
    }
 return 0;
}