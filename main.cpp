//
//  main.cpp
//  linklist4
//
//  Created by Ijaz Tufail on 14/09/2022.
//

#include <iostream>
using namespace std;
class linklist{
    class node {
    public:
        int data;
        node* next;

        node( ){
            data=0;
            next=NULL;


        }
        ~node ( ){

        }
    };
private:
    int size;
    int count;
    node*head;
    node*curr;
    node*temp;
    int pos;
    int value;
    node* privious;
public:
    linklist( ){
        size=0;
        value=0;
        pos=0;
        count=0;
        head=NULL;
        curr=NULL;
        temp=NULL;
        privious=NULL;
    }
    void heAd( ){
        head=temp;
    }

    void add( ){
        cout<<" enter size of linklist"<<endl;
        cin>>size;
        for( int i=0;i<size;i++){
            temp=new node;
            if ( head==NULL){
                head =temp;
                cout<<" enter the data in NO "<<count<<" "<<"list"<<endl;
                cin>>head->data;
                count++;
            }
            else{
                curr=head;
                while (curr->next!=NULL) {
                    curr=curr->next;

                }
                curr->next=temp;
                cout<<" Enter the data in NO "<<count<<" "<<"list"<<endl;
                cin>>curr->data;
                count++;
            }

        }

    }
    void reverse( ){
        curr=head;
        while (curr!=NULL) {
            temp=curr->next;
            curr->next=privious;
            privious=curr;
            curr=temp;

        }
        head=privious;
        while (privious->next!=NULL) {
            cout<<"linklsit data of list are "<< " "<<privious->data<<endl;
            privious=privious->next;
        }
    }
    void printing( ){
        curr=head;
        while (curr->next!=NULL) {
            cout<<"linklsit data of list are "<< " "<<curr->data<<endl;
            curr=curr->next;
        }

    }
        void insert( ){
            temp=new node;
            cout<<" enter the No of linklist position"<<" "<<endl;
            cin>>pos;
            if ( pos<1|| pos>count+1){
                cout<<" invalid position"<<endl;
            }
            else if (pos==1){
                temp->next=head;
                temp=head;
                cout<<" Enter the data in  "<<"list"<<endl;
                cin>>temp->data;
                curr=head;
            }
            else{
                curr=head;
                for (int i=1; i<pos-1; i++) {
                    curr=curr->next;
                }
                node* temp2=curr;
                curr=curr->next;
                temp2->next=temp;
                cout<<" Enter the data in  "<<"list"<<endl;
                cin>>temp->data;
                if( curr!=NULL){
                    temp->next=curr;


                }

            }




        }
    void remove( ){
        cout<<" enter the No of linklist position"<<" "<<endl;
        cin>>pos;
        if ( pos<1|| pos>count+1){
            cout<<" invalid position"<<endl;
        }
        if( pos==1){
            curr=head;
            head=curr->next;
            delete curr;
        }

        else{
            curr=head;
            for(int i=1;i<pos-1;i++){
                curr=curr->next;

            }
            temp=curr;
            curr=curr->next;
            temp->next=curr->next;
            delete curr;
        }
    }

    void remove2( ){
        cout<<" enter the No of linklist value"<<" "<<endl;
        cin>>value;
        curr=head;
        count=0;
        while ( curr->data!=value) {
        curr=curr->next;
            count++;

        }
        curr=head;
        for( int i=1;i<count;i++){
            curr=curr->next;


        }

        temp=curr;
        curr=curr->next;
        temp->next=curr->next;
        delete curr;
    }

//    void assending( ){
//        curr=head;
//        for(int i=0;i,count;i++ ){
//            fo
//        }
//    }



};


int main() {
    linklist l1;
    l1.add();
  l1.printing();
    l1.reverse();
    l1.printing();
 l1.insert();
 l1.printing();
// l1.remove();
 l1.remove2();
 l1.printing();

}

