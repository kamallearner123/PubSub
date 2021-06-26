#include <stdio.h>


struct subscriber {
int id;
char *ip;
char port;
struct subscriber *nxt;
};


void add_subscriber(int id, char *ip, int port);
void del_subscriber(int id);
void get_subscriber();


struct subscriber *head = NULL;

//display the list
void print_subscriber_list( ) {
   struct subscriber *ptr = head;
   printf("\n[ ");

   //start from the beginning
   while(ptr != NULL) {
      printf("(%d,%d,%d) ",subscriber ->id, subscriber ->ip, subscriber -> port);
      ptr = ptr->nxt;
   }

   printf(" ]");
}


void add_subscriber_at_head(int id, char *ip, int port)
{

	subscriberNode = (subscriber *) malloc (sizeof(subscriber));
        firstSubscriber->id=d1;
	firstSubscriber->ip=ip;
	firstSubscriber->port=port;
	if (head == NULL)
	{
		head = subscriberNode;
		heead->next = NULL;
		return;
	}
	
	subscriberNode->next = head;
	head = subscriberNode;
	return;
}
