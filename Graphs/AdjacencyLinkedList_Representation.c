#include <stdio.h>
#include<stdlib.h>

//A structure to represent Nodes used to store destination vertex from a source. 
struct Node{
    int dest;
    struct Node *next;
};

//A structure used to define adjacency list with pointer to node
struct adjacencyList{
    struct Node *head;
};

//A structure to represent Graph.
//It contains a array of adjacency list.
struct Graph{
    int V;
    struct adjacencyList *array;
};


//Function to create a new node i.e a new adjacency list node
struct Node* newNode(int dest) 
{ 
    struct Node* newnode = 
     (struct Node*) malloc(sizeof(struct Node)); 
    newnode->dest = dest; 
    newnode->next = NULL; 
    return newnode; 
}


//A function to create a graph with 'V' vertices
struct Graph* createGraph(int V) 
{ 
    struct Graph* graph =  
        (struct Graph*) malloc(sizeof(struct Graph)); 
    graph->V = V; 
  
    // Create an array of adjacency lists. 
    //Size of array will be V 
    graph->array =  
      (struct adjacencyList*) malloc(V * sizeof(struct adjacencyList)); 
  
    // Initialize each adjacency list as empty by making head as NULL 
    int i; 
    for (i = 0; i < V; ++i) 
        graph->array[i].head = NULL; 
  
    return graph; 
} 


void addEdge(struct Graph* graph,int src,int dest)
{
    struct Node* newadjnode = newNode(dest);
    
    //If condition to add the first node in the list
    if(graph->array[src].head == NULL)
        graph->array[src].head = newadjnode;
        
    //Condition to connect new node to nodes in the adjanceny list    
    else
    {
        struct Node* temp = graph->array[src].head;
        
        while(temp->next != NULL)
            temp = temp->next;
            
        temp->next = newadjnode;
    }
    
    // Since graph is undirected,an edge destination to source is added
    newadjnode = newNode(src);
    
    if(graph->array[dest].head == NULL)
        graph->array[dest].head = newadjnode;
        
    else{
        struct Node* temp = graph->array[dest].head;
        
        while(temp->next != NULL)
            temp = temp->next;
            
        temp->next = newadjnode;
    }
        
}

// print the adjacency list representation of the above graph
void printGraph(struct Graph* graph) 
{ 
    int v; 
    for (v = 0; v < graph->V; ++v) 
    { 
        struct Node* printNode = graph->array[v].head; 
        printf("\n Adjacency list of vertex %d\n head ", v); 
        while (printNode) 
        { 
            printf("-> %d", printNode->dest); 
            printNode = printNode->next; 
        } 
        printf("\n"); 
    } 
} 


int main() 
{ 
    // create the graph with some input to demonstrate working of the program
    int V = 5; 
    struct Graph* graph = createGraph(V); 
    addEdge(graph, 0, 1); 
    addEdge(graph, 0, 4); 
    addEdge(graph, 1, 2); 
    addEdge(graph, 1, 3); 
    addEdge(graph, 1, 4); 
    addEdge(graph, 2, 3); 
    addEdge(graph, 3, 4); 
  
     
    printGraph(graph); 
  
    return 0; 
} 


/* Output */

/* 
                                                                     
 Adjacency list of vertex 0                                          
 head -> 1-> 4                                                       
                                                                     
 Adjacency list of vertex 1                                          
 head -> 0-> 2-> 3-> 4                                               
                                                                     
 Adjacency list of vertex 2                                          
 head -> 1-> 3                                                       
                                                                     
 Adjacency list of vertex 3                                          
 head -> 1-> 2-> 4                                                   
                                                                     
 Adjacency list of vertex 4                                          
 head -> 0-> 1-> 3     
 
 */
