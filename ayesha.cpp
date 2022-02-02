#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    int data;
    int nid;
    node* next;
};

node* con(node* head, int n)
{
    node* temp = new node;
    for(int i=0;i<n;i++){
        int data;
        node* t = new node;
        cin >> data;
        t->data = data;
        t->next = nullptr;
        if(!head) {
            head = t;
            temp = head;
        } else {
            temp->next = t;
            temp = t;
        }
    }
    return head;
}

int find_id(node* head, int n)
{
    node* temp=head;
    int id=-1;
    while(id<n){
        bool flag=0;
        while(head!=nullptr) {
            if((head->data)==id) {
                flag=1;
                break;
            }
            head=head->next;
        }
        if(flag==0) return id;
        flag=0;
        head=temp;
        id++;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    node* head = new node;
    node* head2 = new node;
    head = nullptr;
    head2 = nullptr;
    head = con(head, n);
    head2 = con(head2, n);
    cout << find_id(head2, n);
    return 0;
}
