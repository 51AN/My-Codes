#include<bits/stdc++.h>
using namespace std;


struct node
{
    int val;
    node * next;
    bool flag = false;
};

class Singly_linked_list{
public:
    node *head,*tail;

    Singly_linked_list()
    {
        head = nullptr;
        tail = nullptr;
    }

    void PushBack(int n)
    {
        node* temp = new node();
        temp->val = n;
        temp->next = NULL;
        if(head==NULL)
            head=temp;
        else
        {
                node* temp1 = head;
                while (temp1->next != NULL)
                {
                    temp1 = temp1->next;
                }
                temp1->next = temp;
        }
    }

    void display()
    {
        node *cur = head;

        while(cur != nullptr)
        {
            cout << cur->val << endl;
            cur = cur->next;
        }
        cout<<endl;
    }

    void Reverse()
    {
        node *current, * prev, * temp;
        current = head;
        prev = NULL;
        while (current != NULL)
        {
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        head = prev;
    }

    bool hasCycle(){
        node *current = head;
        while(current != nullptr){
            if(current->next->flag == true){
                return true;
            }
            current = current->next;
            current->flag = true;
        }
        return false;
    }
    

};



int main()
{
    Singly_linked_list a;
    int n,val;
    

    for(int i =1 ; i < 10; i++)
        a.PushBack(i);

    a.display();
    a.Reverse();
    a.PushBack(100);
    a.display();
}