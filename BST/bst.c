#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* left;
    int data;
    struct node* right;

};

struct node* root = NULL;
struct node* newnode;

void Insertion(int data) {
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->left = NULL;
   tempNode->right = NULL;

   //if tree is empty, create root node
   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent  = NULL;

      while(1) {                
         parent = current;

         //go to left of the tree
         if(data < parent->data) {
            current = current->left;                
            
            //insert to the left
            if(current == NULL) {
               parent->left = tempNode;
               return;
            }
         }
			
         //go to right of the tree
         else {
            current = current->right;
            
            //insert to the right
            if(current == NULL) {
               parent->right = tempNode;
               return;
            }
         }
      }            
   }
}

struct node* Search(int search_element)
{
   struct node *current = root;
   
   while(1)
   {
       if(current != NULL)
       {
           if(current->data == search_element)
                return current;
                
            else if(current->data > search_element)
                current = current->left;
                
            else
                current = current->right;
                
       }
       
       else{     
        current = NULL;
        return current;
       }
   }
  
  
    
    
}

void InOrder_Traversal(struct node* node)  //Ascending order result 
{
     if (node == NULL) 
        return; 
  
    /* first recur on left child */
    if(node->left != NULL)
        InOrder_Traversal(node->left); 
  
    /* then print the data of node */
 
    printf(" %d ->",node->data);
  
    /* now recur on right child */
    if(node->right != NULL)
        InOrder_Traversal(node->right); 
}

void PreOrder_Traversal(struct node *node)
{
    if(node == NULL)
        return;
        
    printf("%d ->",node->data);
        
    if(node->left != NULL)
        PreOrder_Traversal(node->left);
        
    
    if(node->right != NULL)
        PreOrder_Traversal(node->right);
        
    
}

void PostOrder_Traversal(struct node *node)
{
    if(node == NULL)
        return;
        
   
        
    if(node->left != NULL)
        PostOrder_Traversal(node->left);
        
    
    if(node->right != NULL)
        PostOrder_Traversal(node->right);
        
     printf("%d ->",node->data);
}

void main()
{

    /* Sample input */
    
    Insertion(50);
    Insertion(49);
    Insertion(52);
    Insertion(46);
    Insertion(48);
    Insertion(53);
    Insertion(57);
    Insertion(45);

    InOrder_Traversal(root);
    
}

/* Sample Output */

/*

 45 -> 46 -> 48 -> 49 -> 50 -> 52 -> 53 -> 57 ->  
 
 */








