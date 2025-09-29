#include<iostream>
#include<vector>
using namespace std;
typedef struct node{
    int data;
    node* next;

}n;
n*head=nullptr;
n*create(int data){
   
        n*newNode=new n();
        newNode->data=data;
        newNode->next=nullptr;
        return newNode;
   
}
void insertatfront(int data){
    if(head==nullptr){
    head=create(data);
    return;
    }
    n*newNode=create(data);
    newNode->next=head;
    head=newNode;

}
void insertatend(int data){
    if(head==nullptr){
        head=create(data);
        return;
    }
    n*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=create(data);
    temp->next->next=nullptr;

}
void deleteatend(){
    n*temp=head;
    if(temp==nullptr){
        cout<<"The list is empty!\n";
        return;
    }
    else if(temp->next==nullptr){
        cout<<"The list with data "<<temp->data<<" is deleted successfully";
        head=nullptr;
        delete(temp);
        return;
    }
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    cout<<"The list with data "<<temp->next->data<<" is deleted successfully";
    delete(temp->next);
    temp->next=nullptr;
    return;
}
void deleteatfront(){
    if(head==nullptr){
        cout<<"\nThe list is empty no data is there to display!\n";
        return;

    }
    n*temp=head;
    cout<<"\nThe list with data "<<temp->data<<" is deleted successfully\n";
    head=head->next;
    delete(temp);
}
void avoidmemoryleak(){
    n*temp=head;
    while(temp!=nullptr){
        temp=head;
        head=head->next;
        delete(temp);
    }
}
int main(){
    int ch,data;
    while(1){
        cout<<"Enter 1 to insert at front\n"
            <<"Enter 2 to insert at end\n"
            <<"Enter 3 to display\n"
            <<"Enter 4 to delete at end\n"
            <<"Enter 5 to delete at front\n"
            <<"Enter 6 to exit\n";

        cin>>ch;

        switch(ch){
            case 1:cout<<"\nEnter the data to be inserted:";
                   cin>>data;
                   insertatfront(data);
                   break;
            case 2:cout<<"\nEnter the data to be inserted:";
                   cin>>data;
                   insertatend(data);
                   break;
            case 3:cout<<"\nThe Linked list is:\n";
                   if(head==nullptr){
                    cout<<"\nlist is empty\n";
                    break;
                   }
                   else{
                    n*temp=head;
                    int count=1;
                    while(temp!=nullptr){
                    
                        cout<<"list "<<count<<" data "<<temp->data<<endl;
                        temp=temp->next;
                        count++;
                    }
                    break;
                   }

            case 4:deleteatend();
                   break;
            case 5:deleteatfront();
                   break;
            case 6:cout<<"The list has successfully cleared";
                        avoidmemoryleak();
            default:cout<<"\nENter a correct choice\n";
                   break;
        }
            
    }
    
    

    
}