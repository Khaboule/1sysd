#include<stdio.h>
#include<stdlib.h>

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

node *append_val(node *head, int val) {
    node *newnode, *walk;

    newnode = create_node(val);
   
    // note : on peut omettre tous les "!= NULL"
    // un pointeur est "faux" ssi il est NULL
    if (head == NULL) { // liste vide
        head = newnode;
    } else {            // on parcourt la liste jusqu'à la fin
        walk = head;
        while (walk->next != NULL) { // on va jusqu'au dernier nœud
            walk = walk->next;
        }
        walk->next = newnode; // on ajoute le nouvel élément
    }
    return head;
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

int sum(node *head) {
    int s = 0;
    node *walk;

    walk = head;
    while(walk) {
        s += walk->val; 
        walk = walk->next;
    }
    return s;
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

int min(node *head) {
    int m;
    node *walk;

    m = head->val; // Existe car liste non vide (NULL)
    walk = head->next; // idem
    while (walk) {
        if (walk->val < m) {
            m = walk->val; //màj du min
        }
        walk = walk->next;
    }
    return m;
}


node *insert_val(node *head, int val) {
    node *newnode;
    
    newnode = create_node(val);
    newnode->next = head;

    return newnode;
}

node *remove_val(node *head, int val) {
    node *walk, *p;
    // vide on revoie la liste inchangée
    if (head == NULL) {
        return head;
    }
    // la valeur est en tête
    if (head->val == val) {
        p = head->next;
        free(head);
        return p;
    }
    // la valeur est (peut-être plus loin) 
    // p pointe vers l'entrée précédente
    p = head;
    walk = head->next;
    while (walk && walk->val != val) {
        p = walk;
        walk = walk->next;
    }
    if (walk != NULL) {
        p->next = walk->next;
        free(walk);
    }
    return head;
}

node *reverse_list(node *head) {
    node *head2 = NULL;
    node *walk;
    
    walk = head;
    while (walk) {
        head2 = insert_val(head2, walk->val);
        walk = walk->next;
    }
    return head2;
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



int main() {
    node *head = NULL;
    node *empty = NULL;

    // Note: c'est seulement lors de l'ajout
    // initial que head change (il passe de NULL
    // à un pointeur vers le premier elt [42, NULL]
    head = append_val(head, 42);
    head = append_val(head, 12);
    head = append_val(head, 100);
    head = append_val(head, -5);
    head = append_val(head, 41);

    print_list(head);
    printf("Longueur : %d\n", length(head));
    printf("Maximum : %d\n", max(head));
    printf("Minimum : %d\n", min(head));
    printf("Somme : %d\n", sum(head));
    printf("Longueur (liste vide) : %d\n", length(empty));
    printf("Insertion de 34\n");
    head = insert_val(head, 34);
    print_list(head);
    printf("Suppression de 100\n");
    head = remove_val(head, 100);
    print_list(head);
    printf("Suppression de 34\n");
    head = remove_val(head, 34);
    print_list(head);
    printf("Suppression de 41\n");
    head = remove_val(head, 41);
    print_list(head);
    printf("Suppression de 22\n");
    head = remove_val(head, 22);
    print_list(head);
    printf("Liste inversée :\n");
    print_list(reverse_list(head));

    exit(0);
}