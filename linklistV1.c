#include<stdio.h>
#include<stdlib.h>
void main()
{	
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch,entry,c;
	while(1)
	{
		printf("\n1.INSERT\n2.DISPLAY\n3.COUNT\n4.EXIT");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter data:");
				scanf("%d",&entry);
				if(head==NULL)
				{
					head=(struct node*)malloc(sizeof(struct node));
					head->data=entry;
					pos=head;
					tail=head;
				}
				else
				{
					tail->next=(struct node*)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
				}
				break;
			}
			case 2:
			{
				pos=head;
				printf("\n Elements are:");
				while(pos!=NULL)
				{
					printf("\t %d",pos->data);
					pos=pos->next;
				}
				break;
			}
			case 3:
			{
				pos=head;
				while(pos!=NULL)
				{
					c=c+1;
					pos=pos->next;
				}
				printf("\n Number of elements:%d",c);
				break;		
			}
			case 4:
			{
				printf("Exiting!");
				exit(0);
			}
		}
		printf("\n");
	}
}
