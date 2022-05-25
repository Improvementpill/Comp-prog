#include <stdio.h>
#include <stdlib.h>
void main()
{
  struct node
  {
   int data;
   struct node *next;
  };
  struct node *head=NULL,*pos=NULL,*tail=NULL;
  int ch,entry;
  while(1)
  {
    printf("\n\n 1:INSERT \n 2:DISPLAY \n 3.COUNT \n 4.SEARCH AN ELEMENT \n 5.DEL\n6.EXIT");
    printf("\n\n Enter your choice:"); 
    scanf("%d", &ch);
    switch(ch)
    {
      case 1:{
              printf("\n EnterData:");
              scanf("%d",&entry);
              if(head==NULL)
              {
                head=(struct node*) malloc(sizeof(struct node));
                head->data=entry;
                pos=head;
                tail=head;
               }
               
               else
               {
                tail->next=(struct node*) malloc(sizeof(struct node));
                tail=tail->next;
                tail->data=entry;
               }break;
              }
      case 2:{
              pos=head;
              printf("\n ELEMENTS ARE:");
                while(pos!=NULL)
                {
                  printf("\t%d",pos->data);
                  pos=pos->next;
                 } break;
               }
               
      case 3:{
              	int i=0;
     			pos=head;
     			while(pos!=NULL)
     			{
     					i++;
     					pos=pos->next;
     			}
     			printf("\nThe no.of elements=%d\n",i);
     			break;
             }
             
     case 4:{
     			int x,y,flag=0;
     			printf("Enter the element to be Searched\t");
     			scanf("%d",&x);
     			pos=head;
     			while(pos!=NULL)
     			{
     				y++;
     				if(pos->data==x)
     				{
     					printf("Element %d found at %d\t",x,y);
     					flag=1;
     				}
     				pos=pos->next;
     			}
     			if(flag==0)
     				{
     					printf("Element Not  Found\n");
     				}
     			break;
     		}
     				
     case 5:{
     			struct node *temp=head;
     			printf("\n Enter position of data");
     			scanf("%d",&entry);
     			if(entry==0)
     			{
     				head=head->next;
     				temp->next=NULL;
     				free(temp);
     			}
     			else
     			{
     				for(int i=0;i<entry-1;i++)
     					temp=temp->next;
     					struct node*del=temp->next;
     					temp->next=temp->next->next;
     					del->next=NULL;
     					free(del);
     			}
     			break;
     			}				
            
     case 6:{
     			printf("\nGoodBye\n");
                exit(0);
     			
     		}	    
   }
  }
 }
 
