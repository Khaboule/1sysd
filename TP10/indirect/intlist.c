#include<stdio.h>
#include<stdlib.h>

// meilleure implémentation utilisant des pointeurs vers des pointeurs

typedef struct node node;
struct node {
   int val;
   node *next;
};

node *create_node(int val) {
    node *p;
    p = malloc(sizeof(node));
    p->val = val;
    p->next = NULL;
    return p;
}

void print_list(node *head) {
    node *walk;

    walk = head;
    while (walk != NULL) { // ou juste walk 
        printf("%d ", walk->val);
        walk = walk->next;
    }
    printf("\n");
}

void append_val(node **phead, int val) {
    node *newnode, **pwalk;

    newnode = create_node(val);

    pwalk = phead;
    while (*pwalk) {
        pwalk = &( (*pwalk)->next );
    }
    *pwalk = newnode;
}

int length(node *head) {
    int l = 0;
    node *walk;

    walk = head;
    while(walk) {
        l++;
        walk = walk->next;
    }
    return l;
}

int max(node *head) {
    int m;
    node *walk;

    m = head->val; // Existe car liste non vide (NULL)
    walk = head->next; // idem
    while (walk) {
        if (walk->val > m) {
            m = walk->val; //màj du max
        }
        walk = walk->next;
    }
    return m;
}

void insert_val(node **phead, int val) {
    node *old_head = *phead;

    *phead = create_node(val);
    (*phead)->next = old_head;
} 

// renvoie un pointeur vers le premier élément
// ayant une certain valeur (NULL si non trouvé)
node *find_by_val(node *head, int val) {
    node *walk;
    walk = head;
    while (walk && walk->val != val) {
        walk = walk->next;
    }
    return walk;
}

void remove_list_entry(node **phead, node *entry) {
    node **pwalk = phead;
    if (entry == NULL) {
        return;
    }
    while ( (*pwalk) != entry ) {
        pwalk = &((*pwalk)->next);
    }
    *pwalk = entry->next;
    free(entry);
}


int main() {
    node *head = NULL;
    node *empty = NULL;
    node *p;

    append_val(&head, 42);
    append_val(&head, 12);
    append_val(&head, 100);
    append_val(&head, -5);
    append_val(&head, 41);
    
    print_list(head);
    printf("Longueur : %d\n", length(head));
    printf("Maximum : %d\n", max(head));
    printf("Longueur (liste vide) : %d\n", length(empty));
    printf("Insertion de 34\n");
    insert_val(&head, 34);
    print_list(head);
    printf("Suppression de 100\n");
    p = find_by_val(head, 100);
    remove_list_entry(&head, p);
    print_list(head);
    printf("Suppression de 22\n");
    p = find_by_val(head, 22);
    remove_list_entry(&head, p);
    print_list(head);
}