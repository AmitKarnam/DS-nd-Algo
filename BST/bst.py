class Node:
    def __init__(self,data):
        
        self.left = None
        self.data = data
        self.right = None
        
    
    def insert(self,data):
        
        """
        Method to insert data into Binary Tree
        """
        
    # If root node already present    
        if self.data:
            if data < self.data:
               if self.left is None:
                   self.left = Node(data)
            
               else:
                   self.left.insert(data)
                   
            
            elif data > self.data :
                if self.right is None:
                    self.right = Node(data)
                
                else:
                    self.right.insert(data)
    
    # If root not present
        else:
            self.data = data
            
    
    def printInOrderTree(self):
        """
        Method to print the tree data In Order
        """
        if self.left:
            self.left.printInOrderTree()
            
        print(self.data)
        
        if self.right:
            self.right.printInOrderTree()
            
    def printPreOrderTree(self):
        """
        Method to print the tree data Pre Order
        """
        print(self.data)
        
        if self.left:
            self.left.printPreOrderTree()
        
        if self.right:
            self.right.printPreOrderTree()
            
    def printPostOrderTree(self):
        """
        Method to print the tree data Post Order
        """
        if self.left:
            self.left.printPostOrderTree()
        
        if self.right:
            self.right.printPostOrderTree()
            
        print(self.data)
        

BST = Node(4)
BST.insert(2)
BST.insert(1)
BST.insert(3)
BST.insert(5)
BST.insert(6)

print("\nInorder Tree : ")
BST.printInOrderTree()

print("\nPre Order Tree : ")
BST.printPreOrderTree()

print("\nPost OrderTree Tree : ")
BST.printPostOrderTree()

# Output 

#Inorder Tree : 
#1
#2
#3
#4
#5
#6

#Pre Order Tree : 
#4
#2
#1
#3
#5
#6

#Post OrderTree Tree : 
#1
#3
#2
#6
#5
#4

