#include<stdio.h>
#include<stdlib.h>
typedef struct Node Node;
struct Node {
    int value;
    Node *next;
};

void print_list(Node *head) {
    Node *current = head;
    while( current ) {
        printf("%d ", current->value);
        current = current->next; 
    }
    printf("\n");
}

Node *new_node(int value) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

Node *append_value(Node *head, int value) {
    Node *current;
    if ( head == NULL ) {
        head = new_node(value);
    } else {
        current = head;
        while ( current->next ) {
            current = current->next;
        }
        current->next = new_node(value);
    }
    return head;
}

int length(Node *head) {
    Node *current = head;
    int len = 0;
    while( current ) {
        len++;
        current = current->next;
    }
    return len; 
}

int total(Node *head) {
    Node *current = head;
    int sum = 0;
    while ( current ) {
        sum += current->value;
        current = current->next;
    }
    return sum;
}

double average(Node *head) {
    return (double)total(head) / length(head);
}

int cmp_list(Node *head1, Node *head2) {
    Node *c1 = head1;
    Node *c2 = head2;
    while ( c1 != NULL && c2 != NULL ) {
        if ( c1->value != c2->value )
            return 0;
        c1 = c1->next;
        c2 = c2->next;
    }
    return (c1 == NULL && c2 == NULL) ? 1 : 0;
}

int main() {
    Node *head = NULL;
    head = append_value(head, 42);
    head = append_value(head, 4);
    head = append_value(head, 5);
    head = append_value(head, 42);
    head = append_value(head, 1);

    printf("Liste        : ");
    print_list(head);
    printf("Longueur     : %d\n", length(head));

    printf("\n--- Test total ---\n");
    printf("Somme        : %d\n", total(head));   /* attendu : 94 */

    printf("\n--- Test average ---\n");
    printf("Moyenne      : %.2f\n", average(head)); /* attendu : 18.80 */

    printf("\n--- Test cmp_list ---\n");

    Node *same = NULL;
    same = append_value(same, 42);
    same = append_value(same, 4);
    same = append_value(same, 5);
    same = append_value(same, 42);
    same = append_value(same, 1);
    printf("head vs same (attendu 1) : %d\n", cmp_list(head, same));

    Node *diff = NULL;
    diff = append_value(diff, 42);
    diff = append_value(diff, 4);
    diff = append_value(diff, 99);  
    diff = append_value(diff, 42);
    diff = append_value(diff, 1);
    printf("head vs diff (attendu 0) : %d\n", cmp_list(head, diff));

    Node *shorter = NULL;
    shorter = append_value(shorter, 42);
    shorter = append_value(shorter, 4);
    shorter = append_value(shorter, 5);
    printf("head vs shorter (attendu 0) : %d\n", cmp_list(head, shorter));

    printf("NULL vs NULL (attendu 1) : %d\n", cmp_list(NULL, NULL));

    exit(0);
}