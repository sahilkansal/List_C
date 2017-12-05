typedef struct node{
	int data;
	node *next;
	node(int, node *);
};

void insert_node(node **, int);
void traverse(node **);
void delete_node(node **);
void add_after_parti_node(node **, int, int);