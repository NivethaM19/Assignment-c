
Conversation opened. 1 unread message.

Skip to content
Using Sri Krishna College of Engineering and Technology Mail with screen readers
Search



Mail
COMPOSE
Labels
Inbox (10)
Starred
Sent Mail
Drafts
More 
Hangouts

 
 
  More 
1 of 64  
 
Print all In new window
Document from Nive😇 
Inbox
x 

Nivetha Manikandan <15eucs081@skcet.ac.in>
Attachments9:34 PM (0 minutes ago)

to me 
Assignment c and java.txt
Attachments area
	
Click here to Reply or Forward
Using 0.95 GB
Manage
Program Policies
Powered by Google
Last account activity: 0 minutes ago
Details

  C PROGRAM FOR LINKED LIST CREATION AT START--------------->
  
  #include<stdio.h>
typedef struct n1{
	int data;
	struct n1 *next;
}node;
node *head,*temp,*temp1,*p;
void create(){
	printf("enter the data\n");
	int d;
	int m;
	if(head==NULL){
		head=(struct node*)malloc(sizeof(struct node*));
		scanf("%d",&d);
	    head->data=d;
		head->next=NULL;
		temp=head;
	}
	else{
	      temp1=(struct node*)malloc(sizeof(struct node*));
	      scanf("%d",&m);
	      temp1->data=m;
	      temp->next=temp1;
	      temp=temp->next;
	      temp->next=NULL;
	}
	
}
 void display(){
 	p=head;
 	printf("display the data\n");
 	while(p!=NULL){
 		printf("%d ",p->data);
 		p=p->next;
	 }
 	
 } 
 
 
int main(void){
	int n;
	node *head,*temp,*temp1;
	while(1){
		printf("\n");
		printf("1-create node\n2-display node\n");
		scanf("%d",&n);
		switch(n){
			case 1:
				create();
				break;
				case 2:
					display();
				
		}
	}
}

 
 C PROGRAM FOR LINKED LIST CREATION AT END--------------->

#include<stdio.h>
typedef struct n1{
	int data;
	struct n1 *next;
}node;
node *head,*temp,*temp1,*p;
void create(){
	printf("enter the data\n");
	int d;
	int m;
        temp1=(struct node*)malloc(sizeof(struct node*));
		scanf("%d",&d);
	    temp1->data=d;
		temp1->next=head;
		head=temp1;	
}
 void display(){
 	p=head;
 	printf("display the data\n");
 	while(p!=NULL){
 		printf("%d ",p->data);
 		p=p->next;
	 }
 	
 } 
 
 
int main(void){
	int n;
	node *head,*temp,*temp1;
	while(1){
		printf("\n");
		printf("1-create node\n2-display node\n");
		scanf("%d",&n);
		switch(n){
			case 1:
				create();
				break;
				case 2:
					display();
				
		}
	}
}


JAVA PROGRAM FOR LINKED LIST CREATION AT START--------------->


import java.util.*;
class node{
    int data;
    node next;
    node(int d){
       data=d;
       next=null;
    }
}
public class link {
   static node head,temp,temp1,t;
    int l;
    static void create(){
        if(head==null){
           System.out.println("enter the data");
           Scanner s=new Scanner(System.in);
           int l=s.nextInt();
           head=new node(l);
           head.next=null;
           temp=head;

        }
 else{
            System.out.println("enter the data");
            Scanner s=new Scanner(System.in);
            int l1=s.nextInt();
            temp1=new node(l1);
           temp.next=temp1;
           temp=temp.next;
 }
    }
    static void display(){
       t=head;
       System.out.println("display the data");
       while(t!=null){
           System.out.print(t.data+" ");
           t=t.next;
       }
    }

  public static void main(String aa[]){
      int g;
      while(true){
      System.out.println();
      System.out.println("1- create a node");
      System.out.println("2- display a node");
     Scanner s=new Scanner(System.in);
     g=s.nextInt();
    
         switch(g){
             case 1:
                 System.out.println("create");
                 create();
                 break;
             case 2:
                 System.out.println("display");
                 display();
                 break;
         }

     }
  }
}


JAVA PROGRAM FOR LINKED LIST CREATION AT END--------------->



import java.util.*;
class node{
    int data;
    node next;
    node(int d){
       data=d;
       next=null;
    }
}
public class link2 {
   static node head,temp,temp1,t;
    int l;
    static void create(){
        System.out.println("enter the data");
        Scanner s=new Scanner(System.in);
        int l1=s.nextInt();
        temp=new node(l1);
        temp.next=head;
        head=temp;
    }
    static void display(){
       t=head;
       System.out.println("display the data");
       while(t!=null){
           System.out.print(t.data+" ");
           t=t.next;
       }
    }

  public static void main(String aa[]){
      int g;
      while(true){
      System.out.println();
      System.out.println("1- create a node");
      System.out.println("2- display a node");
     Scanner s=new Scanner(System.in);
     g=s.nextInt();
         switch(g){
             case 1:
                 System.out.println("create");
                 create();
                 break;
             case 2:
                 System.out.println("display");
                 display();
                 break;
         }

     }
  }
}


Assignment c and java.txt
Open with Google Docs
Displaying Assignment c and java.txt.
